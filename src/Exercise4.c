/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	int k = 0;
	for(int i = 0; i < height - border; i++){
		if(i >= border) k++;
		for(int j = 0; j < 2 * height - 1; j++){
			if((i == 0) && (j == height - 1)) printf("* ");
			if((i == 0) && (j != height - 1)) printf("  ");
			if((i < border) && (i != 0)){
				if((j >= height - (i + 1)) && (j <= height + (i + 1) - 2)) printf("* ");
				else printf("  ");
			}
			if(i >= border){
				if((j >= height + i) || (j < height - i - 1) || ((j >= height - k) && (j <= height + k - 2))) printf("  ");
				else printf("* ");
			}
		}
		printf("\n");
	}
	for(int i = height - border; i < height; i++){
		for(int j = 0; j < 2 * height - 1; j++){
			if((j < height - i - 1) || (j >= height + i)) printf("  ");
			else printf("* ");
		}
		printf("\n");
	}
	return 0;
}