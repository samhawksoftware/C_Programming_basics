/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numberEntered;
    int number =0;
    printf("Hello World\n");
    printf("Enter a positive integer: ");
    scanf("%d", &numberEntered);
    
    for(number = numberEntered; number >=0;number--){printf("loop running down %d\n",number);}
    printf("Blast OFF !!! \n");

    return 0;
}
