#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int helloFunction (char *name[40])
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
	
	printf ("%25cEnter your surname and name: ", el[4]);
	gets(name);
	return name;
}
