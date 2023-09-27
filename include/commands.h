#ifndef COMMANDS_H
#define COMMANDS_H

#define NO_ARG "%s"

#define COMMAND_LIST \
    X(DONE, "Exits the program", NO_ARG) \
    X(HELP, "Lists available commands with accompanying descriptions", NO_ARG) \
    X(LS, "Lists contents of specified directory", "%s [DIRECTORY]") \
    X(STAT, "Reads status of specified file", "%s local | remote [FILE]") \
    X(MKDIR, "Creates new directory within virtual or remote file system", "%s local | net | real [NEW_DIRECTORY]") \
    X(CREATE, "Creates new file within virtual or remote file system", "%s local net | real [NEW_FILE]") \
    X(OPEN, "Opens file or link into active memory", "%s [FILE] wake | run ...[PROGRAM]") \
    X(CLOSE, "Closes file making them inactive or removing it from the system", "%s perma | sleep [FILE]") \
	X(CLOSEALL, "Closes all files making them inactive or removing them from the system", "%s perma | sleep") \
	X(SAVE, "Saves current session into memory or into a config file", "%s session [NAME] | config [REAL_LOCATION]") \
	(LOAD, "Loads old session or config into active memory", "%s session | config") \
	X(RM, "Removes original source or real file at target location", "%s [TARGET]") \
	X(PS1, "Loads custom PS1 into prompt bar", "%s [NEW_VAR]")

#endif
