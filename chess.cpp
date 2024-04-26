#include "./headers/piece.h"
#include "./headers/pawn.h"
#include "./headers/knight.h"
#include "./headers/bishop.h"
#include "./headers/rook.h"
#include "./headers/queen.h"
#include "./headers/king.h"
#include "./headers/board.h"


int main(){
    // pawn p1(PAWN, {2, 7});

    // cout << "PAWN: " << endl;
    // p1.printa();
    // p1.moveChoice();

    // knight n1(KNIGHT, {1, 1});

    // cout << "KNIGHT: " << endl;
    // n1.printa();
    // n1.moveChoice();

    // bishop b1(BISHOP, {3, 2});

    // cout << "BISHOP: " << endl;
    // b1.printa();
    // b1.moveChoice();

    // rook r1(ROOK, {6, 3});

    // cout << "ROOK" << endl;
    // r1.printa();
    // r1.moveChoice();

    // queen q1(QUEEN, {4, 4});

    // q1.printa();
    // q1.moveChoice();

    // king k1(KING, {1, 4});

    // k1.printa();
    // k1.moveChoice();

    board b;

    b.initBoard();

    b.print();

}

