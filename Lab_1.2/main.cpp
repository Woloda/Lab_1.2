#include <iostream>
#include "Kilkist_elements.h"    //кількість елементів класу
#include "Make_Stek_Class.h"     //створення об'єкта і перевірка на коректність введених значенння

int main(void) {
	using std::cout;
	using std::cin;

	Stek obj_top;           //об'єкт який містить вказівник на вершину стеку
	obj_top.set_top(NULL);  //початкова ініціалізація вказівника на вершину

	Info inf = 0;            //інформаційне поле
	int i = 0 , kilkist = 0;
	do {
		cout << "\n[1] --- dobavlenya elementa do steky";
		cout << "\n[2] --- vulychenua elementa zi steky";
		cout << "\n[3] --- kilkist elemntiv steku";
		cout << "\n\n[0] --- zavershennya roboty";

		cout << "\nVyberit variant: ";	cin >> i;
		switch (i) {
		case 1:
			cout << "\nVvedit znachennya informatsiynoho polya --- elementa steku: ";
			cin >> inf;
			obj_top.Set_element(inf);
			break;
		case 2:
			if (obj_top.get_top() != NULL) {
				inf = obj_top.Del_element();
				cout << "\nBulo vydaleno element z informatsiynym polem: " << inf;
			}
			else
				cout << "\nV steku nemaye elementiv!!!";
			break;
		case 3:
			kilkist = Kil_elem(obj_top);
			cout << "\nKilkist elementiv steku: " << kilkist;
			break;
		default:
			cout << "\nVy vvely nekorektne znachennya:";
		}
	} while (i != 0);
	return 0;
}