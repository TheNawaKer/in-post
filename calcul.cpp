#include "stack.h"
#include "calcul.h"
using namespace std;

//hello

void multiplication(STACK &s)
{
	Item a = top(s);
	pop(s);
	Item b = top(s);
	pop(s);
	push(s,a*b);
}

void addition(STACK &s)
{
	Item a = top(s);
	pop(s);
	Item b = top(s);
	pop(s);
	push(s,a+b);
}

void soustraction(STACK &s)
{
	Item a = top(s);
	pop(s);
	Item b = top(s);
	pop(s);
	if(a>b)
	push(s,a-b);
	else
	push(s,b-a);
}

void division(STACK &s)
{
	Item a = top(s);
	pop(s);
	Item b = top(s);
	pop(s);
	if(a>b)
	push(s,a/b);
	else
	push(s,b/a);
}