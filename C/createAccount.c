/* ... Project no.1 ... */

/* ... C langauge ... */

/*
* Author: Helal Majeed
* Linkdin: Helal Majeed
* Github : HelalMajeed
*/


#include <stdio.h> 
/*
* Standard Input Output Library.
* For including 'puts' and 'printf' and 'scanf' etc.
*/

#include <stdbool.h>
/*
* For using 'true' and 'false' instead of '1' and '0'.
* And for using 'bool' instead of '_Bool'. 
*/

#include <string.h>
/*
* For including string functions like 'strstr' and 'strlen' and 'strcpy'.
* I will explain each function when the first time I use it in program.
*/

#define ARRAY_LENGTH 64 
/*
* Any thing sarts with '#' that means Microprocessor will read it. Not the compiler.
* Notice that we don't put 'semicolon' at the end of the Macros.
* When ever Computer sees 'ARRAY _LENGTH' will read it as 64. 
*/

char firstName[ARRAY_LENGTH]; // Array of charecters to store the first name. 

char lastName[ARRAY_LENGTH]; // ... to store the last name.

char userName[(ARRAY_LENGTH)/2]; // Notice that length of an array could be any arithmetic operations.

char userEmail[ARRAY_LENGTH]; // ... store an email enterd by user.

char password[(ARRAY_LENGTH)/2]; // ... store a password

bool logIN = false; // If the user signed up then logIN will = true (look at line no.211).

/*
* All variables above are in the global scope.
* I did that because I need to use them in many functions.
*/

void signUP(void); // A function called in 'main' must be prototyped first.

int main() {

    signUP(); 

    if (logIN) {

        printf("\nWelcome Mr. %s\n", firstName);
        puts("You've Registerd successfully!");

    }

    return 0;
}

bool checkUser(char* test) { // For checking the username

    /*
    * The only way to use 'strlen' is using 'char*'
    * 'strlen' returns 'size_t' and accepts pointer 'char*'
    * 'strlen' format is: { size_t strlen(char* str) }
    * 'strlen returns the number of string charecters. It doesn't coount the NULL charecter.
    * Just don't worry about pointers and memory management.
    * I will explain pointers and manging memory in details in my next project.
    */

	for (int i = 0; i < strlen(test)+1; i++) { // 'strlen(test)+1' Because we want to include the '\0'.
        if (test[i]  >='A' && test[i] <= 'z')
                return true;
    }
    return false;

    /*
    * This is not really efficient way to check username. Its just an introduction project for beginners.
    * We can use built in functions for efficiency. But I need to show you how things actually working.
    */     

}

bool checkPassword(char* test) {

    /*
    * If the password consists of letters then we need to make sure that it contains at least one number.
    * If the password consists of numbers then we need to make sure that it contains at least one letter.
    */

    bool checkNumber = false; // To make sure that it contains at least one number.
    bool checkLetter = false; // To make sure that it conrains at least one letter.

    if (strlen(test)<6) // To make sure it consists of 6 charecters or more.
        return false;

    for (int i = 0; i < strlen(test)+1; i++) {
        if (test[i] >= '0' && test[i] <= '9') {
            checkNumber = true;
            break;
        }
    }

    for (int i = 0; i < strlen(test)+1; i++) {
        if (test[i] >= 'A' && test[i] <= 'z') {
            checkLetter = true;
            break;
        }
    }

    if (checkNumber && checkLetter) 
        return true;

    else 
        return false;

}

bool isValid(char* test) { // To check if Email is not valid.

    if (test[0] < 'A' && test[0] > 'z') // The first chatecter must be an alphabet letter.
        return false;

    int at = -1;
    int dot = -1;

    for (int i = 0; i < strlen(test) + 1; i++) { // Travirsing to all indexes to see the positions.
        if (test[i] == '@')
            at = i;
        else if (test[i] == '.') 
            dot = i;
    }

    if (at == -1 || dot == -1) // If '@' or '.' are not presented then email is not valid.
        return false;

    if (at > dot) // If '.' is presented before '@' then its not valid.
        return false;

    return !(dot >= (strlen(test)) - 1); // To make sure that the '.' is not the last char prsented.

}

void signUP(void) {

    
	printf("Enter Your First Name: "); // Built in function to print on the screen.
	scanf("%32s", firstName); // Built in function to get input from the user.

	printf("Enter Your Last Name: "); 
	scanf("%32s", lastName); // We are accepting 32 chareters. And others will be ignored.

	printf("Set A User Name: ");
	scanf("%16s", userName); 

	if (!checkUser(userName)) {

		do { 
			puts("Sorry! The User Name Shpuld Contains At Least One Letter :) ");
			printf("Set A User Name: ");
			scanf("%16s", userName);

		} while (!checkUser(userName));
	}

	printf("Enter A Valid Email: ");
	scanf("%32s", userEmail);

	if (!isValid(userEmail)) {

		do {

			puts("\nEmail Must Be In This Format --> 'person@example.com'"); 
			puts("Incorrect Email! Try Again.");
			printf("Enter A Valid Email: ");
			scanf("%32s", userEmail);

		} while (!isValid(userEmail));		
	}

    /*
    * As you see I've used 'puts' function few times.
    * It prints texts only with a new line.
    */

    printf("Set A Password: ");
    scanf("%16s", password);

    if (!checkPassword(password)) {

        do {

            puts("Password Must Be 6 Charecters Or More And Compound Of Letters And Numbers.");
            printf("Set A Password: ");
            scanf("%16s", password);
 
        } while (!checkPassword(password));

    }

    logIN = true;

    return;

}


//-----------------------------------------------------------------------------------------
//	                	    (....CRESCENT....)
//-----------------------------------------------------------------------------------------


/*
* About this project:
    * Terminal simple example for beginners.
    * The purpose is to see how we can use what we've learned so far.
    * We've learned how to write a program to add a new account.
* About the next projects:
    * We will learn how to manage memory using 'malloc' and 'free' etc.
    * We will learn how to handling files.
*/
