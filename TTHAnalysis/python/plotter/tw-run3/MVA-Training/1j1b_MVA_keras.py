# -*- coding: utf-8 -*-

import os, sys

# -- Data handling -- #
import pandas as pd
import numpy as np
import ROOT as r
from root_numpy import tree2array
import math
import pickle
import joblib

# -- ML -- #
from sklearn.metrics import confusion_matrix
from sklearn.metrics import classification_report
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression, LogisticRegressionCV
from sklearn.decomposition import PCA
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score 
from sklearn.metrics import roc_curve
from sklearn.metrics import roc_auc_score
from sklearn.ensemble import GradientBoostingClassifier
import xgboost as xgb
from tensorflow import keras
# -- Plotting -- #
import matplotlib
matplotlib.use('template')
import matplotlib.pyplot as plt


################# Customization #################

# -- Model name -- #
model_name = 'RandomForest'

# -- Paths -- #
inputPath = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/productions/2021-04-23/2016/x_mvatrain/"
outputPath = "/nfs/fanae/user/asoto/Proyectos/tW-Run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/tw-run3/MVA-Training/models/1j1b_RF/"

# -- Samples -- #
twFiles = ["tw.root", "tbarw.root"] 
ttbarFiles = ["ttbar.root"]

# -- Variables to be used in the training -- #
vars = ["train_nloosejets", "train_jet1_pt", "train_loosejet1_pt", "train_lep1lep2jet1met_m", "train_lep1lep2jet1_c", "train_lep1lep2jet1_pt",
"train_nbloosejets", "train_lep1lep2jet1met_ptOVERhttot", "train_htlepOVERhttot", "train_httot", "train_lep1jet1_dr", "train_lep1lep2jet1met_mt", "train_lep1lep2jet1_e",
"train_lep1jet1_pt", "train_lep1jet1_m", "train_lep2jet1_pt", "train_lep1lep2jet1met_pt"]

# All vars
vars = ['njets', 'nbjets', 'train_nloosejets', 'train_nbloosejets', 'train_jet1_pt', 'train_loosejet1_pt', 'train_lep1lep2jet1_pt', 'train_lep1lep2jet1met_pt', 'train_lep1lep2jet1met_ptOVERhttot', 'train_lep1lep2jet1met_m', 'train_htlepOVERhttot', 'train_lep1lep2jet1_c', 'train_lep1lep2jet1_cscalar', 'train_httot', 'train_jet2_pt', 'train_lep1jet1_dr', 'train_lep12jet12_dr', 'train_lep12jet12met_dr', 'train_lep1lep2jet1met_mt', 'train_lep1lep2jet1met_pz', 'train_lep1lep2jet1_m', 'train_lep1lep2jet1_e', 'train_lep1jet1_pt', 'train_lep1jet1_m', 'train_lep1jet2_m', 'train_lep2jet1_pt', 'train_lep2jet1_m', 'train_lepjet11lep2_dr', 'train_lepjet11lep2_dphi', 'train_lepjet11lep2_deta', 'train_lep1jetjet21_dr', 'train_lep1jetjet21_dphi', 'train_lep1jetjet21_deta', 'train_met_pt', 'train_met_phi', 'train_nfwdjet', 'train_nloosefwdjet', 'train_lep1lep2_pt', 'train_lep1lep2_ptsum', 'train_lep1lep2_dr', 'train_lep1lep2_dphi', 'train_lep1lep2_deta', 'train_lep1lep2_m', 'train_lep1_pt', 'train_lep1_eta', 'train_lep1_phi', 'train_lep1_m', 'train_lep2_pt', 'train_lep2_eta', 'train_lep2_phi', 'train_lep2_m', 'train_jet1_eta', 'train_jet1_phi', 'train_jet1_m', 'train_jet2_eta', 'train_jet2_phi', 'train_jet2_m', 'train_loosejet1_eta', 'train_loosejet1_phi', 'train_loosejet1_m', 'train_fwdjet1_pt', 'train_fwdjet1_eta', 'train_fwdjet1_phi', 'train_fwdjet1_m', 'train_fwdloosejet1_pt', 'train_fwdloosejet1_eta', 'train_fwdloosejet1_phi', 'train_fwdloosejet1_m']

# Vars for 1j1b (TOP-21-010)
vars = ["train_nloosejets", 
        "train_jet1_pt",
        "train_loosejet1_pt",
        "train_lep1lep2jet1met_m",
        "train_lep1lep2jet1_c",
        "train_lep1lep2jet1_pt"]

# Vars for 2j1b (TOP-21-010)
#vars = ["train_jet2_pt",
#        "train_lep1jet1_dr",
#        "train_lep12jet12_dr"]

# -- Cuts -- #
cuts = "(njets == 1) and (nbjets == 1) and (channel == 1)"
#cuts = "njets >= 0"

# -- Training parameters -- #
test_size = 0.3
start = 0 # Starting event
stop = -1 # Ending event



################# Customization end #################


# Let's create a class to handle the data, it will return a pandas dataframe with the label
class DataHandler:
    def __init__(self, inputPath, files, label, cuts, start = 0, stop = -1):
        self.inputPath = inputPath
        self.files = files
        self.label = label  
        self.cuts = cuts
        self.dataFrame = self.getData()

    def getData(self):
        # Create a list of TChain objects
        chain = r.TChain("Friends")
        for file in self.files:
            chain.Add(self.inputPath + file)
        
        ttree = chain
        arr = tree2array(ttree, start = start, stop = stop)
        
        # Convert to dataframe
        df_out = pd.DataFrame(arr)
        df_out["label"] = self.label

        # Apply cuts
        df_out = df_out.query(self.cuts)
        return df_out


# Let's create a class to handle the models
class ModelHandler:
    def __init__(self, model, name):
        self.model = model
        self.name = name
        # Set n_jobs to 1 to avoid problems when running in the cluster and verbose to 0 
        self.model.set_params(n_jobs = 1, verbose = 0)


    def save(self, outputPath, asPickle=False, asJobLib=False):
        # Save the model
        if asPickle:
            with open(outputPath + self.name + ".pkl", 'wb') as f:
                pickle.dump(self.model, f)
        elif asJobLib:
            joblib.dump(self.model, outputPath + self.name + ".joblib")
        else:
            self.model.save(outputPath + self.name + ".h5")
    
    def load(self, outputPath):
        # Load the model
        self.model = load_model(outputPath + self.name + ".h5")

# Create class to evaluate the performance of the model, plot the ROC curve and evaluate overtraining
class ModelEvaluator:
    def __init__(self, model, X_train, X_test, y_train, y_test, vars):
        self.model = model
        self.X_train = X_train
        self.X_test = X_test
        self.y_train = y_train
        self.y_test = y_test
        self.vars = vars
        self.y_pred_train = self.model.predict(self.X_train)
        self.y_pred_test = self.model.predict(self.X_test)
        # Predict probabilities (in keras predict and predict_proba are the same)
        self.y_pred_train_prob = self.model.predict_proba(self.X_train)
        self.y_pred_test_prob = self.model.predict_proba(self.X_test)
#        # Comment this part when it is not needed
#        # Measure the time it takes to evaluate the model (in seconds) with a for loop over each event
#        print(X_test.values[0])
#        import time
#        start = time.time()
#        for i in range(len(self.X_test)):
#            self.model.predict_proba([self.X_test.values[i]])
#        end = time.time()
#        print("Time to evaluate the model: ", end - start, "s")

    def plotROCforClassProb(self, outputPath):
        # Plot ROC curve with AUC

        # Compute ROC curve and ROC area for training and test sets
        fpr_train, tpr_train, _ = roc_curve(self.y_train, self.y_pred_train_prob[:,1])
        roc_auc_train = roc_auc_score(self.y_train, self.y_pred_train_prob[:,1])
        fpr_test, tpr_test, _ = roc_curve(self.y_test, self.y_pred_test_prob[:,1])
        roc_auc_test = roc_auc_score(self.y_test, self.y_pred_test_prob[:,1])

        # Plot ROC curve
        plt.figure()
        lw = 2
        plt.plot(fpr_train, tpr_train, color='darkorange', lw=lw, label='ROC curve train (area = %0.2f)' % roc_auc_train)
        plt.plot(fpr_test, tpr_test, color='green', lw=lw, linestyle='--', label='ROC curve test (area = %0.2f)' % roc_auc_test)
        plt.plot([0, 1], [0, 1], color='navy', lw=lw, linestyle='--')
        plt.xlim([0.0, 1.0])
        plt.ylim([0.0, 1.05])
        plt.xlabel('False Positive Rate')
        plt.ylabel('True Positive Rate')
        plt.title('Receiver operating characteristic')
        plt.legend(loc="lower right")
        plt.savefig(outputPath + "ROC_prob.png")
        plt.savefig(outputPath + "ROC_prob.pdf")
        plt.close()

    def evaluate(self):
        # Evaluate the model
        print(("Training accuracy: ", accuracy_score(self.y_train, self.y_pred_train)))
        print(("Test accuracy: ", accuracy_score(self.y_test, self.y_pred_test)))
        print(("Confusion matrix: ", confusion_matrix(self.y_test, self.y_pred_test)))
        print(("Classification report: ", classification_report(self.y_test, self.y_pred_test)))

    def overtraining(self):
        # Evaluate overtraining
        print(("Overtraining: ", accuracy_score(self.y_train, self.y_pred_train) - accuracy_score(self.y_test, self.y_pred_test)))

    def plotVarImportance(self, outputPath):
        # Plot variable importance
        plt.figure()
        # Order the variables by importance
        importance = self.model.feature_importances_
        indices = np.argsort(importance)[::-1]
        # Select 15 most important variables
        indices = indices[:15]
        top_vars = np.array([self.vars[i].split("train_")[1] for i in indices])
        plt.title("Feature importances")
        plt.bar(list(range(len(top_vars))), importance[indices], color="r", align="center")
        plt.xticks(list(range(len(top_vars))), top_vars, rotation=90)
        plt.xlim([-1, len(top_vars)])
        # Increase bottom margin to fit the x-axis labels
        plt.subplots_adjust(bottom=0.3)
        plt.savefig(outputPath + "varImportance.png")
        plt.savefig(outputPath + "varImportance.pdf")
        plt.close()

    def plotOutputModel(self, outputPath):
        y_pred_train_prob_signal = self.y_pred_train_prob[:,1][self.y_train == 1]
        y_pred_test_prob_signal = self.y_pred_test_prob[:,1][self.y_test == 1]
        y_pred_train_prob_background = self.y_pred_train_prob[:,1][self.y_train == 0]
        y_pred_test_prob_background = self.y_pred_test_prob[:,1][self.y_test == 0]
        # Plot the output of the model
        plt.figure(figsize=(8,5))
        plt.rcParams.update({'font.size': 15}) 
        plt.hist(y_pred_test_prob_background, 40, range=(0,1), color='blue', edgecolor='blue', lw=2, label='Background test', alpha=0.2, density=True)
        plt.hist(y_pred_test_prob_signal, 40, range=(0,1), color='red', edgecolor='red', lw=2, label='Signal test', alpha=0.2, density=True)
        plt.hist(y_pred_train_prob_background, 40, range=(0,1), color='green',histtype='step', lw=2, label='Background train', density=True)
        plt.hist(y_pred_train_prob_signal, 40, range=(0,1), color='brown',histtype='step', lw=2, label='Signal train',  density=True)
        plt.xlim([0,1])
        plt.xlabel('Event probability of being classified as signal')
        plt.title(r"$\bf{CMS } \it{Preliminary}$", fontsize=20, loc='left')
        plt.legend(loc="upper left")
        plt.grid(True)
        plt.savefig(outputPath + "outputModel.png")
        plt.savefig(outputPath + "outputModel.pdf")
        plt.close()
    
    def plotInputVariables(self, outputPath):
        # Do a loop over the variables
        for var in self.vars:
            # Plot the input variables
            plt.figure(figsize=(8,5))
            plt.rcParams.update({'font.size': 15}) 
            plt.hist(self.X_train[var][self.y_train == 0], 40, range=(self.X_train[var].min(), self.X_train[var].max()), color='blue', edgecolor='blue', lw=2, label='Background', alpha=0.2, density=True)
            plt.hist(self.X_train[var][self.y_train == 1], 40, range=(self.X_train[var].min(), self.X_train[var].max()), color='red', edgecolor='red', lw=2, label='Signal', alpha=0.2, density=True)
            plt.xlabel(var)
            plt.title(r"$\bf{CMS } \it{Preliminary}$", fontsize=20, loc='left')
            plt.legend(loc="upper left")
            plt.grid(True)
            plt.savefig(outputPath + var + ".png")
            plt.savefig(outputPath + var + ".pdf")
            plt.close()

def swish(x, beta = 1):
    '''
    Swish activation function
    ''' 
    return (x * keras.backend.sigmoid(beta * x))

def step_decay(epoch):
    '''
    Step decay function
    '''
    initial_lrate = 0.002
    drop = 0.5
    epochs_drop = 3.0 #reduce a la mitad el lrate cada n epocas
    lrate = initial_lrate * math.pow(drop, math.floor((1+epoch)/epochs_drop))
    return lrate



# Get the data
tw = DataHandler(inputPath, twFiles, 1, cuts, start, stop)
ttbar = DataHandler(inputPath, ttbarFiles, 0, cuts, start, stop)

# Concatenate the dataframes
df = pd.concat([tw.dataFrame, ttbar.dataFrame])


# Split the data
X_train, X_test, y_train, y_test = train_test_split(df[vars], df["label"], test_size=test_size, random_state=0)

### Neural Network with sci-kit learn
#from sklearn.neural_network import MLPClassifier
from sklearn.preprocessing import StandardScaler

# Scale the data because the NN is sensitive to the scale of the input variables
#scaler = StandardScaler()
#scaler.fit(X_train)
#X_train = scaler.transform(X_train)
#X_test = scaler.transform(X_test)
#
## Create the model
#model = MLPClassifier(hidden_layer_sizes=(200, 50, 200), max_iter=1000, activation='logistic', solver='adam', random_state=0, learning_rate_init=0.001, verbose=True)



#### AdaBoostClassifier (BDT)
# Create the classifier
##model = GradientBoostingClassifier(n_estimators=2000, max_depth=4,random_state=0,learning_rate=0.01,subsample=0.5)
#model=xgb.XGBClassifier(objective="binary:logistic",n_estimators=500,max_depth=2)
#bdt = AdaBoostClassifier(DecisionTreeClassifier(max_depth=3), algorithm="SAMME", n_estimators=200, learning_rate=0.5, n_jobs = n_jobs)
#model= AdaBoostClassifier(DecisionTreeClassifier(max_depth=4),n_estimators=2000,random_state=0)
##### BDT 1j1b
model = RandomForestClassifier(n_estimators=2000,max_depth=4,class_weight='balanced',oob_score=True,random_state=0, n_jobs = 12, verbose = 1)
##### BDT 2j1b
#model = RandomForestClassifier(n_estimators=200,max_depth=3,class_weight='balanced',oob_score=True,random_state=0, n_jobs = 12, verbose = 1)
##model.n_jobs = 12


# -- Create a neural network with keras -- #  ###TODO: Add a validation set
###keras.utils.get_custom_objects().update({'swish': swish}) # Add the swish activation function to keras
###lr_schedule = keras.callbacks.LearningRateScheduler(step_decay)
###model = keras.models.Sequential()
###normal_ini=keras.initializers.glorot_normal(seed=None)
##### Model 1:
###model.add(keras.layers.Dense(128,  input_shape = (len(vars),), activation='swish'))
###model.add(keras.layers.Dense(64, activation='swish'))
###model.add(keras.layers.Dense(32, activation='swish'))
###model.add(keras.layers.Dense(16, activation='swish'))
###model.add(keras.layers.Dense(8, activation='swish'))
###model.add(keras.layers.Dense(2, activation='softmax'))
###model.summary()
###
###adam=keras.optimizers.Adam(lr=0.0001)
###sgd = keras.optimizers.SGD(lr=0.01)
###adamax=keras.optimizers.Adamax(lr=0.002, beta_1=0.9, beta_2=0.999, epsilon=None, decay=0.0)
###model.compile(loss='binary_crossentropy', optimizer="adam", metrics = ["accuracy"])
###histObj = model.fit(X_train, keras.utils.to_categorical(y_train), epochs=10, callbacks=[lr_schedule], batch_size=64)



# Train the model (scikit-learn)
model.fit(X_train, y_train)

# Create the output directory
outputPath = outputPath + model_name + "/" # Redifine the output path to be the model name
if not os.path.exists(outputPath):
    os.makedirs(outputPath)

# Evaluate the model
modelEvaluator = ModelEvaluator(model, X_train, X_test, y_train, y_test, vars)
modelEvaluator.evaluate()
modelEvaluator.plotROCforClassProb(outputPath)
modelEvaluator.overtraining()
modelEvaluator.plotVarImportance(outputPath)
modelEvaluator.plotOutputModel(outputPath)
modelEvaluator.plotInputVariables(outputPath)


# Save the model
modelHandler = ModelHandler(model, model_name)
modelHandler.save(outputPath, asJobLib=True)

# Load the model
#modelHandler = ModelHandler(model, model_name)
#modelHandler.load(outputPath)




