#include <iostream>
#include <stdlib.h>
#include "Make_Stek_Class.h"

Stek MakeStek(Stek::Elem* value) {
	Stek obj_new;
	if (obj_new.Init(NULL))
		return obj_new;
	else {
		std::cout << "Pomulkovo vvedeni value!!!\n";
		exit(-1);    //завершення роботи, якщо не коректно введені значення
	}
}