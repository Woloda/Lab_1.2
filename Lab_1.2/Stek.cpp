#include <iostream>
#include "Stek.h"  

void Stek::Read() {
	Elem* value;
	do {
		std::cout << "\nVvedit znachenua vkazivnuka top";
		value = NULL;    //умовно взяте значення вказівника(оскільки "top" --- це вказівник і він зберігає значення адрес)
	} while (!Init(value));
}

void Stek::Display() { std::cout << "znachenua vkazivnuka top: " << top; }

bool Stek::Init(Elem* value) {
	if (value == 0) {
		top = value;
		return true;
	}
	else {
		std::cout << "\nNepravulno vvedeni znachenua!!!";
		return false;
	}
}

void Stek::Set_element(Info value) {
	Elem* tmp = new Elem;
	tmp->inf = value;
	tmp->link = top;
	top = tmp;
}

Info Stek::Del_element() {
	Elem* tmp = top->link;
	Info value = top->inf;
	delete top;
	top = tmp;
	return value;
}