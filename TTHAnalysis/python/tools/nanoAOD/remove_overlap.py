from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class OverlapRemover( Module ):
  def __init__(self):
    self.triggers     = None
    self.vetotriggers = None
  def beginJob(self):
    pass
  def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    pass
  def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    pass

  def analyze(self, event):
    # If no triggers are required, vetos are not applied
    if len(self.triggers) == 0: return True

    # Control variables
    passesTrigger = False; passesVeto = True

    # -- Check if event passes the trigger
    for trig in self.triggers:
      if not hasattr(event, trig):
        continue
      if getattr(event, trig):
        passesTrigger = True

    if not passesTrigger:
        return False

    # -- Check if it also passes the veto triggers
    for trig in self.vetotriggers:
      if not hasattr(event, trig):
        continue
      if getattr(event, trig): 
        return False

    return True

  def initComponent(self, component):
    # called from nanopy.py -- when running with nanopy_batch.py 
    self.triggers     = component.triggers
    self.vetotriggers = component.vetoTriggers
    return True
    

