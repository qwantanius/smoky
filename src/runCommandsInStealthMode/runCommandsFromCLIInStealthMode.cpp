#include <string>
#include <iostream>
#include "runCommandsFromCLIInStealthMode.h"
#include "runCommandsInStealthMode.h"




/* DOC                   : how to use   [private] [function] @void main(@int argc, @char** argv)
 * @int argc             : [input] from [main] file _start fucntion
 * @char** argv          : [arr] from   [main] file _ start function
 * @char|@dtring command : 2nd element of argv [arr]
 * NOTICE                : USED ONLY TO TRANSFER COMMANDLINE INPUT FROM MAIN ENTRY POINT OF APPLICATION
 * ABOUT                 : Here we only convert char* to the std::string by str [method]
*/
void _main(int argc, char** argv){
	const char* command = argv[1];
	std::string str(command);
	runThisCommandInStealthMode(command,true);
}
