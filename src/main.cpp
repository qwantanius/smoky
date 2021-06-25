#include "runCommandsInStealthMode/runCommandsFromCLIInStealthMode.h"
#include "runCommandsInStealthMode/runCommandsInStealthMode.h"

int main(int argc, char** argv){
	run("touch hello.this.is.smoky.demo",true);
	run("echo command doesnt works",true);
        run("errors not showable",true);
        run("echo to run command with output - put false as second argument",false);
        if(argc == 2){
		_main(argc,argv);
	}
}
