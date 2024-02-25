#include <stdio.h>

typedef struct {
	char * brand;
	int model;
} vehicle;

struct point {
	int x;
	int y;
};

int main () {
	vehicle myCar;
	myCar.brand = "Peugeot";
        myCar.model = 2001;	
	
	struct point p;
	p.x = 1;
	p.y = 5;

	printf("My car is a %s and it was made in %d. It occupies position P(%d,%d)\n", myCar.brand, myCar.model, p.x, p.y);
}

