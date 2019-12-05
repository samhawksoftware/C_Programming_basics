
#include <stdio.h>

int	main(){
	

	FILE *pointFile;
	char readTheLine[150];
	pointFile = fopen("Lottery_Powerball_Winning_Numbers.csv", "r");

	while(!feof(pointFile)){
		fgets(readTheLine, 150, pointFile);
		puts(readTheLine);
	}

	fclose(pointFile);

	return 0;

}