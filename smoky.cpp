#include <iostream>
#include <string>

using namespace std;


const string MUTE_OUTPUT = "> /dev/null 2>&1";

bool run(string cmd,bool stealthMode = true){
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


int main(){
	run("sudo apt-get install asdf");
}