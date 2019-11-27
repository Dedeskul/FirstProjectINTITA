#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main ()
{	

	char el[5] = {'|','_','/','\\',' '};                                                      
	printf ("\n");
	printf ("%11c %11c %7c%c%c%c%c%c%c%c%c%c %7c %10c %12c%c%c%c%c%c%c%c%c%c\n", el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1]);
	printf ("%10c %1c %9c %1c %5c %2c%c%c%c%c%c%c%c%c %5c %1c %8c %1c %10c %2c%c%c%c%c%c %2c", el[0], el[0], el[0], el[0], el[0],el[1],el[1],el[1],el[1],el[1],el[1],el[1],el[1], el[0], el[0], el[0], el[0], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c", el[0], el[0]);
	printf ("%c%c%c%c%c%c%c%c%c%c %1c %5c %1c%c%c%c%c%c %9c %1c %8c %1c %10c %1c %6c %1c", el[1], el[1], el[1],el[1], el[1], el[1],el[1], el[1], el[1], el[0], el[0], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %c%c%c%c%c%c%c%c%c%c%c %1c %5c %2c%c%c%c%c%c %8c %1c %8c %1c %10c %1c %6c %1c",el[0],el[0], el[1], el[1], el[1],el[1], el[1], el[1],el[1], el[1], el[1], el[0], el[0], el[0],el[1],el[1],el[1],el[1],el[1], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %1c %14c %1c %8c %1c %10c %1c %6c %1c", el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0], el[0]);
	printf ("\n%10c %1c %9c %1c %5c %c%1c%c%c%c%c%c%c%c %6c %1c%c%c%c%c %4c %1c%c%c%c%c %6c %1c%c%c%c%c%c%c%c %1c", el[0], el[0], el[0], el[0], el[0],el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[0], el[0]);
	printf ("\n%10c%c%1c %9c%c%1c %5c%c%c%c%c%c%c%c%c%c%c%c %5c%c%c%c%c%c%c%c %3c%c%c%c%c%c%c%c %5c%c%c%c%c%c%c%c%c%c%c%c", el[0], el[1], el[0], el[0], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[0], el[0], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[1], el[0]);       
	printf ("\n");
	printf ("\n");
	printf ("\n");
	
	char fullName[40];
	char name[40];
	char password[14]={"Hello Teacher"};
	char checkPasword[14];
	int i=0, count=0, temp=0;
	FILE *teacherNames = fopen("teacherNames.txt", "r");
	FILE *studentNames = fopen("studentNames.txt", "r");
	
	printf ("%20cEnter your surname and name: ",el[4]);    
	gets(name);
//	system("cls");
	printf ("\n\n\n");
	while (fgets (fullName,40, teacherNames) != NULL){	
		int length = strlen(fullName)-1;
//			printf("%s", fullName);
		if (strncmp (name, fullName,length)==0){
	    	printf ("%28cEnter Your Password: ", el[4]);
	    	count=1;
	    	temp=1;
	    	break;
	    }
	}
	fclose(teacherNames);

	if (count != 1){
		while (fgets (fullName,40, studentNames) != NULL){	
			int length = strlen(studentNames);
//				printf("%s", fullName);
			if (strncmp (name, fullName,length)==0){
		    	printf ("%20cHallo Student\n", el[4]);
		    	temp=2;
		    	break;
		    }	
		}	
	}
	fclose(studentNames);
	
//	system("cls");
	gets(checkPasword);
	if (strcmp(password,checkPasword)==0){
		printf ("%32cYour password is Correct\n%42cWELCOME", el[4],el[4]);
	}
	
	//<-- functionality for students
	int action, subjectNumber=0;
	if ( temp == 2){
		printf ("What do you want to chouse ?\n");
		printf ("1) Subjects\n2) Marks\n3) Schedule\n");
		scanf("%i", &action);
		switch (action){
			case 1:{
				char subjectList[50];
				FILE *subjects = fopen("Subjects.txt", "r");
				
				while (fgets (subjectList,50, subjects) != NULL){
				subjectNumber++;	
				printf ("%i) %s",subjectNumber, subjectList);
				fclose(subjects);
		    	}
				break;
			} 
			case 2: {
				char marksList[4];
				FILE *marks = fopen("Marks.txt", "r");
				
				while (fgets (marksList,4, marks) != NULL){	
				printf ("%s", marksList);
				fclose(marks);
		    	}
				break;
			}
			case 3: {
				char days[10][7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
				break;
			}
		}
	}
	
}
