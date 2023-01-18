# CMG tools analysis framework

Last updated: **18 Oct 2022**

(Documentation work in progress)

There are several presentations with some documentation: links a presentaciones de carlos, petrucciany...

Most of the analysis are implemented using the developments of ttH multilepton. Here we will document the tW Run3 analysis.

Caveat: there are a lot of files in each folder, most of them not used. We will only document the important ones for tW Run3.

  * [Macros](#macros)
  * [Tools](#tools)
  * [NanoAOD](#nanoAOD)

<a name="macros"></a>
## Macros
With prepareEventVariablesFriendTree.py we create the neccesary friend trees for the analysis. For documentation regarding what is a friend tree consult:.

We have created a helper to automatise the friend tree creation process: . You should always follow these four steps:

  * Create the friend trees chunks: `python produceFriendTrees_TopRun3.py -y 2022 -s 0 -d all -q batch -n 8`
  * Check if all chunks are created: `python produceFriendTrees_TopRun3.py -y 2022 -s 0 -d all -c`
  * Merge all chunks: `python produceFriendTrees_TopRun3.py -y 2022 -s 0 -d all -m`
  * Check if the merged chunks are ok: `python produceFriendTrees_TopRun3.py -y 2022 -s 0 -d all -m -c`

<a name="tools"></a>
## Tools
Inside python folder.
With eventVars_TopRun2UL.py we create the event variables for the analysis. These variables go in a friend tree, in our case, the number 3.
Modules: eventVars_TopRun3.py, particleAndPartonVars_TopRun3.py

<a name="nanoAOD"></a>
## NanoAOD
Inside python/tools folder.
Here we have the TopRun3_Modules.py. It contains all the modules that will be called by the produceFriendTrees.
Modules: pythonCleaningTopRun3.py, lepScaleFactors_TopRun3.py, jetMetGrouper_TopRun3.py, btag_weighterRun3.py
  
  * `pythonCleaningTopRun3.py`:

<a name="plotter"></a>
## Plotter
Inside python folder.
