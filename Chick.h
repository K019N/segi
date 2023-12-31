#pragma once
#include "IFigure.h"

class Chick : public IFigure {
public:
	Chick(int x, int y) : IFigure(x, y) { name = "C"; }
	void move(int x, int y) override;
};
