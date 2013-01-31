#include "stackchar.h"
#include "conv.h"

using namespace std;

# define   maxN 10

STACK2  createSTACK (){
	STACK2 s; 
	s.elements  = new Item[maxN];
	s.head = 0;
	return (s); 
}

void  makenull2(STACK &s) { 
	 s.head = 0; 
}

bool empty2(STACK s) { 
	return s.head  == 0; 
}

bool full2 (STACK s) { 
	return s.head  == maxN; 
}

Item top2 (STACK s) { 
	return s.elements[s.head-1] ; 
}
 
void push2(STACK &s, Item elem){ 
	s.elements[s.head] = elem; 
	s.head++;
}

void pop2(STACK &s){ 
	s.head--;
}

string postfixconv(string in)
{
	STACK2 s;
	for(int i=0;i<in.lenght();i++)
	{
		switch(in[i])
		{
			case '+':
			case '-':   
			case '/': 
			case '*': 

		}
	}
}



