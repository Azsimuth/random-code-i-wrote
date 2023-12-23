#include <stdio.h>
#include <math.h>

void draw_triangle(int h) {
	int i, s;
	double b;
	i = 0;
	double p;
	s = 1; b = (double) (2 * h - 1);
	p = ceil( b / 2 ) - 1;

	while (i < h) {

	    for (int i = 0; i < p; i++) {
	        printf(" ");
	    }
	    
	    for (int i = 0; i < s; i++) {
	        printf("#");
    }
		i++;
		s+=2;
		p--;
		printf("\n");
	}
}

void printf_padd(int h, const char txt) {
	double b, p, s;
	b = ( 2 * h ) - 1;
	p = ( ceil(b / 2) ) - 1;
	s = 1;

	for (int i = 0; i < p; i++) {
	        printf(" ");
	    }
	    
	for (int i = 0; i < s; i++) {
	    printf("%c",txt);
	}
	printf("\n");
}

int main() {
	printf("\n\n");
	printf_padd(8, *"*");
	draw_triangle(8);
	draw_triangle(8);
	printf_padd(8, *"||");
	printf_padd(8, *"||");
	printf("\n\n");
	printf("Merry Christmas!");
	printf("\n\n");
	getchar();
}