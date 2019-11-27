#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main() {
	char userName[40];
	int idGroup, finish;

do{
	system("cls");
	helloFunction (userName);
	system("cls");
	defineGroup (&idGroup, userName);
		if (idGroup !=0){
			if (idGroup==333){
				system("cls");
				actionTeachersMenu (idGroup);
			}else{
				defineStudent(idGroup, userName);
				system("cls");
				actionMenu (idGroup);
			}
		}else{
			printf("Wrong User Name\n");
			printf ("press 2 to Try Again\n");
			printf ("press 1 to Finish\n\nYour choise: ");
			scanf ("%i", &finish);
		}
		fflush(stdin);
	}while(finish!=1);		
		getch();
		return 0;	
}
