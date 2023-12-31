#include "IFigure.h"

IFigure::IFigure(int x, int y) {
	this->x = x;
	this->y = y;
	
}

int IFigure::getX() {
	return x;
}

int IFigure::getY() {
	return y;
}

std::string IFigure::getName() {
	return name;
}
