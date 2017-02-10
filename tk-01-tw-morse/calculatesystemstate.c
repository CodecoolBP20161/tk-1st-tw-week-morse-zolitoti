#include "selfprot.h"
#include <math.h>
/*
 * Function: CalculateSystemState
 * --------------------------------------------
 * calculate the system state based on environment data and
 * stores the calculated state in the caught data structure
 *
 * env: contains environment data and calculated state will be stored in it
 */
void CalculateSystemState(EnvironmentData *env) {
	int x = abs(env->acc_x);
	int z = abs(env->acc_z);
	int y = abs(env->acc_y);
	int temp = abs(env->temp);

	int magnitude=sqrt(x*x+z*z+y*y);

	if((z>=2 || x>=2 || y >= 2 || magnitude >= 3) && temp >= 34){
		env->state = HIGH_ACCELERATION_AND_TEMP;
	}
	else if(z>=2 || x>=2 || y >= 2 || magnitude >= 3){
			env->state = HIGH_ACCELERATION;
		}
	else if(temp >= 34){
		env->state = HIGH_TEMP;
	}
	else{
		env->state = OK;
	}


}
