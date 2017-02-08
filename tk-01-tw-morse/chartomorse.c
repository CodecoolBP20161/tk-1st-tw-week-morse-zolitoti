#include "selfprot.h"
#include <string.h>

/*
 * Function: CharToMorse
 * --------------------------------------------
 * convert characters/numbers to dots and dashes (morse code).
 * the function use the character-morse and number-morse maps
 * from the common header.
 *
 * input: the convertable string
 * output: converted morse string
 *
 * returns: the index of the last converted character of the input
 */
int CharToMorse(char input[], char *output) {

	int i = 0;

	for(i; i!=strlen(input); i++){
		strcat(output,CHAR_TO_MORSE_ALPHA[(int)input[i]-65]);
		if(input[i] != ' ' && (input[i-1] !=' ' || input[i+1] !=' ')){
			strcat(output, "/");
		}
		if(input[i] == ' '){
			strcat(output, "\t\t");
		}
	}
	output[strlen(output)-1] = '\0';
	return strlen(output)-1;
}
