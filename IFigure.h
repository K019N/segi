#pragma once
#include <string>

class IFigure {
protected:
	int x, y;
	std::string name = "O";

public:
	IFigure(int x, int y);
	~IFigure() {}
	virtual void move(int x, int y) {}
	int getX();
	int getY();
	std::string getName();
};
