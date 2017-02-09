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

	char a[300] = {""};


	for(int i = strlen(input); i >= 0 ; i--){

		if(input[i] == 45){		//long
			strcat(a,"111");
		}

		else if(input[i] == 46){ //short .
			strcat(a, "1");
		}

		else if(input[i] == 32){ //space
			strcat(a, "0");
		}

		else if(input[i] == 9){ //tab
			strcat(a, "0000000");
		}

		else if(input[i] == 47){ //slash
			strcat(a, "000");
		}
	}
	printf("igy nez ki a bitstring: %s\n",a);
	printf("Ez meg a merete: %d\n",modulo);
	printf("ez az output %c\n",output);



return 0;
}
