// We just want a stack of integers
typedef int Item ;
 
 
struct STACK{
	int head;
	Item *elements;
};

STACK  createSTACK ();

void  makenull(STACK &s);

bool empty(STACK s);

bool full (STACK s);

Item top (STACK s);
 
void push(STACK &s, Item elem);

void pop(STACK &s);