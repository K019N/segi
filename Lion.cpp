#include "Lion.h"
#include <cmath>
#include <iostream>

void Lion::move(int x, int y) {
	if ((abs(this->x - x) <= 1 && abs(this->y - y) <= 1) && (x < 4 && y < 5)) {
		this->x = x;
		this->y = y;
	}
	else{ std::cout << "You cant move like this\n"; }
}