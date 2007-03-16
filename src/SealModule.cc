#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/InputSourceMacros.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "L1Trigger/GlobalTriggerAnalyzer/interface/L1GtAnalyzer.h"


  DEFINE_SEAL_MODULE();
  DEFINE_ANOTHER_FWK_MODULE(L1GtAnalyzer);
