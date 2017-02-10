#include "selfprot.h"
#include <string.h>
#include <stdio.h>

/*
 * Function: MorseToBinary
 * --------------------------------------------
 * converts morse string input bits
 *
 * input: the convertable morse string
 * output: morse in bits
 *
 * returns: the number of used bits for morse
 */
int MorseToBinary(char input[], char output[]) {

	char a[250] = {""};

	for(int i = 0; i < strlen(input) ; i++){

		if(input[i] == '-'){		//long
			strcat(a,"111");
		}

		else if(input[i] == '.'){ 	//short .
			strcat(a, "1");
		}

		else if(input[i] == ' '){ 	//space
			strcat(a, "0");
		}

		else if(input[i] == '\t'){ 	//tab
			strcat(a, "0000000");
		}

		else if(input[i] == '/'){ 	//slash
			strcat(a, "000");
		}
	}

	int for_run = (int)(strlen(a)/8.0+0.99);

	for(int i = 0; i < for_run; i++){
		for(int j = 0; j < 8; j++){
			if(a[i*8+j]== '0'){
				output[i] <<= 1;
			}else{
				output[i] <<= 1;
				output[i] += 0x1;
			}
		}
	}




return strlen(a);
}
