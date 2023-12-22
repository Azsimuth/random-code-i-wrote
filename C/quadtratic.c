#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pause() {
	getchar();
}

int get_int(const char *message) { 
    int userInput;
    printf("%s",message);
	scanf("%i", &userInput);
    return userInput;
} 

double quadratic(int *a, int *b, int *c) {
	printf("| a = %i ; b = %i ; c = %i |\n",*a,*b,*c);
	double da = (double) (*a);
	double db = (double) (*b);
	double dc = (double) (*c);

	double disc = (pow(db, 2) - 4 * da * dc);

	/*
	0 ---> 1 solution
	>0 --> 2 solutions
	<0 --> 0 solutions
	*/
	if (disc > 0) {
		printf("2 solutions!\n");
		double rt1, rt2;
		rt1 = ((-db + sqrt(disc)) / (2 * da));
		rt2 = ((-db - sqrt(disc)) / (2 * da));
		printf("X1,2 = %f, %f\n> ", rt1, rt2);
	}
	else if (disc == 0) {
		printf("1 Solution!\n");
		double rt1;
		rt1 = ((-db + disc) / 2 * da );
		printf("X = %f\n> ", rt1);
	}
	else {
		printf("0 Solutions! \n:(\n");
	}

	pause();
	return 0;
}

void quadloader() {
	system("cls");
	int a,b,c;
	a = get_int("a = ");
	b = get_int("b = ");
	c = get_int("c = ");
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	int x = quadratic(pa, pb, pc);
	pause();
}

void mainmenu() {
	system("cls");
	printf("Quadratic Formula Solver!\n");
	printf("azimuth, 2023, december 12.\n\n");
	printf(" [1] - Solve Quadratic Formula\n");
	printf(" [3] - Exit\n\n");

	int choice = get_int("> ");
	switch (choice) {
		case 1:
			quadloader();
		break;
		case 2:
		break;
		case 3:
			exit(69);
		default:
		mainmenu();
	}
	mainmenu();
}

int main() {
	mainmenu();

}
