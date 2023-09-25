// C standard library
#include <stdio.h>
#include <stdbool.h>
// Local headers
#include <input.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define PROMPT_STR	 "VFSys> "
#define INPUT_BUFF	 256

int main(int argc, char **argv) {
	char buff[INPUT_BUFF];
	while(true) {
		input_prompt(PROMPT_STR);
		input_get(buff, INPUT_BUFF, stdin); 
	}
	return EXIT_SUCCESS;
}
