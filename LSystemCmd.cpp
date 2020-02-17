#include "LSystemCmd.h"


#include <maya/MGlobal.h>
#include <list>
LSystemCmd::LSystemCmd() : MPxCommand()
{
}

LSystemCmd::~LSystemCmd() 
{
}

MStatus LSystemCmd::doIt( const MArgList& args )
{
	MStatus status;
	MString name;
	MString id;
    MGlobal::executeCommand(MString("confirmDialog - title \"Hello Maya\" - message \"Name: CIS660 2020 Spring \\n ID : 34935512\"- button \"OK\" - defaultButton \"OK\"- cancelButton \"No\" - dismissString \"No\";"));



	return status;
}

