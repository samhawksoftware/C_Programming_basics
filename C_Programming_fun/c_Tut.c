#include <stdio.h>

int main()
{
	char a_single_letter = 'B'; // "%c"
	char phrase[] = "a_string"; // "%s"
	int num1, num2; // "%d" remember the & addresser
	int age = 21; // "%d" 
	float decimal_point_num; // floating decimal number 
	double decimal; // "%lf" long floating number




	printf("this is a line of code in c \n");
	
	printf("Please enter a number: \n" );
	scanf("%d",&num1 );
	printf("\n");

	printf("you entered %d  \n", num1);
	printf("Please enter a second number: \n");
	scanf("%d", &num2);

	decimal_point_num = num1 + num2;

	printf("your num1 plus your num2 is , %0.0f\n",decimal_point_num );

	printf("please enter a phrase : \n");
	scanf("%s", phrase);

	if(num1 == num2){
		printf("your numbers are the same\n" );
	}	

	else if (num1 > num2){
		printf("Your Number 1 is larger than number 2 \n");
	}
	
	/*FILE *fp;

   	fp = fopen("test.txt", "w+"); //also a+ r+ and r and a 
   	fprintf(fp, "This is testing for fprintf...\n");
   	fputs("This is testing for fputs...\n", fp);
   	fclose(fp);*/


	return 0;
}