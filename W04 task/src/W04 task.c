/*
 ============================================================================
 Name        : W04.c
 Author      : Benson Montano
 Version     : 1.0
 Copyright   : None
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
	struct Account *next;
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

//displays all accounts info through linked list
void displayAllAcounts(struct Account *account)
{
	// makes new account struct *a
	struct Account *a = account;
	while (a != NULL)
	{
		displayAccount(a);
		a = a->next;

	}
}


//main function
int main(void) {
	//init struct
	struct Account *account1 = malloc(sizeof(struct Account));
	/* set structs pointer next to null because for all we know
	this is the last item in the linked list */
	account1->next = NULL;
	//call function to set values
	setAccount(account1);


	//init struct
	struct Account *account2 = malloc(sizeof(struct Account));
	/* set structs pointer next to null because for all we know
	this is the last item in the linked list */
	account2->next = NULL;
	//call function to set values
	setAccount(account2);
	//set previour structs pointer next to current structor
	account1->next = account2;


	//init struct
	struct Account *account3 = malloc(sizeof(struct Account));
	/* set structs pointer next to null because for all we know
	this is the last item in the linked list */
	account3->next = NULL;
	//call function to set values
	setAccount(account3);
	//set previour structs pointer next to current structor
	account2->next = account3;



	//call function to show set values
	displayAllAcounts(account1);

	//free up the memory allocated , we dont need it anymore
	free(account1);

	//exit the program
	return EXIT_SUCCESS;
}
