# Mini-Project-Personal-Diary
﻿

**About Program**

As eminent by its name that it should be an ordinary personal diary but in reality it is not. This program is very useful for many professional persons for instance.

-   It is quite useful for doctors. Doctors can use it for taking appointments and also they can keep the record of his patients as long as he can.
-   The travelers also use it for their purposes, what is their next plan? Where they have to go further? And also they can save their memories of the journey etc, for instances.

**Features of Program**

Following are the features of the program:

-   The most important feature is that it is the password protected.
-   This program has a capability of storing unlimited (depends on the memory) records.
-   The user can also take a look on his records.

**SYSTEM DESIGN / FLOW CHART :**
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Personal%20Diary%20(1).jpg" alt="screenshot"/>

**PROGRAM OUTPUT / SCREEN SHOT :**


</br>
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture1.png" alt="screenshot"/>
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture2.png" alt="screenshot"/>
Creating .EXE file :

**gcc exit1.c main.c menu.c password.c read.c write.c -o Diary**
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture3.png" alt="screenshot"/>
Program Output :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture4.png" alt="screenshot"/>
Login Error :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture5.png" alt="screenshot"/>
Login Success:
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture6.png" alt="screenshot"/>
Main Menu :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture7.png" alt="screenshot"/>
Write :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture8.png" alt="screenshot"/>
Read :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture9.png" alt="screenshot"/>
Exit :
<img src="https://github.com/azmi00121/Mini-Project-Personal-Diary/raw/main/Screenshots/Picture10.png" alt="screenshot"/>
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
