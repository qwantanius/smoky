#include <iostream>
#include <string>
#include "inputSudoLogger.h"
#include "externalCode_helpers/getConsoleOutputOfCommand.h"


/* This function starting logger.
 * Returns string - input from user
 */
void startLogger(){                                                                                                     //strace output of sudo command
	std::string res = getConsoleOutputOfThisCommand("grep 'openat(AT_FDCWD\\, \"/etc/passwd\", O_RDONLY|O_CLOEXEC) = 3' time_strace_cache_emulation.txt");
        std::cout << res << std::endl;
}
// HEREHEREHERE
