#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>



int findStudent (char *name, FILE *fp, int id){              //<----------- Function which lets define student
	int temp,ret=0;											 // connected with defineGroup function
	int length;
	char fullName[40];
    while (fgets (fullName,40, fp) != NULL){				//Comparing names, one of the names was typet from keyboard another was pulled from file	
		length = strlen(fullName)-1;    
		if (strncmp (name, fullName,length)==0){			// If names are same program will print "Hallo Student"
		    printf ("Hallo Student\n");
		    temp=2;
            ret= id;										// Program returnes ID of Student to save group of student
		    break;
		}
    }	
        fclose(fp);											// Closing our file 
        return ret;
}

void showSchedule (int idGroup, FILE *Schedule){            //<---------Function which shows schedule of each day
	
	char mark[1]={" "};
	char subject[100];
	int number = 1;	
	printf ("%25cMonday Schedule\n\n", mark[0]);            // printing day of the week 
		while (number <=5){									// condition to print 5 subjects 
		    fgets (subject,100, Schedule);					// reading data from file
		    printf ("%i) %s", number, subject);				// printing data
		    number++;
		}
		    printf ("\n"); 
		    number=1;
		    printf ("%25cTuesday Schedule\n\n", mark[0]);
		    
		while (number <=5){
		    fgets (subject,100, Schedule);
		    printf ("%i) %s", number, subject);
		    number++;
		}
			printf ("\n");	
			number=1;
		    printf ("%25cWednesday Schedule\n\n", mark[0]);
		    
		while (number <=5){
		    fgets (subject,100, Schedule);
		    printf ("%i) %s", number, subject);
		    number++;
		}
			printf ("\n");	
			number=1;
		    printf ("%25cThursday Schedule\n\n", mark[0]);
		    
		while (number <=5){
		    fgets (subject,100, Schedule);
		    printf ("%i) %s", number, subject);
		    number++;
		}
			printf ("\n");
			number=1;
		    printf ("%25cFriday Schedule\n\n", mark[0]);
		    
		while (number <=5){
		    fgets (subject,100, Schedule);
		    printf ("%i) %s", number, subject);
		    number++;
		}
		    fclose (Schedule);		                                                  //<-----End of function
}



 int checkPassword(char name[40], int numerator)									  //<--------- Function which check password 
 {
 	char mark[1]={" "};																// array which will help indent
 	int key=0;
 	char password[]={"Hello Teacher"};												// array with password
 	char checkPassword[strlen(password)];
 		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%25cEnter your password: ", mark[0]);
	 	gets(checkPassword);																// Entering of password from the keyboard 
	 	do{
		 	if (strcmp(password, checkPassword)!=0){										// password correctness comparison
		 		system ("cls");																// cleaning of console
		 		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%25cEnter ypur password: ", mark[0]);
		 		gets(checkPassword);
		 		printf ("%25cYou Entered wrong password 3 times\n%28cProgramm finished it work!\n", mark[0], mark[0]);
		 		numerator++;
		 		if (numerator ==3){															//after third attemp program finish it work
		 			exit(0);
				 }
			}else{
			 	key=1;
			}
		}while(key!=1);                                                               //<----- End of function checking password
 }
 


int defineGroup (int *idGroup, char name[40])                                         // Function which define group in which student is
{															   
    char fullName[40];
    int temp;
	int i=0, count=0, numerator=0; 
	int studentName, teacherName;

	FILE *teacherNames = fopen("teacherNames.txt", "r");  // opening all the files to read
	FILE *A1 = fopen("A1.txt", "r");
    FILE *A2 = fopen("A2.txt", "r");
    FILE *A3 = fopen("A3.txt", "r");
    FILE *A4 = fopen("A4.txt", "r");
    FILE *B1 = fopen("B1.txt", "r");
    FILE *B2 = fopen("B2.txt", "r");
    FILE *B3 = fopen("B3.txt", "r");
    FILE *B4 = fopen("B4.txt", "r");
    FILE *C1 = fopen("C1.txt", "r");
    FILE *C2 = fopen("C2.txt", "r");
    FILE *C3 = fopen("C3.txt", "r");
    FILE *C4 = fopen("C4.txt", "r");
    FILE *D1 = fopen("D1.txt", "r");
    FILE *D2 = fopen("D2.txt", "r");
    FILE *D3 = fopen("D3.txt", "r");
    FILE *D4 = fopen("D4.txt", "r");
    FILE *E1 = fopen("E1.txt", "r");
    FILE *E2 = fopen("E2.txt", "r");
    FILE *E3 = fopen("E3.txt", "r");
    FILE *E4 = fopen("E4.txt", "r");
    
		while (fgets (fullName,40, teacherNames) != NULL){	//<-- Check for teachers 
			int length = strlen(fullName)-1;
			if (strncmp (name, fullName,length)==0){		// comparing names from teachers file
		    	checkPassword(name, numerator);             //<-- INput Password if you are teacher
		    	count=1;									// if count wouldn't be 1 that is mean that user is student
		    	*idGroup=333;								// if programm defined that user is teacher id will be 333
		    }
		}
		fclose(teacherNames);								// closing file 
	
		if (count != 1){                                       //<-- Check of each list and defining of student group
		    if (*idGroup = findStudent (name, A1,1)) return 0;
		    if (*idGroup = findStudent (name, A2,2)) return 0;
		    if (*idGroup = findStudent (name, A3,3)) return 0;
		    if (*idGroup = findStudent (name, A4,4)) return 0;
		    if (*idGroup = findStudent (name, B1,5)) return 0;
		    if (*idGroup = findStudent (name, B2,6)) return 0;
		    if (*idGroup = findStudent (name, B3,7)) return 0;
		    if (*idGroup = findStudent (name, B4,8)) return 0;
		    if (*idGroup = findStudent (name, C1,9)) return 0;
		    if (*idGroup = findStudent (name, C2,10)) return 0;
		    if (*idGroup = findStudent (name, C3,11)) return 0;
		    if (*idGroup = findStudent (name, C4,12)) return 0;
		    if (*idGroup = findStudent (name, D1,13)) return 0;
		    if (*idGroup = findStudent (name, D2,14)) return 0;
		    if (*idGroup = findStudent (name, D3,15)) return 0;
		    if (*idGroup = findStudent (name, D4,16)) return 0;
		    if (*idGroup = findStudent (name, E1,17)) return 0;
		    if (*idGroup = findStudent (name, E2,18)) return 0;
		    if (*idGroup = findStudent (name, E3,19)) return 0;
		    if (*idGroup = findStudent (name, E4,20)) return 0;
		}
}                                                                                             // <------ End of function


int defineStudent(int idGroup, char userName[40]){
	
	int idStudent=1, length;
	char compareName[40];
	
	if (idGroup==1){
		FILE *A1 = fopen ("A1.txt", "r");
		while (fgets(compareName, 40, A1)!=NULL){
			length = strlen(compareName)-1;
			if (strncmp (userName, compareName, length)!=0){
		    	idStudent++;	
		    }else{
		    	break;
			}
		}
	}
}

struct Node {
			    char word[40];
			    int count;
			    struct Node *next, *prev;
			};
			
			typedef struct Node *PNode;
			
			PNode CreateNode(char NewWord[])
			{
				PNode NewNode = (PNode)calloc(1,sizeof(struct Node));
				strcpy(NewNode->word, NewWord);
				NewNode->count = 1;
				NewNode->next = NULL;
				NewNode->prev = NULL;
				return NewNode;
			}
			
			void AddFirst(PNode* Head, PNode* Tail, PNode NewNode)
			{
				NewNode->next = *Head;
				NewNode->prev = NULL;
				if (*Head) (*Head)->prev = NewNode;
				*Head = NewNode;
				if (!(*Tail)) *Tail = *Head;
			}
			
			void AddLast(PNode* Head, PNode* Tail, PNode NewNode)
			{
				NewNode->prev = *Tail;
				NewNode->next = NULL;
				if (*Tail) (*Tail)->next = NewNode;
				*Tail = NewNode;
				if (!(*Head)) *Head = *Tail;
			}
			
			void AddAfter(PNode* Head, PNode* Tail, PNode p, PNode NewNode)
			{
				if (!p->next)
					AddLast(Head, Tail, NewNode);
				else {
			    	NewNode->next = p->next;
			    	NewNode->prev = p;
			    	p->next->prev = NewNode;
			    	p->next = NewNode;
				}
			}
			
			void AddBefore (PNode Head, PNode Tail, PNode p, PNode NewNode)
			{
				if (!p->prev)
				AddFirst(&Head,&Tail,NewNode);
				else {
			    	NewNode->prev = p->prev;
			    	NewNode->next = p;
			    	p->prev->next = NewNode;
			    	p->prev = NewNode;
				}
			}
			
			PNode Find (PNode Tail, char NewWord[])
			{
				PNode q = Tail;
				while (q && strcmp(q->word, NewWord))
				q = q->prev;
			 	return q;
			}
			
			PNode FindPlace (PNode Tail, char NewWord[])
			{
				PNode q = Tail;
				while (q && (strcmp(q->word,NewWord) > 0))
				q = q->prev;
				return q;
			}
			
			void Delete(PNode* Head, PNode* Tail, PNode OldNode)
			{
				if (*Head == OldNode) {
					*Head = OldNode->next;
				if (*Head)
			       (*Head)->prev = NULL;
			    else *Tail = NULL;
				}
				else {
					OldNode->prev->next = OldNode->next;
				if (OldNode->next)
					OldNode->next->prev = OldNode->prev;
				else *Tail = OldNode->prev;
			 }
				free(OldNode);
			}

void actionMenu (int idGroup){                                                // Menue for students which shows subjects and schedule

	int action;
	printf ("Chouse the action: \n1) Show Subjects \n2) Show Schedule \n");
	printf ("\n");
	scanf ("%i", &action);													// user choise of action 
	int numeration =1;
	system("cls");
	
	switch(action){
		case 1:{															// if action = 1
			
		    char subject[100];
		    if (idGroup>0 && idGroup<=4){									// program chech which idGroup student has 1-4
		        FILE *Subject = fopen("firstCourse.txt","r");
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose (Subject);
		    }else if (idGroup>4 && idGroup<=8){								// program chech which idGroup student has 4-8
		        FILE *Subject = fopen("secondCourse.txt","r");
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose(Subject);
		    }else if (idGroup>8 && idGroup<=12){							// program chech which idGroup student has 8-12
		        FILE *Subject = fopen("thirdCourse.txt","r");
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose(Subject);
		    }else if (idGroup>12 && idGroup<=16) {							// program chech which idGroup student has 12-16
		        FILE *Subject = fopen("forthCourse.txt","r");
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose(Subject);
		    }else{
		     	FILE *Subject = fopen("fifthCourse.txt","r");				// if program didn't find any similarities that's mean that idGroup is 17-20
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose(Subject);
			}
			printf ("\n\nTo back to start menue press ENTER");
			getch();
			break;
		}
		case 2: {															// if action = 2
			
			char subject[100];
			
		    if (idGroup==1){												// program check for idGroup to define which file it should open
		    	FILE *Schedule = fopen("scheduleA1.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==2){
		    	FILE *Schedule = fopen("scheduleA2.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==3){
		    	FILE *Schedule = fopen("scheduleA3.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==4) {
		    	FILE *Schedule = fopen("scheduleA4.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==5) {
		    	FILE *Schedule = fopen("scheduleB1.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==6) {
		    	FILE *Schedule = fopen("scheduleB2.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==7) {
		    	FILE *Schedule = fopen("scheduleB3.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==8) {
		    	FILE *Schedule = fopen("scheduleB4.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==9) {
		    	FILE *Schedule = fopen("scheduleC1.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==10) {
		    	FILE *Schedule = fopen("scheduleC2.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==11) {
		    	FILE *Schedule = fopen("scheduleC3.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==12) {
		    	FILE *Schedule = fopen("scheduleC4.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==13) {
		    	FILE *Schedule = fopen("scheduleD1.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==14) {
		    	FILE *Schedule = fopen("scheduleD2.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==15) {
		    	FILE *Schedule = fopen("scheduleD3.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==16) {
		    	FILE *Schedule = fopen("scheduleD4.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==17) {
		    	FILE *Schedule = fopen("scheduleE1.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==18) {
		    	FILE *Schedule = fopen("scheduleE2.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==19) {
		    	FILE *Schedule = fopen("scheduleE3.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }else if (idGroup==20) {
		    	FILE *Schedule = fopen("scheduleE4.txt", "r");
		        showSchedule (idGroup, Schedule);
		        fclose(Schedule);
		    }
		    
		    printf ("\n\nTo back to start menue press ENTER");
			getch();
			break;
		}
	}
}                                                                           // <------- End of function

int findStudentGroup (char *name, FILE *fp, int id){
	int ret=0, length;
	char fullName[40];
    while (fgets (fullName,40, fp) != NULL){	
			length = strlen(fullName)-1;
			if (strncmp (name, fullName,length)==0){
                ret= id;
		    	break;
		    }
        }	
        fclose(fp);
        return ret;
}


void actionTeachersMenu (int idGroup){

	int action;
	printf ("Choose action: \n1) Show All Subjects \n2) Show Schedule \n3) Check student group \n4) Add New or remove Old Student \n5) Add New or remove Old Teacher \n\n");
	printf ("Your choise: ");
	scanf ("%i", &action);
	fflush(stdin);
	int numeration =1;
	system("cls");
	
	
	switch(action){
		case 1:{
			
		    char subject[100];
		    if (idGroup==333){
		        FILE *Subject = fopen("allSubjects.txt","r");
		        while (fgets (subject,100, Subject) != NULL){
		            printf ("%i) %s", numeration, subject);
		            numeration++;
		        }
		        fclose (Subject);
		        printf ("\n\nPress any botton to back to start MENUE: ");
		        getch();
			}
			break;
		}
		case 2: {
			
			int course;
			int choise;
			printf ("What course schedule do you want to watch? \n1) First Course \n2) Second Course \n3) Third Course \n4) Fourth Course \n5) Fifth Course");
			printf ("\n\nYour choise: ");
			scanf("%i", &course);
			system("cls");
			switch(course){
				case 1: {
						printf ("What Group Schedule do you want to watch? \n1) A1 \n2) A2 \n3) A3 \n4) A4");
						printf ("\n\nYour choise: ");
						scanf ("%i", &choise);
						system ("cls");
						switch(choise){
							case 1: {
								FILE *Schedule = fopen("scheduleA1.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
							break;
							}
							case 2: {
								FILE *Schedule = fopen("scheduleA2.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
							case 3: {
								FILE *Schedule = fopen("scheduleA3.txt", "r");
			        			showSchedule (idGroup, Schedule);
			       				fclose(Schedule);
								break;
							}
							case 4: {
								FILE *Schedule = fopen("scheduleA4.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
						}
					printf ("\n\nPress any button to back to start MENUE: ");
					getch();
					break;
				}
				case 2: {
						printf ("What Group Schedule do you want to watch? \n1) B1 \n2) B2 \n3) B3 \n4) B4");
						printf ("\n\nYour choise: ");
						scanf ("%i", &choise);
						system ("cls");
						switch(choise){
							case 1: {
								FILE *Schedule = fopen("scheduleB1.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
							break;
							}
							case 2: {
								FILE *Schedule = fopen("scheduleB2.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
							case 3: {
								FILE *Schedule = fopen("scheduleB3.txt", "r");
			        			showSchedule (idGroup, Schedule);
			       				fclose(Schedule);
								break;
							}
							case 4: {
								FILE *Schedule = fopen("scheduleB4.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
						}
						printf ("\n\nPress any button to back to start MENUE: ");
						getch();
						break;
					}
				case 3: {
						printf ("What Group Schedule do you want to watch? \n1) C1 \n2) C2 \n3) C3 \n4) C4");
						printf ("\n\nYour choise: ");
						scanf ("%i", &choise);
						system ("cls");
						switch(choise){
							case 1: {
								FILE *Schedule = fopen("scheduleC1.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
							break;
							}
							case 2: {
								FILE *Schedule = fopen("scheduleC2.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
							case 3: {
								FILE *Schedule = fopen("scheduleC3.txt", "r");
			        			showSchedule (idGroup, Schedule);
			       				fclose(Schedule);
								break;
							}
							case 4: {
								FILE *Schedule = fopen("scheduleC4.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
						}
						printf ("\n\nPress any button to back to start MENUE: ");
						getch();
						break;
					}
				case 4: {
						printf ("What Group Schedule do you want to watch? \n1) D1 \n2) D2 \n3) D3 \n4) D4");
						printf ("\n\nYour choise: ");
						scanf ("%i", &choise);
						system ("cls");
						switch(choise){
							case 1: {
								FILE *Schedule = fopen("scheduleD1.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
							break;
							}
							case 2: {
								FILE *Schedule = fopen("scheduleD2.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
							case 3: {
								FILE *Schedule = fopen("scheduleD3.txt", "r");
			        			showSchedule (idGroup, Schedule);
			       				fclose(Schedule);
								break;
							}
							case 4: {
								FILE *Schedule = fopen("scheduleD4.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
						}
						printf ("\n\nPress any button to back to start MENUE: ");
						getch();
						break;
					}
				case 5: {
						printf ("What Group Schedule do you want to watch? \n1) E1 \n2) E2 \n3) E3 \n4) E4");
						printf ("\n\nYour choise: ");
						scanf ("%i", &choise);
						system ("cls");
						switch(choise){
							case 1: {
								FILE *Schedule = fopen("scheduleE1.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
							break;
							}
							case 2: {
								FILE *Schedule = fopen("scheduleE2.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
							case 3: {
								FILE *Schedule = fopen("scheduleE3.txt", "r");
			        			showSchedule (idGroup, Schedule);
			       				fclose(Schedule);
								break;
							}
							case 4: {
								FILE *Schedule = fopen("scheduleE4.txt", "r");
			        			showSchedule (idGroup, Schedule);
			        			fclose(Schedule);
								break;
							}
						}
						printf ("\n\nPress any button to back to start MENUE: ");
						getch();
						break;
				}
			}
			break;
		}
		case 3: {
				char name[40];
			    int temp;
				int i=0, count=0, numerator=0, idGroup;
				
				printf ("Enter Name of student to check: ");
				gets(name);
			
				FILE *A1 = fopen("A1.txt", "r");
			    FILE *A2 = fopen("A2.txt", "r");
			    FILE *A3 = fopen("A3.txt", "r");
			    FILE *A4 = fopen("A4.txt", "r");
			    FILE *B1 = fopen("B1.txt", "r");
			    FILE *B2 = fopen("B2.txt", "r");
			    FILE *B3 = fopen("B3.txt", "r");
			    FILE *B4 = fopen("B4.txt", "r");
			    FILE *C1 = fopen("C1.txt", "r");
			    FILE *C2 = fopen("C2.txt", "r");
			    FILE *C3 = fopen("C3.txt", "r");
			    FILE *C4 = fopen("C4.txt", "r");
			    FILE *D1 = fopen("D1.txt", "r");
			    FILE *D2 = fopen("D2.txt", "r");
			    FILE *D3 = fopen("D3.txt", "r");
			    FILE *D4 = fopen("D4.txt", "r");
			    FILE *E1 = fopen("E1.txt", "r");
			    FILE *E2 = fopen("E2.txt", "r");
			    FILE *E3 = fopen("E3.txt", "r");
			    FILE *E4 = fopen("E4.txt", "r");
			    system ("cls");
			              
				if (idGroup = findStudentGroup (name, A1,1)) printf("Student of group A1");
			    if (idGroup = findStudentGroup (name, A2,2)) printf ("Student of group A2");
			    if (idGroup = findStudentGroup (name, A3,3)) printf ("Student of group A3");
			    if (idGroup = findStudentGroup (name, A4,4)) printf ("Student of group A4");
			    if (idGroup = findStudentGroup (name, B1,5)) printf ("Student of group B1");
			    if (idGroup = findStudentGroup (name, B2,6)) printf ("Student of group B2");
			    if (idGroup = findStudentGroup (name, B3,7)) printf ("Student of group B3");
			    if (idGroup = findStudentGroup (name, B4,8)) printf ("Student of group B4");
			    if (idGroup = findStudentGroup (name, C1,9)) printf ("Student of group C1");
			    if (idGroup = findStudentGroup (name, C2,10)) printf ("Student of group C2");
			    if (idGroup = findStudentGroup (name, C3,11)) printf ("Student of group C3");
			    if (idGroup = findStudentGroup (name, C4,12)) printf ("Student of group C4");
			    if (idGroup = findStudentGroup (name, D1,13)) printf ("Student of group D1");
			    if (idGroup = findStudentGroup (name, D2,14)) printf ("Student of group D2");
			    if (idGroup = findStudentGroup (name, D3,15)) printf ("Student of group D3");
			    if (idGroup = findStudentGroup (name, D4,16)) printf ("Student of group D4");
			    if (idGroup = findStudentGroup (name, E1,17)) printf ("Student of group E1");
			    if (idGroup = findStudentGroup (name, E2,18)) printf ("Student of group E2");
			    if (idGroup = findStudentGroup (name, E3,19)) printf ("Student of group E3");
			    if (idGroup = findStudentGroup (name, E4,20)) printf ("Student of group E4");

			    printf ("\n\nTo finish press ENTER");
				getch();
			break;
			
		}
		case 4: {
			
				int addStudent=0;
				PNode p, where;
			   	PNode Head = NULL, Tail = NULL;
			   	FILE *in, *out;
			   	char word[40], *n;
			   	int chosenGroup;
			   	
				printf ("press 1 to Create new Student\n\npress 2 to Delete Student\n\nYour choise: ");
				scanf("%i", &addStudent);
				
				if (addStudent == 1){
					
			   		printf ("Chouse group to add student: ");
			   		printf ("\nFirst Course: \n1) A1.\n2) A2.\n3) A3.\n4) A4.");
			   		printf ("\nSecond Course: \n5) B1.\n6) B2.\n7) B3.\n8) B4.");
			   		printf ("\nThird Course: \n9) C1.\n10) C2.\n11) C3.\n12) C4.");
			   		printf ("\nForth Course: \n13) D1.\n14) D2.\n15) D3.\n16) D4.");
			   		printf ("\nFifth Course: \n17) E1.\n18) E2.\n19) E3.\n20) E4.");
			   		printf ("\n\nYour choise: ");
			   		scanf ("%i", &chosenGroup);
				}else{
					printf ("Chouse group to Delete student: ");
			   		printf ("\nFirst Course: \n1) A1.\n2) A2.\n3) A3.\n4) A4.");
			   		printf ("\nSecond Course: \n5) B1.\n6) B2.\n7) B3.\n8) B4.");
			   		printf ("\nThird Course: \n9) C1.\n10) C2.\n11) C3.\n12) C4.");
			   		printf ("\nForth Course: \n13) D1.\n14) D2.\n15) D3.\n16) D4.");
			   		printf ("\nFifth Course: \n17) E1.\n18) E2.\n19) E3.\n20) E4.");
			   		printf ("\n\nYour choise: ");
			   		scanf ("%i", &chosenGroup);
				}
				
				if (chosenGroup == 1) in = fopen("A1.txt","r");
			    if (chosenGroup == 2) in = fopen("A2.txt","r");
			    if (chosenGroup == 3) in = fopen("A3.txt","r");
			    if (chosenGroup == 4) in = fopen("A4.txt","r");
			    if (chosenGroup == 5) in = fopen("B1.txt","r");
			    if (chosenGroup == 6) in = fopen("B2.txt","r");
			    if (chosenGroup == 7) in = fopen("B3.txt","r");
			    if (chosenGroup == 8) in = fopen("B4.txt","r");
			    if (chosenGroup == 9) in = fopen("C1.txt","r");
			    if (chosenGroup == 10) in = fopen("C2.txt","r");
			    if (chosenGroup == 11) in = fopen("C3.txt","r");
			    if (chosenGroup == 12) in = fopen("C4.txt","r");
			    if (chosenGroup == 13) in = fopen("D1.txt","r");
			    if (chosenGroup == 14) in = fopen("D2.txt","r");
			    if (chosenGroup == 15) in = fopen("D3.txt","r");
			    if (chosenGroup == 16) in = fopen("D4.txt","r");
			    if (chosenGroup == 17) in = fopen("E1.txt","r");
			    if (chosenGroup == 18) in = fopen("E2.txt","r");
			    if (chosenGroup == 19) in = fopen("E3.txt","r");
			    if (chosenGroup == 20) in = fopen("E4.txt","r");
			   	
			//   	if (in!=NULL) printf("File open successfull! Press ENTER\n");
			   		getchar();
			   
			   	while(1){
					n = fgets(word,40,in); 
					if (n==NULL) break;
						p = Find(Tail,word);
			   		if (p)
				   		p->count ++;
				    else {
					    p = CreateNode(word);
					    where = FindPlace(Tail,word);
					    if (!where) AddFirst(&Head,&Tail,p);
				        else AddAfter(&Head,&Tail,where,p);
				    }
			   }
			   
			   if (addStudent==1){
					fclose(in);
					printf ("Enter the student's name: ");               //<--- Input new student 
					gets (word);
					word[strlen(word)+1]=0;
					word[strlen(word)]=10;
					puts(word);
				 
					p = CreateNode(word);
					where = FindPlace(Tail,word);
					if (!where) AddFirst(&Head,&Tail,p);
				    else AddAfter(&Head,&Tail,where,p);
				   
					printf("Press ENTER to save new student\n");
					getchar();
				
					if (chosenGroup == 1) out = fopen("A1.txt","w");
				    if (chosenGroup == 2) out = fopen("A2.txt","w");
				    if (chosenGroup == 3) out = fopen("A3.txt","w");
				    if (chosenGroup == 4) out = fopen("A4.txt","w");
				    if (chosenGroup == 5) out = fopen("B1.txt","w");
				    if (chosenGroup == 6) out = fopen("B2.txt","w");
				    if (chosenGroup == 7) out = fopen("B3.txt","w");
				    if (chosenGroup == 8) out = fopen("B4.txt","w");
				    if (chosenGroup == 9) out = fopen("C1.txt","w");
				    if (chosenGroup == 10) out = fopen("C2.txt","w");
				    if (chosenGroup == 11) out = fopen("C3.txt","w");
				    if (chosenGroup == 12) out = fopen("C4.txt","w");
				    if (chosenGroup == 13) out = fopen("D1.txt","w");
				    if (chosenGroup == 14) out = fopen("D2.txt","w");
				    if (chosenGroup == 15) out = fopen("D3.txt","w");
				    if (chosenGroup == 16) out = fopen("D4.txt","w");
				    if (chosenGroup == 17) out = fopen("E1.txt","w");
				    if (chosenGroup == 18) out = fopen("E2.txt","w");
				    if (chosenGroup == 19) out = fopen("E3.txt","w");
				    if (chosenGroup == 20) out = fopen("E4.txt","w");

					p = Tail;
					while (p) {
						fprintf(out, "%s", p->word);
						p = p->prev;
					}
					fclose(out);
				}else{
					printf ("Enter Name of student to delete: ");         //<--- Delete Student
					gets (word);
					word[strlen(word)+1]=0;
					word[strlen(word)]=10;
					p = Find(Tail,word);
					if (p) Delete(&Head, &Tail, p);
						if (chosenGroup == 1) out = fopen("A1.txt","w");
						if (chosenGroup == 2) out = fopen("A2.txt","w");
						if (chosenGroup == 3) out = fopen("A3.txt","w");
						if (chosenGroup == 4) out = fopen("A4.txt","w");
						if (chosenGroup == 5) out = fopen("B1.txt","w");
						if (chosenGroup == 6) out = fopen("B2.txt","w");
						if (chosenGroup == 7) out = fopen("B3.txt","w");
						if (chosenGroup == 8) out = fopen("B4.txt","w");
						if (chosenGroup == 9) out = fopen("C1.txt","w");
						if (chosenGroup == 10) out = fopen("C2.txt","w");
						if (chosenGroup == 11) out = fopen("C3.txt","w");
						if (chosenGroup == 12) out = fopen("C4.txt","w");
						if (chosenGroup == 13) out = fopen("D1.txt","w");
						if (chosenGroup == 14) out = fopen("D2.txt","w");
						if (chosenGroup == 15) out = fopen("D3.txt","w");
						if (chosenGroup == 16) out = fopen("D4.txt","w");
						if (chosenGroup == 17) out = fopen("E1.txt","w");
						if (chosenGroup == 18) out = fopen("E2.txt","w");
						if (chosenGroup == 19) out = fopen("E3.txt","w");
						if (chosenGroup == 20) out = fopen("E4.txt","w");
						p = Tail;
						while (p) {
							fprintf(out, "%s", p->word);
							p = p->prev;
				  		}
				fclose(out);
				}
			
			getch();
			break;
		}
		case 5: {
			int addTeacher=0;
				PNode p, where;
			   	PNode Head = NULL, Tail = NULL;
			   	FILE *in, *out;
			   	char word[40], *n;
			   	
				printf ("press 1 to Create new Teacher\n\npress 2 to Delete Teacher\n\nYour choise: ");
				scanf("%i", &addTeacher);
				
				
				in = fopen("teacherNames.txt","r");
			//   	if (in!=NULL) printf("File open successfull! Press ENTER\n");
			   		getchar();
			   
			   	while(1){
					n = fgets(word,40,in); 
					if (n==NULL) break;
						p = Find(Tail,word);
			   		if (p)
				   		p->count ++;
				    else {
					    p = CreateNode(word);
					    where = FindPlace(Tail,word);
					    if (!where) AddFirst(&Head,&Tail,p);
				        else AddAfter(&Head,&Tail,where,p);
				    }
			   }
			   
			   if (addTeacher==1){
					fclose(in);
					printf ("Enter the teacher's name: ");               //<--- Input new student 
					gets (word);
					word[strlen(word)+1]=0;
					word[strlen(word)]=10;
					puts(word);
				 
					p = CreateNode(word);
					where = FindPlace(Tail,word);
					if (!where) AddFirst(&Head,&Tail,p);
				    else AddAfter(&Head,&Tail,where,p);
				   
					printf("Press ENTER to save new teacher\n");
					getchar();
				
					out = fopen("teacherNames.txt","w");

					p = Tail;
					while (p) {
						fprintf(out, "%s", p->word);
						p = p->prev;
					}
					fclose(out);
				}else{
					printf ("Enter Name of teacher to delete: ");         //<--- Delete Student
					gets (word);
					word[strlen(word)+1]=0;
					word[strlen(word)]=10;
					p = Find(Tail,word);
					if (p) Delete(&Head, &Tail, p);
						out = fopen("teacherNames.txt","w");
						p = Tail;
						while (p) {
							fprintf(out, "%s", p->word);
							p = p->prev;
				  		}
				fclose(out);
				}
			
			getch();
			break;
		}
		default : printf ("You entered wrong number\nTo try again press any button: ");
		getch();
	}
} 



