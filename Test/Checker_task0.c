#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "TEST un gros string de ouffff!!";

	_printf("Let's print a simple sentence.\n");
	printf("Let's print a simple sentence.\n");
	_printf("%c\n", 'S');
	printf("%c\n", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%s\n", "This sentence is retrieved from va_args!");
	printf("%s\n", "This sentence is retrieved from va_args!");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%c%ccth %s%s a%cg%s: Y%sou %s no%ching Snow.%c", 'W', 'i', "some", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%ccth %s%s a%cg%s: Y%sou %s no%ching Snow.%c", 'W', 'i', "some", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%%");
	printf("%%");
	_printf("Should print a single sign: %%.\n");
	printf("Should print a single sign: %%.\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("%s%c%c%c%s%%%s%c\n", "Loading ", '.', '.', '.', " 99", "Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c\n", "Loading ", '.', '.', '.', " 99", "Please wait", '\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");
	printf("css%ccs%scscscs\n", 'T', "Test");
	_printf(str);
	printf(str);
	_printf("man gcc: \n%s\n", str);
	printf("man gcc: \n%s\n", str);
	_printf("NULL");
	printf("NULL");
	_printf("%c", '\0');
	printf("%c", '\0');
	_printf("%");
	printf("%");
	_printf("%!\n");
	printf("%!\n");
	_printf("%k\n");
	printf("%k\n");

	return (0);
}

