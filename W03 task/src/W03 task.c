/*
 ============================================================================
 Name        : W03.c
 Author      : Benson Montano
 Version     : 1.0
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//initiate struct for the bank account
struct Account {
	//self explainitory
	int accountNum;
	char name[15];
	float balance;
};

//Set account information
void setAccount(struct Account *account)
{
	//set account number based on input
	printf("What is the account number ");
	scanf("%d", &account->accountNum);

	//set name based on input
	printf("What is the name of the account ");
	scanf("%s", account->name);

	//set balance based on input
	printf("What is the balance in the account ");
	scanf("%f", &account->balance);

}

//display account info
void displayAccount(struct Account *account)
{
	// init new int to be the account number address
	int accountNum = account->accountNum;
	//init new float to be balance
	float balance = account->balance;
	//print values from the account just take the account's pointed name value, its easier
	printf("Account Information: Number: %d  Name: %s  Balance: %f\n", accountNum, account->name, balance);
}


// this function adds three to a copy of the value argument
void intFunction(int num)
{
	//add 3 to the argument
	num += 3;
	//print value that is the local varible inside the function
	printf("The number inside the int function is %d\n", num);

}

// this function adds three to the actual reference value of the argument.
void pointerIntFunction(int* pointnum)
{
	//Add 3 to the value assosiated with location of the argument
	*pointnum += 3;
	//print value that is the local varible inside the function
	printf("The number inside the int* function is %d\n", *pointnum);
}

//main function
int main(void) {
	//init the uservalue
	int uservalue = 0;
	//ask user for a int num
	printf("Enter A Intarger Value: ");
	//capture their input into the uservalue address
	scanf("%d", &uservalue);
	//run function using the users captured input
	intFunction(uservalue);
	/* print the value again to make sure that the function
	 did not actually change the original variable */
	printf("%d\n", uservalue);
	//call the function useing the address of the original variable
	pointerIntFunction(&uservalue);
	/* show that when using the referance we can actually
	the change a variable from the function */
	printf("%d\n", uservalue);

	//init struct
	struct Account acount;
	//call function to set values
	setAccount(&acount);
	//call function to show set values
	displayAccount(&acount);


	//exit the program
	return EXIT_SUCCESS;
}
