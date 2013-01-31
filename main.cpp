#include "conv.h"
#include "stack.h"
#include "calcul.h"
#include <iostream>
using namespace std;

int main()
{
	STACK s = createSTACK();
	makenull(s);
	cout<<"Entrer votre fonction mathématique: ";
	string x;
	cin>>x;
	//postfixconv(x);
	for(int i=0;i<x.length();i++)
	{
		switch(x[i])
		{
			case '*': multiplication(s);
					break;
			case '+': addition(s);
					break;
			case '-': soustraction(s);
					break;
			case '/': division(s);
					break;
			default: 
					if(!full(s))
					push(s,(Item)(x[i]-'0'));
					break;
		}
	}
	cout<<"resultat: "<<top(s)<<endl;
	return 0;
}