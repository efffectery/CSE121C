
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a interger ");
	scanf("%d", &num);
	printf("You entered %d\n", num);

	double eww_number;
	printf("Enter a floating point number ");
	scanf("%lf", &eww_number);
	printf("There are lots of ways to represent this number %e %f %g\n", eww_number, eww_number, eww_number);

	char name[30];
	printf("Enter your name (without spaces) ");
	scanf(" %s", name);
	printf("Your name is %s\n", name);

	int var1 = 0;
	int var2 = 0;
	printf("Enter two intergers\n");
	scanf("%d %d", &var1, &var2);
	if (var1 < var2)
	{
		printf("%d is smaller than %d\n", var1, var2);
	}
	else
	{
		printf("%d is smaller than %d\n", var2, var1);
	}

	return 0;
}
