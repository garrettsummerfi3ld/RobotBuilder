#set($subsystem = $helper.getByName($subsystem-name, $robot))
#header()

${helper.getImports($subsystem, "RobotMap")}

\#include "#class($subsystem.name).h"
\#include "../Robotmap.h"

#class($subsystem.name)::#class($subsystem.name)() : Subsystem("#class($subsystem.name)") {
#@autogenerated_code("declarations", "	")
#parse("${exporter-path}Subsystem-declarations.cpp")
#end
}
    
void #class($subsystem.name)::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
#@autogenerated_code("default_command", "	")
#parse("${exporter-path}Subsystem-default_command.cpp")
#end
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

