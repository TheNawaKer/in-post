//      TAD-ExPoint.cpp
//      
//      Copyright 2010 Mirian Halfeld Ferrari Alves <mirian@mirian-laptop>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.


#include "stack.h"
#include <cstdlib>
#include <ctime> 
#include <iostream>
using namespace std;

# define   maxN 10

STACK  createSTACK (){
	STACK s; 
	s.elements  = new Item[maxN];
	s.head = 0;
	return (s); 
}

void  makenull(STACK &s) { 
	 s.head = 0; 
}

bool empty(STACK s) { 
	return s.head  == 0; 
}

bool full (STACK s) { 
	return s.head  == maxN; 
}

Item top (STACK s) { 
	return s.elements[s.head-1] ; 
}
 
void push(STACK &s, Item elem){ 
	s.elements[s.head] = elem; 
	s.head++;
}

void pop(STACK &s){ 
	s.head--;
}

