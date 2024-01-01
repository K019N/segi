#include <iostream>
#include <string>
#include "GameState.h"
#include "Lion.h"
#include "Chick.h"

int main()
{
    Chick chick1(2, 2);
    Chick chick2(2, 3);
    Lion lion1(2, 1);
    Lion lion2(2, 4);

    GameState deck(lion1, chick1, lion2, chick2);

    std::string table[4][3]{
        {"O", "O", "O"},
        {"O", "O", "O"},
        {"O", "O", "O"},
        {"O", "O", "O"}
    };

    
    int x, y;
    for (int i = 0; i < deck.getAll()[0].size(); i++){
        x = deck.getAll()[0][i].getX();
        y = deck.getAll()[0][i].getY();
        table[y - 1][x - 1] = deck.getAll()[0][i].getName();
        x = deck.getAll()[1][i].getX();
        y = deck.getAll()[1][i].getY();
        table[y - 1][x - 1] = deck.getAll()[1][i].getName();
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            std::cout << table[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
