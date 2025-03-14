/*
 ============================================================================
 Name        : W02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fminimum(int i, int j)
{
	if (i <= j)
	{
		return i;
	}
	else
	{
		return j;
	}
}

int main(void) {

	int done = 1;
	int choice = 0;
	printf("1. Apple\n");
	printf("2. Banana\n");
	printf("3. Watermelon\n");
	printf("4. Kiwi\n");
	printf("5. Orange\n");

	while (done)
	{
		printf("What number will you buy ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Apple is $0.59\n");
			break;
		case 2:
			printf("Banana is $1.00\n");
			break;
		case 3:
			printf("Watermelon is $3.00\n");
			break;
		case 4:
			printf("Kiwi is $0.79\n");
			break;
		case 5:
			printf("Orange is $0.69\n");
			break;
		default:
			printf("Try a different number\n");
		}
		printf("Would you like to choose another item? (1 or 0) ");
		scanf("%d", &done);
	}

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}
	for (int i = 10; i >= 1; i--)
	{
		printf("%d\n", i);
	}

	float input[10];

	for (int i = 0; i <= 9; i++)
	{
		printf("Enter a number:\n ");
		scanf("%f", &input[i]);
	}

	float min = input[0];
	float max = input[0];
	float sum = 0;
	float average = 0;

	for (int i = 0; i < 10; i++)
	{
		if (input[i] > max)
		{
			max = input[i];
		}
		if (input[i] < min)
		{
			min = input[i];
		}
		sum += input[i];
	}
	average  = sum / 10;

	printf("the maximum value is %f\n", max);
	printf("the minimum value is %f\n", min);
	printf("the average is %f\n", average);

	int x;
	int y;
	printf("Enter two intergers\n");
	scanf("%d %d", &x, &y);
	printf("The lower of the two numbers is %d", fminimum(x, y));

	return 0;
}
