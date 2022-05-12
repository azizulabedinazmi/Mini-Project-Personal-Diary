#include <stdio.h>
#include <stdlib.h>

int menu();
int	password(char *n,char*p);
char c = ' ';
int i = 0;
int write();
int read();
int exit1();

int main() {
    system("COLOR 71");
	int c;// c=condition
	char n[20],p[20];// n=name, p=password
    printf("\t\t ######                                       \n");
    printf("\t\t #     # #    #  ####  ###### #    # # #    # \n");
    printf("\t\t #     # #    # #    # #      ##   # #  #  #  \n");
    printf("\t\t ######  ###### #    # #####  # #  # #   ##   \n");
    printf("\t\t #       #    # #    # #      #  # # #   ##   \n");
    printf("\t\t #       #    # #    # #      #   ## #  #  #  \n");
    printf("\t\t #       #    #  ####  ###### #    # # #    # \n");
	printf("\n\n	**********   Welcome To The Personal Diary   **********\n\n");
	printf("\t\t\t  \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\n");
	printf("	              Lets Verify Your Identity		     \n\n\n");
	system("pause");
	printf("Username : ");
	scanf("%s",n);
	printf("Password : ");
	while(i<20)
	{
	    p[i]=getch();
	    c=p[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	p[i]='\0';
	i=0;

	c=password(n,p);
	if (c==1){printf("\n\Verification Successful\n");
	system("COLOR 0A");
	system("pause");menu();}
	else
	system("COLOR 49");
	{printf("\n\Verification Error, Please Try Again\n");
	system("pause");system("cls");main();
	}
}
