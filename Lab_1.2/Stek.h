#pragma once
typedef int Info; 
class Stek {
	struct Elem;                //прототип(оголошення) структури "Elem"
	friend int Kil_elem(Stek);
	friend Stek MakeStek(Elem* value);
private:
	struct Elem {
		Elem* link;
		Info  inf;
	};
	Elem* top;                   //вкзівник на вершину стеку
public:
	void set_top(Elem* value) { top = value; }
	Elem* get_top() const { return top; }


	void Read();                 //метод введення з клавіатури
	void Display();              //метод виведення на екран
	bool Init(Elem*);            //перевірка на правильність вводу даних і ініціалізація їх

	void Set_element(Info);      //добавлення елемната до стеку 
	Info Del_element();          //вилучення елемента зі стеку
};