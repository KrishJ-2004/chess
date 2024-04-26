#include "./headers/piece.h"
#include "./headers/pawn.h"
#include "./headers/knight.h"
#include "./headers/bishop.h"
#include "./headers/rook.h"
#include "./headers/queen.h"
#include "./headers/king.h"
#include "./headers/board.h"

void move(int start_row, int start_column, int end_row, int end_column, board& b){
    int piece = b.getPos(start_row, start_column);

    if(piece != 8){
        if(piece == 0){
            pawn p1({start_row, start_column});
            vector<pair<int, int>> choices = p1.moveChoice();
            for(int i=0; i<)
        }
        else if(piece == 1){
            knight n1({start_row, start_column})
        }
        else if(piece == 2){
            bishop b1({start_row, start_column});
        }
        else if(piece == 3){
            rook r1({start_row, start_column});
        }
        else if(piece == 4){
            queen q1({start_row, start_column});
        }
        else if(piece == 5){
            king k1({start_row, start_column});
        }
    }
}

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

