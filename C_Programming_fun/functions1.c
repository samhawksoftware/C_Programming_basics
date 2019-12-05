#include <stdio.h>
int firstFunction();
int secondFunction(int start);
int main()
{
	int counter;
	int start =1;

	for(counter =1;counter <=5;counter++)
		{firstFunction(counter);}

	printf("this is demo of a function \n");
	int firstFunction();
	int secondFunction();

	printf("main ends here \n" );
	
	
	/*FILE *fp;

   	fp = fopen("test.txt", "w+"); //also a+ r+ and r and a 
   	fprintf(fp, "This is testing for fprintf...\n");
   	fputs("This is testing for fputs...\n", fp);
   	fclose(fp);*/


	return 0;
}

int firstFunction()
{
	printf("This is the line of code from first function. \n");
	return 0;
}

int secondFunction()
{
	int start;
	printf("do you want to start the game(enter y or n). \n");
	scanf("%d",&start);
	//do ((start!= 1)&&(start!= 2)){printf("game starting");}
	return 0;

}
