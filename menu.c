#include <stdio.h>
#include <stdlib.h>


// Menu Function
int menu(){

	fflush(stdin);
	system("cls");
	int s; //s=switch
	printf("\n\n	**********   Welcome To The Main Menu   **********\n\n");
	printf("1: Write\n2: Read\n3: Exit\n\nSelect An Option : ");
	scanf("%d",&s);
		switch(s){

		case   1:{
			write();
			break;
		}

		case   2:{
			read();
			break;
		}
		case   3:{
			exit1();
			break;
		}

		default :{
			printf("Error Selection, Please Try Again\n");
			system("pause");system("cls");
			menu();
			break;
		}

		}
	}


