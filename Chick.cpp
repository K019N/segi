#include "Chick.h"
#include <iostream>

void Chick::move(int x, int y) {
	if ((x - this->x == 1 && y - this->y == 0) && (x < 4)) {
		this->x = x;
	}
	else { std::cout << "You cant move like this\n"; }
}