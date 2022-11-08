#include <stdio.h>
#include <math.h>
#include <string.h>


int main(int argc, char * argv[]) {
	float a, b, c, discriminant, x1, x2, r, i;

	a = atoi(argv[1]);
	printf("a = %f\n", a);
	b = atoi(argv[2]);
	printf("b = %f\n", b);
	c = atoi(argv[3]);
	printf("c = %f\n", c);

	discriminant = pow(b,2) - 4*a*c;

	if(discriminant > 0) {
		x1 = (-b + sqrt(discriminant))/(2*a);
		x2 = (-b - sqrt(discriminant))/(2*a);

		printf("x1 = %.2f \n", x1);
		printf("x2 = %.2f \n", x2);

	} else if (discriminant == 0) {
		x1 = -b/(2*a);
		x2 = -b/(2*a);

		printf("x1 = %.2f \n", x1);
		printf("x2 = %.2f \n", x2);
	} else {
		r = -b/(2*a);
		i = sqrt(-discriminant)/(2*a);

		printf("x1 = %.2f +i %.2f \n", r, i);
		printf("x2 = %.2f -i %.2f \n", r, i);

	}
	return 0;
}
