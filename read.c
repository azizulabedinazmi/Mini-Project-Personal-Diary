#include <stdio.h>
#include <stdlib.h>


// Read Function
int read(){
	fflush(stdin);
	printf("Read Function Is Activated\n\n\n");
	printf("                 .--.   _\n");
	printf("             .---|__| .\(\(\\-.\n");
	printf("          .--|===|--|/    , \\\n");
	printf("          |  |===|  |\\      y\n");
	printf("          |  |   |  | `.__,'\n");
	printf("          |  |   |  | /  \\\\\\\n");
	printf("          |  |   |  |/|  | \\`----.\n");
	printf("          |  |   |  ||\\  \\  |___.'_\n");
	printf("         _|  |   |__||,\\  \\-+-._.' )_\n");
	printf("        / |  |===|--|\\  \\  \\      /  \\\n");
	printf("       /  `--^---'--' `--`-'---^-'    \\\n");
	printf("      '================================`\n\n");


	//Input
	FILE *input;
	char diary[12]; //diary is diary name
	char text[500];
	char text2[500];
	printf("Diary's Date [dd-mm-yyyy]: ");
	gets(diary);
	input=fopen(diary,"r");
	fflush(stdin);

	//Loop For Reading different rows
	while(fgets(text,500,input)!=NULL){
		sscanf(text,"%[^\n]",text2);
		printf("%s",text);
	}
	fclose(input);
	system("pause");
	int i;
	printf("Continue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){

		case 1 :{
		read();
		break;}

		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		menu();
		break;
		}

		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		menu();
		break;
		}
	}

}
