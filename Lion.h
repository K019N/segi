#pragma once
#include <string>
#include "IFigure.h"

class Lion : public IFigure {
public:
	Lion(int x, int y) : IFigure(x, y) { name = "L"; }
	void move(int x, int y) override;
};
