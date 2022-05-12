#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Write function
int write(){

//Time
	fflush(stdin);
	system("COLOR 09");
	printf("Write Function Is Activated\n\n\n");
	printf("\t\(\\\n");
	printf("\t\\'\\\n");
	printf("\t \\'\\     __________ \n");
	printf("\t / '|   \()_________)\n");
	printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
	printf("\t   \\       \\ ~~~~~~   \\\n");
	printf("\t   ==).      \\__________\\\n");
	printf("\t \(__)       \()__________)\n\n\n");
	time_t rawtime;
	struct tm*timeinfo;
	time(&rawtime);
	timeinfo=localtime (&rawtime);
	printf("\nLocal Date And Time: %s\n",asctime(timeinfo));
	fflush(stdin); //clear the buffered data

//Output
	FILE *output;
	char diary[12]; //diary is diary name
	char *text[500];
	printf("Today\'s Date [dd-mm-yyyy]: ");
	gets(diary);
	output=fopen(diary,"a");
	fflush(stdin);
	printf("\nToday\'s Content : ");
	scanf("%[^\n]",text);
	printf("\nWritten Content : %s\n",text);
	fprintf(output,"%s\nContent : %s\n\n",asctime(timeinfo),text);
	fclose(output);
	system("pause");

//Back to Main Menu
	printf("\nWritting Saved, Returning To The Main Menu\n\n");
	system("pause");
	menu();
	return 0;}
