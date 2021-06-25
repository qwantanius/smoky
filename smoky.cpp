#include <iostream>
#include <string>
#include "smoky.h"

using namespace std;

const std::string MUTE_OUTPUT = "> /dev/null 2>&1";

bool run(std::string cmd,bool stealthMode = true){
	try {
		string resCommand;
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

