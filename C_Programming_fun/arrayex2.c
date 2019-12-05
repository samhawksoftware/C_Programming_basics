
#include <stdio.h>

int main()
{
    
    int arraySize[4];
    int counter;
    
    for (counter;counter < 4;counter++){
        printf("Enter a Number: ");
        scanf("%d", &arraySize[counter]);
    }
    
    printf("Numbers entered were: \n");
    for(counter = 0; counter < 4;counter++){printf("%d",arraySize[counter]);}
    return 0;
}
