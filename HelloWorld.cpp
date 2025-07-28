
#include <iostream>
#include "llvm/Transforms/Utils/HelloWorld.h"
#include "llvm/IR/Function.h"


//code for the custom pass
using namespace llvm;

PreservedAnalyses HelloWorldPass::run(Function &F,FunctionAnalysisManager &AM) 
{
  errs() << F.getName() << "\n";
  return PreservedAnalyses::all();
}


