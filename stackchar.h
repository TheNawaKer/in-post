// We just want a stack of integers
typedef char Item2 ;
 
 
struct STACK2{
	int head;
	Item2 *elements;
};

STACK2  createSTACK2 ();

void  makenull2(STACK2 &s);

bool empty2(STACK2 s);

bool full2 (STACK2 s);

Item2 top2 (STACK2 s);
 
void push2(STACK2 &s, Item2 elem);

void pop2(STACK2 &s);