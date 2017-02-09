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
	char last_converted;

	for(i=0; i!=strlen(input); i++){
		if(input[i]<91 && input[i]>64){
			strcat(output,CHAR_TO_MORSE_ALPHA[(int)input[i]-65]);
			if(input[i+1] != ' '){
				strcat(output, "/");
			}
			last_converted = i;
		}
		else if(input[i] == ' '){
			strcat(output, "\t");
		}
	}
	output[strlen(output)-1] = '\0';
	printf("last converted----------------- is: %d\n", i);
	return i;
}
