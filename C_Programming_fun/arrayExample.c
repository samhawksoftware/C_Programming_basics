/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 5
int main()
{
    // arrays 
    
    char name[] = "Hawk University ";
    float scores[6]={100.0,95.0,90.5,25.5,90.0,90.0};
    float average = 0.0;
    int counter = 0; 
    int amountOfNumberNeeded[10] = {0};
    //int counter;
    
    for (counter = 0; counter < 3; counter++)
    {
        printf("Enter your Number: \n");
        scanf("%d\n", &amountOfNumberNeeded[counter]);
        
        printf("%d",counter);
    }
        
    
    
    printf("Hello World\n");
    puts(name);
    printf("%s\n" ,name);
    printf("%f", scores[3]);
    
   
    
    
    return 0;
}
