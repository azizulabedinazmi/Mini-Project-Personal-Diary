# Mini-Project-Personal-Diary
**About Program**

As eminent by its name that it should be an ordinary personal diary but in reality it is not. This program is very useful for many professional persons for instance.

-   It is quite useful for doctors. Doctors can use it for taking appointments and also they can keep the record of his patients as long as he can.
-   The travelers also use it for their purposes, what is their next plan? Where they have to go further? And also they can save their memories of the journey etc, for instances.

**Features of Program**

Following are the features of the program:

-   The most important feature is that it is the password protected.
-   This program has a capability of storing unlimited (depends on the memory) records.
-   The user can also take a look on his records.

**SYSTEM DESIGN / FLOW CHART :**![](media/c2b244a26b0a28d42826d45b4e3fee76.jpeg)

**PROGRAM OUTPUT / SCREEN SHOT :**

![](media/ded28d75a26b141be0099d61d85782a5.png)

![](media/e892f1674260d5c4c1ad5ff7493ee038.png)

Creating .EXE file :

**gcc exit1.c main.c menu.c password.c read.c write.c -o Diary**

![](media/f754ac42f235df4ab74bafacabd28b35.png)

Program Output :

![](media/8090db466c6a930f14c2ca4f3b217aa5.png)

Login Error :

![](media/0b0de2b81f0e4f15e09f984215935771.png)

Login Success:

![](media/07ec06c0c3955b1b399692aa585ab7c0.png)

Main Menu :

![](media/4900a9c50ead954edad8ca5af63d22eb.png)

Write :

![](media/56503ad86831bad179e9630a9e05641b.png)

Read :

![](media/e0fec94616c9e3ca3240109db5d95456.png)

Exit :

![](media/300a505b3d364add7700a02e9c72332c.png)

**LIMITATIONS OF YOUR PROGRAM :**

In our personal diary, there is a limitation of word in username and text content. We will increase it in the future. We still don't have the option to edit our text. Our next plan is to add this feature in the next update. We'll also add a feature to change the password.

**APPENDIX (SOURCE CODE) :**

Personal Diary Management System

Username : azmi

Password : azmi@\#

1.Menu - menu()

2.Data Input - password(),write(),read()

3.If else - main()

4.Loops - while loop in read()

5.User defined - password(),menu(),write(),read(),exit()

6.Output - write()

7.Save to file - write()

8.Output screen - write(),read()

Useful function

strcmp() fflush(stdin) system("cls")

CODE :

File main.c int main ()

\#include \<stdio.h\>

\#include \<stdlib.h\>

**int** **menu**();

**int** **password**(**char** \*n,**char**\*p);

**char** c = ' ';

**int** i = **0**;

**int** **write**();

**int** **read**();

**int** **exit1**();

**int** **main**() {

system("COLOR 71");

**int** c;// c=condition

**char** n[**20**],p[**20**];// n=name, p=password

printf("**\\t\\t** \#\#\#\#\#\# **\\n**");

printf("**\\t\\t** \# \# \# \# \#\#\#\# \#\#\#\#\#\# \# \# \# \# \# **\\n**");

printf("**\\t\\t** \# \# \# \# \# \# \# \#\# \# \# \# \# **\\n**");

printf("**\\t\\t** \#\#\#\#\#\# \#\#\#\#\#\# \# \# \#\#\#\#\# \# \# \# \# \#\# **\\n**");

printf("**\\t\\t** \# \# \# \# \# \# \# \# \# \# \#\# **\\n**");

printf("**\\t\\t** \# \# \# \# \# \# \# \#\# \# \# \# **\\n**");

printf("**\\t\\t** \# \# \# \#\#\#\# \#\#\#\#\#\# \# \# \# \# \# **\\n**");

printf("**\\n\\n** \*\*\*\*\*\*\*\*\*\* Welcome To The Personal Diary \*\*\*\*\*\*\*\*\*\***\\n\\n**");

printf("**\\t\\t\\t** **\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\"\\n\\n**");

printf(" Lets Verify Your Identity **\\n\\n\\n**");

system("pause");

printf("Username : ");

scanf("%s",n);

printf("Password : ");

**while**(i\<**20**)

{

p[i]=getch();

c=p[i];

**if**(c==**13**) **break**;

**else** printf("\*");

i++;

}

p[i]='\\0';

i=**0**;

c=password(n,p);

**if** (c==**1**){printf("**\\n**\\Verification Successful**\\n**");

system("COLOR 0A");

system("pause");menu();}

**else**

system("COLOR 49");

{printf("**\\n**\\Verification Error, Please Try Again**\\n**");

system("pause");system("cls");main();

}

}

File password.c int password()

\#include \<stdio.h\>

\#include \<stdlib.h\>

\#include \<string.h\>

// Password Function

**int** **password**(**char**\*n1,**char** \*p1){

**int** a1,b1,c1;

a1=strcmp(n1,"azmi");

b1=strcmp(p1,"azmi@\#");

c1=((a1==**0**)&&(b1==**0**));

**return** c1;

}

File menu.c int menu()

\#include \<stdio.h\>

\#include \<stdlib.h\>

// Menu Function

**int** **menu**(){

fflush(stdin);

system("cls");

**int** s; //s=switch

printf("**\\n\\n** \*\*\*\*\*\*\*\*\*\* Welcome To The Main Menu \*\*\*\*\*\*\*\*\*\***\\n\\n**");

printf("1: Write**\\n**2: Read**\\n**3: Exit**\\n\\n**Select An Option : ");

scanf("%d",&s);

**switch**(s){

**case** **1**:{

write();

**break**;

}

**case** **2**:{

read();

**break**;

}

**case** **3**:{

exit1();

**break**;

}

**default** :{

printf("Error Selection, Please Try Again**\\n**");

system("pause");system("cls");

menu();

**break**;

}

}

}

File write.c int write()

\#include \<stdio.h\>

\#include \<stdlib.h\>

\#include \<time.h\>

// Write function

**int** **write**(){

//Time

fflush(stdin);

system("COLOR 09");

printf("Write Function Is Activated**\\n\\n\\n**");

printf("**\\t**\\(**\\\\\\n**");

printf("**\\t\\\\**'**\\\\\\n**");

printf("**\\t** **\\\\**'**\\\\** \_________\_ **\\n**");

printf("**\\t** / '\| \\()_________)**\\n**");

printf("**\\t** **\\\\** '/ **\\\\** \~\~\~\~\~\~\~\~ **\\\\\\n**");

printf("**\\t** **\\\\** **\\\\** \~\~\~\~\~\~ **\\\\\\n**");

printf("**\\t** ==). **\\\\**\_________\_**\\\\\\n**");

printf("**\\t** \\(__) \\()__________)**\\n\\n\\n**");

**time_t** rawtime;

**struct** tm\*timeinfo;

time(&rawtime);

timeinfo=localtime (&rawtime);

printf("**\\n**Local Date And Time: %s**\\n**",asctime(timeinfo));

fflush(stdin); //clear the buffered data

//Output

**FILE** \*output;

**char** diary[**12**]; //diary is diary name

**char** \*text[**500**];

printf("Today**\\'**s Date [dd-mm-yyyy]: ");

gets(diary);

output=fopen(diary,"a");

fflush(stdin);

printf("**\\n**Today**\\'**s Content : ");

scanf("%[\^**\\n**]",text);

printf("**\\n**Written Content : %s**\\n**",text);

fprintf(output,"%s**\\n**Content : %s**\\n\\n**",asctime(timeinfo),text);

fclose(output);

system("pause");

//Back to Main Menu

printf("**\\n**Writting Saved, Returning To The Main Menu**\\n\\n**");

system("pause");

menu();

**return** **0**;}

File read.c int read.c

\#include \<stdio.h\>

\#include \<stdlib.h\>

// Read Function

**int** **read**(){

fflush(stdin);

printf("Read Function Is Activated**\\n\\n\\n**");

printf(" .--. \_**\\n**");

printf(" .---\|__\| .\\(\\(**\\\\**-.**\\n**");

printf(" .--\|===\|--\|/ , **\\\\\\n**");

printf(" \| \|===\| \|**\\\\** y**\\n**");

printf(" \| \| \| \| \`.__,'**\\n**");

printf(" \| \| \| \| / **\\\\\\\\\\\\\\n**");

printf(" \| \| \| \|/\| \| **\\\\**\`----.**\\n**");

printf(" \| \| \| \|\|**\\\\** **\\\\** \|___.'\_**\\n**");

printf(" \_\| \| \|__\|\|,**\\\\** **\\\\**-+-._.' )\_**\\n**");

printf(" / \| \|===\|--\|**\\\\** **\\\\** **\\\\** / **\\\\\\n**");

printf(" / \`--\^---'--' \`--\`-'---\^-' **\\\\\\n**");

printf(" '================================\`**\\n\\n**");

//Input

**FILE** \*input;

**char** diary[**12**]; //diary is diary name

**char** text[**500**];

**char** text2[**500**];

printf("Diary's Date [dd-mm-yyyy]: ");

gets(diary);

input=fopen(diary,"r");

fflush(stdin);

//Loop For Reading different rows

**while**(fgets(text,**500**,input)!=NULL){

sscanf(text,"%[\^**\\n**]",text2);

printf("%s",text);

}

fclose(input);

system("pause");

**int** i;

printf("Continue Reading ?**\\n\\n**1 :Yes**\\n**2: No**\\n**Choice : ");

scanf("%d",&i);

**switch** (i){

**case** **1** :{

read();

**break**;}

**case** **2** :{

printf("Okay, Returning To The Main Menu**\\n**");

system("pause");

menu();

**break**;

}

**default** :{

printf("Error Selection, Lets Go To The Main Menu**\\n**");

system("pause");

menu();

**break**;

}

}

}

File exit1.c int exit1()

\#include \<stdio.h\>

\#include \<stdlib.h\>

// Exit Function

**int** **exit1**(){

fflush(stdin);

printf("Exit Function Is Activated**\\n\\n\\n**");

printf(" \_______\_**\\n**");

printf(" / \_____\_ **\\\\\\n**");

printf(" \|\| \_ \_ \|\|**\\n**");

printf(" \|\|\| \|\| \|\|\|**\\n**");

printf(" \|\|\|_\|\|_\|\|\|**\\n**");

printf(" \|\| \_ \_o\|\|**\\n**");

printf(" \|\|\| \|\| \|\|\|**\\n**");

printf(" \|\|\|_\|\|_\|\|\| \^\~\^ ,**\\n**");

printf(" \|\|______\|\| \\('Y') )**\\n**");

printf(" /_________\_**\\\\** / **\\\\**/**\\n**");

printf(" \________\|__________\|_\_ \\(**\\\\**\|\|\|/) \________\_**\\n**");

printf(" /___________\_**\\\\\\n**");

printf(" \|____________\|**\\n\\n**");

printf("The System Will Be Closing Now**\\n**");

printf("**\\n\\t\\t**THANK YOU FOR USING OUR DIARY ");

system("exit");

exit(**0**);

}
