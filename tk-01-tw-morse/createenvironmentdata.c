#include <math.h>
#include "selfprot.h"

/*
 * Function: CreateEnvironmentData
 * --------------------------------------------
 * converts input data into structured form
 *
 * acc_x: acceleration in the X direction
 * acc_y: acceleration in the Y direction
 * acc_z: acceleration in the Z direction
 * temp: magnitude of the temperature
 */

int convertFloatToDeci(float x);

EnvironmentData CreateEnvironmentData(float acc_x, float acc_y, float acc_z, signed int temp) {

	EnvironmentData environmentData;

	environmentData.acc_x = roundf(acc_x);
	environmentData.acc_y = roundf(acc_y);
	environmentData.acc_z = roundf(acc_z);
	environmentData.temp = temp;

	return environmentData;
}
