#include "selfprot.h"
#include <string.h>
#include <stdio.h>

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

	int i;

	for(i=0; i!=strlen(input); i++){
		if(input[i]<='Z' && input[i]>='A'){
			strcat(output,CHAR_TO_MORSE_ALPHA[(int)input[i]-'A']);
			if(input[i+1] != ' '){
				strcat(output, "/");
			}

		}
		else if(input[i] == ' '){
			strcat(output, "\t");
		}

		else if(input[i]<='9' && input[i]>='0'){
			strcat(output,CHAR_TO_MORSE_NUMBER[(int)input[i]-'0']);
			if(input[i+1] != ' '){
				strcat(output, "/");
			}
		}


	}
	output[strlen(output)-1] = '\0';
	return i;
}
