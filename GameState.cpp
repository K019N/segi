#include "GameState.h"

GameState::GameState(Lion& lion1, Chick& chick1, Lion& lion2, Chick& chick2) {
	figures[0].push_back(lion1);
	figures[0].push_back(chick1);
	figures[1].push_back(chick2);
	figures[1].push_back(lion2);
}

std::vector<std::vector<IFigure>>& GameState::getAll(){
	return figures;
}

void GameState::addFigure(int player, IFigure &figure) {
	
}

void GameState::deleteFigure(int player, int x, int y) {

}