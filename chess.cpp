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
    int emp = 7;
    if(piece != 7){
        if(piece == 0){
            pawn p1({start_row, start_column});
            vector<pair<int, int>> choices = p1.moveChoice();
            cout << choices.size() << endl;
            for(int i=0; i<choices.size(); i++){
                cout << choices[i].first << "," << choices[i].second << "::" << end_row << "," << end_column << endl;
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid Pawn move" << endl;
        }
        else if(piece == 1){
            knight n1({start_row, start_column});
            vector<pair<int, int>> choices = n1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid Knight move" << endl;
        }
        else if(piece == 2){
            bishop b1({start_row, start_column});
            vector<pair<int, int>> choices = b1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid Bishop move" << endl;
        }
        else if(piece == 3){
            rook r1({start_row, start_column});
            vector<pair<int, int>> choices = r1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid Rook move" << endl;
        }
        else if(piece == 4){
            queen q1({start_row, start_column});
            vector<pair<int, int>> choices = q1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid Queen move" << endl;
        }
        else if(piece == 5){
            king k1({start_row, start_column});
            vector<pair<int, int>> choices = k1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 0);
                    b.setPos(start_row, start_column, emp);
                    return;
                }
            }
            cout << "Invalid King move" << endl;
        }
    }

    return;
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

    cout << "Moving pawn " << endl;
    move(0,1, 0,2, b);
    cout << "-------------" << endl;
    b.print();

}

