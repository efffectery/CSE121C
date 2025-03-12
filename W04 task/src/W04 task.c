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

char* foo(void)
{
    printf("wassup\n");
    return "wassup\n";
}



int main(void) {

    foo();
    printf(foo());



	return EXIT_SUCCESS;
}
