#include "Kilkist_elements.h"
int Kil_elem(Stek obj_top) {
	int kilkist = 0;
	while(obj_top.top != 0){
		kilkist++;
		obj_top.top = obj_top.top->link;
	}
	return kilkist;
}