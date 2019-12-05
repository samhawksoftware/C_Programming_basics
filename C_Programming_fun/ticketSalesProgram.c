#include<stdio.h>

int main()
{
	float adultTicket[] = {10.5,5,4,10,50,50,50};
	int countr;
	float total;

	for(countr = 0; countr < 7; countr++)
{
	printf("each sale %.2f\n", adultTicket[countr]);
}


	for(countr = 0; countr < 8; countr++)
	{
			total += adultTicket[countr];
			printf("%d. %.2f\n",countr, total );

	}



	printf("\n");
	printf("total tic sales: $%0.2f\n",total);
	printf("\n");
	return 0;
}