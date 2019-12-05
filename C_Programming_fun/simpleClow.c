#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char **argv) {
	srand(time(0));

    printf("Enter the number of dice: \n");
    int numentered, counter;
    scanf("%d", &numentered);
    printf("\nYou Rolled a ...: ( ");
    for (counter = 0; counter < numentered; counter++)
        printf("%d ", (rand() % 6) + 1);
        printf(")");
        printf("\n\n");

    return 0;
}