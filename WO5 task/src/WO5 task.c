/*
 ============================================================================
 Name        : W05 task.c
 Author      : Benson Montano
 Version     : 1.0
 Copyright   : None
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
	printf("What should this new account number be ");
	scanf("%d", &account->accountNum);

	//set name based on input
	printf("What is the name of the new account ");
	scanf(" %[^\n]", account->name);

	//set balance based on input
	printf("What is the balance in the new account ");
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
	printf("\n");
	while (a != NULL)
	{
		displayAccount(a);
		a = a->next;
	}
}

void AddAccount(struct Account **head)
{
    struct Account *newAccount = malloc(sizeof(struct Account));
    setAccount(newAccount);
    newAccount->next = NULL;
    if (*head == NULL)
    {
        *head = newAccount;
    }
    else
    {
        struct Account *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newAccount;
    }
}

void FindAccount(struct Account **head, int accountNumber)
{
	struct Account *current = *head;
	int i = 0;
	while(current->next != NULL)
	{
		current = current->next;
		i++;
	}

	for(int j=0; (j != i); j++)
	{
		if(current->accountNum != accountNumber)
		{
			current = current->next;
		}
	}
	if(current->accountNum != accountNumber)
	{
		printf("You need to enter a valid Account Number\n");
		return;
	}
	else
	{
		printf("\nAccount Found: Account number: %d  name: %s  balance %lf\n", current->accountNum, current->name, current->balance);
	}
}

void ChangeAccount(struct Account **head, int accountNumber)
{
	struct Account *current = *head;
	int i = 0;
	while(current->next != NULL)
	{
		current = current->next;
		i++;
	}

	for(int j=0; (j != i); j++)
	{
		if(current->accountNum != accountNumber)
		{
			current = current->next;
		}
	}
	if(current->accountNum != accountNumber)
	{
		printf("You need to enter a valid Account Number\n");
	}
	else
	{
		setAccount(current);
	}
}

int CapInput(void)
{
	int findA;
	printf("What is the Account Number?: ");
	scanf("%d", &findA);
	return findA;
}

void Menu(struct Account **head)
{
	while (1)
	{
		int choice = 0;
		printf("\nMain menu:\n");
		printf("\t5. Change Account Info\n");
		printf("\t4. Find Account\n");
		printf("\t3. Add Account\n");
		printf("\t2. Display All Acounts\n");
		printf("\t1. Quit program\n");
		printf("Your Choice: ");
		scanf("%d", &choice);

		if (choice == 1)
		{
			break;
		}
		else if ((choice == 4 || choice == 5 || choice == 2) & (*head == NULL))
		{
			printf("There is nothing to gather the list is empty");
		}
		else if (choice == 2)
		{
			displayAllAcounts(*head);
		}

		else if (choice == 3)
		{
			AddAccount(head);
		}
		else if (choice == 4)
		{
			int input = CapInput();
			FindAccount(head, input);
		}
		else if (choice == 5)
		{
			int input = CapInput();
			ChangeAccount(head, input);
		}
		else
		{
			printf("I did not recognise that number\n");
		}

	}
}

//main function
int main(void)
{
	struct Account *head = NULL;
	Menu(&head);


	printf("You have saftly exited the program!");
	free(head);
	//exit the program
	return EXIT_SUCCESS;
}

