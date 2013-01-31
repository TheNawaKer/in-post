Programme : stack.o calcul.o conv.o
	g++ stack.o calcul.o conv.o main.cpp -o stack
stack.o :
	g++ -c stack.cpp
calcul.o : 
	g++ -c calcul.cpp
conv.o : 
	g++ -c conv.cpp

