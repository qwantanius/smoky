#include <iostream>
#include <string>
#include "run.h"


using namespace std;



int main(){
	run("echo stealth mode on");
	run("echo stealth mode off",false);
}