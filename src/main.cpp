#include "runCommandsInStealthMode/runCommandsInStealthMode.h"

int main(){
	run("touch hello.this.is.smoky.demo",true);
	run("echo command doesnt works",true);
        run("errors not showable",true);
        run("echo to run command with output - put false as second argument",false);
}
