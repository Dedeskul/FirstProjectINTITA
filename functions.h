#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int helloFunction (char *name);
int findStudent (char *name, FILE *fp, int id);
int defineGroup (int *idGroup, char userName[40]);
int defineStudent(int idGroup, char userName[40]);
void actionMenu (int idGroup);
void actionTeachersMenu (int idGroup);

#endif	
