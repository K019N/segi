#pragma once
#include "IFigure.h"
#include "Chick.h"
#include "Lion.h"
#include <vector>

class GameState {
private:
	std::vector<std::vector<IFigure>> figures;

public:
	GameState(Lion& lion1, Chick& chick1, Lion& lion2, Chick& chick2);
	void addFigure(int player, IFigure& figure);
	void deleteFigure(int player, int x, int y);
	std::vector<std::vector<IFigure>>& getAll();
};
