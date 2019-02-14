//Robert Delfin
//CS2650
#include <stdio.h>

int main(int argc, char **argv){

	//The constant rise of ocean level
	double risingTide = 1.5;
	double currentLevel = 0.00;

	printf("The ocean level in 5 years will be %lf millimeters than current level: %lf \n",risingTide*5,currentLevel);
	printf("The ocean level in 7 years will be %lf millimeters than current level: %lf\n",risingTide*7,currentLevel);
	printf("The ocean level in 10 years will be %lf millimeters than current level: %lf\n",risingTide*10,currentLevel);

	return 0;
}
