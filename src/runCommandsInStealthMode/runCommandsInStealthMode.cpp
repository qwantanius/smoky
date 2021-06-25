#include <string>
#include "runCommandsInStealthMode.h"

/*
 * This string mute each echo of every command (instead of input - read HOWTO and NOTICE)
 */
const std::string MUTE_OUTPUT = "> /dev/null 2>&1";




/* DOC                   : how to use   [public] [function] @bool run(@std::string cmd, @bool stealthMode)
 * @std::string cmd      : [input] from [main] file _start fucntion
 * @bool stealthMode     : [arr] from   [main] file _ start function
 * ABOUT                 : USED ONLY TO RUN COMMANDS STEALTHY (read text below)
 * NOTICE                : Dont use to run commands with input : sudo, php -S e.t.c. -> it will show input
 * HOWTO                 : To use it with input tools, you have to use our inputbypass loggers
*/
bool run(std::string cmd,bool stealthMode = true){
	try {
		std::string resCommand;
		resCommand = cmd + MUTE_OUTPUT;
		if(!stealthMode){
			resCommand = cmd;
		}
		system((resCommand).c_str());
		return true;
	} catch (...){
		return false;
	}
}



