#include "./headers/piece.h"
#include "./headers/pawn.h"
#include "./headers/knight.h"
#include "./headers/bishop.h"
#include "./headers/rook.h"
#include "./headers/queen.h"
#include "./headers/king.h"
#include "./headers/board.h"
#include <stdlib.h>

int whiteCheck(board& b){
    int kingi, kingj;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(b.getPos(i, j) == 5 && b.getCol(i, j) == 0){
                kingi = i;
                kingj = j;
                break;
            }
        }
    }

    //diagonals
    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj + i) == 0){
            break;
        }
        if(b.getCol(kingi + i, kingj + i) == 1 && (b.getPos(kingi + i, kingj + i) == 2 || b.getPos(kingi + i, kingj + i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj - i) == 0){
            break;
        }
        if(b.getCol(kingi - i, kingj - i) == 1 && (b.getPos(kingi - i, kingj - i) == 2 || b.getPos(kingi - i, kingj - i) == 4)){
            return 1;
        }
    }

    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj - i) == 0){
            break;
        }
        if(b.getCol(kingi + i, kingj - i) == 1 && (b.getPos(kingi + i, kingj - i) == 2 || b.getPos(kingi + i, kingj - i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj + i) == 0){
            break;
        }
        if(b.getCol(kingi - i, kingj + i) == 1 && (b.getPos(kingi - i, kingj + i) == 2 || b.getPos(kingi - i, kingj + i) == 4)){
            return 1;
        }
    }

    //straights
    for(int i=1; i<8; i++){
        if(b.getCol(kingi, kingj + i) == 0){
            break;
        }
        if(b.getCol(kingi, kingj + i) == 1 && (b.getPos(kingi, kingj + i) == 3 || b.getPos(kingi, kingj + i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi, kingj - i) == 0){
            break;
        }
        if(b.getCol(kingi, kingj - i) == 1 && (b.getPos(kingi, kingj - i) == 3 || b.getPos(kingi, kingj - i) == 4)){
            return 1;
        }
    }

    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj) == 0){
            break;
        }
        if(b.getCol(kingi + i, kingj) == 1 && (b.getPos(kingi + i, kingj) == 3 || b.getPos(kingi + i, kingj) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj) == 0){
            break;
        }
        if(b.getCol(kingi - i, kingj) == 1 && (b.getPos(kingi - i, kingj) == 3 || b.getPos(kingi - i, kingj) == 4)){
            return 1;
        }
    }

    //horse
    if(b.getCol(kingi + 1, kingj + 2) == 1 && b.getPos(kingi + 1, kingj + 2) == 1){
        return 1;
    }
    if(b.getCol(kingi + 2, kingj + 1) == 1 && b.getPos(kingi + 2, kingj + 1) == 1){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj + 2) == 1 && b.getPos(kingi - 1, kingj + 2) == 1){
        return 1;
    }
    if(b.getCol(kingi - 2, kingj + 1) == 1 && b.getPos(kingi - 2, kingj + 1) == 1){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj - 2) == 1 && b.getPos(kingi - 1, kingj - 2) == 1){
        return 1;
    }
    if(b.getCol(kingi - 2, kingj - 1) == 1 && b.getPos(kingi - 2, kingj - 1) == 1){
        return 1;
    }

    if(b.getCol(kingi + 1, kingj - 2) == 1 && b.getPos(kingi + 1, kingj - 2) == 1){
        return 1;
    }
    if(b.getCol(kingi + 2, kingj - 1) == 1 && b.getPos(kingi + 2, kingj - 1) == 1){
        return 1;
    }

    //king
    if(b.getCol(kingi + 1, kingj + 1) == 1 && b.getPos(kingi + 1, kingj + 1) == 5){
        return 1;
    }
    if(b.getCol(kingi + 1, kingj + 1) == 1 && b.getPos(kingi + 1, kingj + 1) == 5){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj + 1) == 1 && b.getPos(kingi - 1, kingj + 1) == 5){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj + 1) == 1 && b.getPos(kingi - 1, kingj + 1) == 5){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj - 1) == 1 && b.getPos(kingi - 1, kingj - 1) == 5){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj - 1) == 1 && b.getPos(kingi - 1, kingj - 1) == 5){
        return 1;
    }

    if(b.getCol(kingi + 1, kingj - 1) == 1 && b.getPos(kingi + 1, kingj - 1) == 5){
        return 1;
    }
    if(b.getCol(kingi + 1, kingj - 1) == 1 && b.getPos(kingi + 1, kingj - 1) == 5){
        return 1;
    }

    //pawn
    if(b.getCol(kingi + 1, kingj + 1) == 1 && b.getPos(kingi + 1, kingj + 1) == 0){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj + 1) == 1 && b.getPos(kingi - 1, kingj + 1) == 0){
        return 1;
    }

    return 0;
}

int blackCheck(board& b){
    int kingi, kingj;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(b.getPos(i, j) == 5 && b.getCol(i, j) == 1){
                kingi = i;
                kingj = j;
                break;
            }
        }
    }


    //diagonals
    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj + i) == 1){
            break;
        }
        if(b.getCol(kingi + i, kingj + i) == 0 && (b.getPos(kingi + i, kingj + i) == 2 || b.getPos(kingi + i, kingj + i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj - i) == 1){
            break;
        }
        if(b.getCol(kingi - i, kingj - i) == 0 && (b.getPos(kingi - i, kingj - i) == 2 || b.getPos(kingi - i, kingj - i) == 4)){
            return 1;
        }
    }

    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj - i) == 1){
            break;
        }
        if(b.getCol(kingi + i, kingj - i) == 0 && (b.getPos(kingi + i, kingj - i) == 2 || b.getPos(kingi + i, kingj - i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj + i) == 1){
            break;
        }
        if(b.getCol(kingi - i, kingj + i) == 0 && (b.getPos(kingi - i, kingj + i) == 2 || b.getPos(kingi - i, kingj + i) == 4)){
            return 1;
        }
    }


    //straights
    for(int i=1; i<8; i++){
        if(b.getCol(kingi, kingj + i) == 1){
            break;
        }
        if(b.getCol(kingi, kingj + i) == 0 && (b.getPos(kingi, kingj + i) == 3 || b.getPos(kingi, kingj + i) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi, kingj - i) == 1){
            break;
        }
        if(b.getCol(kingi, kingj - i) == 0 && (b.getPos(kingi, kingj - i) == 3 || b.getPos(kingi, kingj - i) == 4)){
            return 1;
        }
    }

    for(int i=1; i<8; i++){
        if(b.getCol(kingi + i, kingj) == 1){
            break;
        }
        if(b.getCol(kingi + i, kingj) == 0 && (b.getPos(kingi + i, kingj) == 3 || b.getPos(kingi + i, kingj) == 4)){
            return 1;
        }
    }
    for(int i=1; i<8; i++){
        if(b.getCol(kingi - i, kingj) == 1){
            break;
        }
        if(b.getCol(kingi - i, kingj) == 0 && (b.getPos(kingi - i, kingj) == 3 || b.getPos(kingi - i, kingj) == 4)){
            return 1;
        }
    }

    //horse
    if(b.getCol(kingi + 1, kingj + 2) == 0 && b.getPos(kingi + 1, kingj + 2) == 1){
        return 1;
    }
    if(b.getCol(kingi + 2, kingj + 1) == 0 && b.getPos(kingi + 2, kingj + 1) == 1){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj + 2) == 0 && b.getPos(kingi - 1, kingj + 2) == 1){
        return 1;
    }
    if(b.getCol(kingi - 2, kingj + 1) == 0 && b.getPos(kingi - 2, kingj + 1) == 1){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj - 2) == 0 && b.getPos(kingi - 1, kingj - 2) == 1){
        return 1;
    }
    if(b.getCol(kingi - 2, kingj - 1) == 0 && b.getPos(kingi - 2, kingj - 1) == 1){
        return 1;
    }

    if(b.getCol(kingi + 1, kingj - 2) == 0 && b.getPos(kingi + 1, kingj - 2) == 1){
        return 1;
    }
    if(b.getCol(kingi + 2, kingj - 1) == 0 && b.getPos(kingi + 2, kingj - 1) == 1){
        return 1;
    }

    //king
    if(b.getCol(kingi + 1, kingj + 1) == 0 && b.getPos(kingi + 1, kingj + 1) == 5){
        return 1;
    }
    if(b.getCol(kingi + 1, kingj + 1) == 0 && b.getPos(kingi + 1, kingj + 1) == 5){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj + 1) == 0 && b.getPos(kingi - 1, kingj + 1) == 5){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj + 1) == 0 && b.getPos(kingi - 1, kingj + 1) == 5){
        return 1;
    }

    if(b.getCol(kingi - 1, kingj - 1) == 0 && b.getPos(kingi - 1, kingj - 1) == 5){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj - 1) == 0 && b.getPos(kingi - 1, kingj - 1) == 5){
        return 1;
    }

    if(b.getCol(kingi + 1, kingj - 1) == 0 && b.getPos(kingi + 1, kingj - 1) == 5){
        return 1;
    }
    if(b.getCol(kingi + 1, kingj - 1) == 0 && b.getPos(kingi + 1, kingj - 1) == 5){
        return 1;
    }


    //pawn
    if(b.getCol(kingi + 1, kingj - 1) == 0 && b.getPos(kingi + 1, kingj - 1) == 0){
        return 1;
    }
    if(b.getCol(kingi - 1, kingj - 1) == 0 && b.getPos(kingi - 1, kingj - 1) == 0){
        return 1;
    }

    return 0;
}


int move(int start_row, int start_column, int end_row, int end_column, board& b){
    int piece = b.getPos(start_row, start_column);
    int emp = 7;

    if(piece != emp){

        if(piece == 0){
            cout << "Pawn" << endl;
            pawn p1({start_row, start_column});
            vector<pair<int, int>> choices = p1.moveChoice();
            cout << choices.size() << endl;
            for(int i=0; i<choices.size(); i++){
                // cout << choices[i].first << "," << choices[i].second << "::" << end_row << "," << end_column << endl;
                if(choices[i].first == end_row && choices[i].second == end_column){
                    if(start_row == end_row || b.getPos(end_row, end_column) != 7){
                        b.setPos(end_row, end_column, 0);
                        b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                        b.setPos(start_row, start_column, emp);
                        b.setCol(start_row, start_column, emp);
                        cout << "Pawn moved" << endl;
                        return 1;
                    }
                }
            }
            cout << "Invalid Pawn move" << endl;
            return 0;
        }
        else if(piece == 1){
            cout << "Knight" << endl;
            knight n1({start_row, start_column});
            vector<pair<int, int>> choices = n1.moveChoice();
            cout << choices.size() << endl;
            for(int i=0; i<choices.size(); i++){
                // cout << choices[i].first << "," << choices[i].second << "::" << end_row << "," << end_column << endl; 
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 1);
                    b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                    b.setPos(start_row, start_column, emp);
                    b.setCol(start_row, start_column, emp);
                    cout << "Knight moved" << endl;
                    return 1;
                }
            }
            cout << "Invalid Knight move" << endl;
            return 0;
        }

        else if(piece == 2){
            cout << "Bishop" << endl;
            bishop b1({start_row, start_column});
            vector<pair<int, int>> choices = b1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    if(start_row + start_column == end_row + end_column){
                        if(start_row < end_row){
                            for(int i=1; i<end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i<start_row - end_row; i++){
                                if(b.getPos(start_row - i, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }   
                    else{
                        if(start_row < end_row){
                            for(int i=1; i<end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i<start_row - end_row; i++){
                                if(b.getPos(start_row - i, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }

                    b.setPos(end_row, end_column, 2);
                    b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                    b.setPos(start_row, start_column, emp);
                    b.setCol(start_row, start_column, emp);
                    cout << "Bishop moved" << endl;
                    return 1;
                }
            }
            cout << "Invalid Bishop move" << endl;
            return 0;
        }

        else if(piece == 3){
            cout << "Rook" << endl;
            rook r1({start_row, start_column});
            vector<pair<int, int>> choices = r1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    if(start_row == end_row){
                        if(start_column < end_column){
                            for(int i=1; i< end_column - start_column; i++){
                                if(b.getPos(start_row, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i< start_column - end_column; i++){
                                if(b.getPos(start_row, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }
                    else{
                        if(start_row < end_row){
                            for(int i=1; i< end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i< start_row - end_row; i++){
                                if(b.getPos(start_row, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }

                    b.setPos(end_row, end_column, 3);
                    b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                    b.setPos(start_row, start_column, emp);
                    b.setCol(start_row, start_column, emp);
                    cout << "Rook moved" << endl;
                    return 1;
                }
            }
            cout << "Invalid Rook move" << endl;
            return 0;
        }
        else if(piece == 4){
            cout << "Queen" << endl;
            queen q1({start_row, start_column});
            vector<pair<int, int>> choices = q1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    if(start_row + start_column == end_row + end_column){
                        if(start_row < end_row){
                            for(int i=1; i<end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i<start_row - end_row; i++){
                                if(b.getPos(start_row - i, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }   
                    else if(start_row - start_column == end_row - end_column){
                        if(start_row < end_row){
                            for(int i=1; i<end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i<start_row - end_row; i++){
                                if(b.getPos(start_row - i, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }
                    else if(start_row == end_row){
                        if(start_column < end_column){
                            for(int i=1; i< end_column - start_column; i++){
                                if(b.getPos(start_row, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i< start_column - end_column; i++){
                                if(b.getPos(start_row, start_column - i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }
                    else if(start_column == end_column){
                        if(start_row < end_row){
                            for(int i=1; i< end_row - start_row; i++){
                                if(b.getPos(start_row + i, start_column) != emp){
                                    return 0;
                                }
                            }
                        }
                        else{
                            for(int i=1; i< start_row - end_row; i++){
                                if(b.getPos(start_row, start_column + i) != emp){
                                    return 0;
                                }
                            }
                        }
                    }

                    b.setPos(end_row, end_column, 4);
                    b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                    b.setPos(start_row, start_column, emp);
                    b.setCol(start_row, start_column, emp);
                    cout << "Queen moved" << endl;
                    return 1;
                }
            }
            cout << "Invalid Queen move" << endl;
            return 0;
        }
        else if(piece == 5){
            cout << "King" << endl;
            king k1({start_row, start_column});
            vector<pair<int, int>> choices = k1.moveChoice();
            for(int i=0; i<choices.size(); i++){
                if(choices[i].first == end_row && choices[i].second == end_column){
                    b.setPos(end_row, end_column, 5);
                    b.setCol(end_row, end_column, b.getCol(start_row, start_column));
                    b.setPos(start_row, start_column, emp);
                    b.setCol(start_row, start_column, emp);
                    cout << "King moved" << endl;
                    return 1;
                }
            }
            cout << "Invalid King move" << endl;
            return 0;
        }
    }

    return 0;
}

int main(){
    system("CLS");
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
    int turn = 0;

    b.initBoard();
    b.print();

    char sclm, eclm;
    int startr, startc, endr, endc;


    for(int i=0; i<100; i++){
        int vmove = 0;
        system("CLS");
        if(turn == 0){
            cout << "Whites turn" << endl;
            b.printwhite();
            cin >> sclm >> startc >> eclm >> endc;
            startr = sclm - 'A';
            endr = eclm - 'A';
            startc -= 1;
            endc -= 1;
            cout << startr << " " << startc << " || " << endr << " " << endc << endl;
            if(b.getCol(startr, startc) == 0 && b.getCol(endr, endc) != 0){
                if(b.getPos(startr, startc) != 0){
                    vmove = move(startr, startc, endr, endc, b);
                }
                else if(startc < endc){
                    if(startc == 1 && endc == 3 && b.getCol(endr, endc) == 7){
                        vmove = move(startr, startc, endr, endc, b);
                    }
                    else if(startc == endc - 1){
                        if(startr == endr && b.getCol(endr, endc) == 7){
                            vmove = move(startr, startc, endr, endc, b);
                        }
                        else if(startr != endr){
                            vmove = move(startr, startc, endr, endc, b);
                        }
                    }
                }

                if(whiteCheck(b)){
                    move(endr, endc, startr, startc, b);
                    vmove = 0;
                }

                if(vmove){
                    turn = 1;
                }
                cout << "-------------" << endl;
            }
            else{
                cout << "blud thought he could move other persons piece" << endl;
            }
            // b.printwhite();
        }
        else if(turn == 1){
            cout << "Blacks turn" << endl;
            b.printblack();
            cin >> sclm >> startc >> eclm >> endc;
            startr = sclm - 'A';
            endr = eclm - 'A';
            startc -= 1;
            endc -= 1;
            cout << startr << " " << startc << " || " << endr << " " << endc << endl;
            if(b.getCol(startr, startc) == 1 && b.getCol(endr, endc) != 1){
                if(b.getPos(startr, startc) != 0){
                    vmove = move(startr, startc, endr, endc, b);
                }
                else if(startc > endc ){
                    if(startc == 6 && endc == 4 && b.getCol(endr, endc) == 7){
                        vmove = move(startr, startc, endr, endc, b);
                    }
                    else if(startc == endc + 1){
                        if(startr == endr && b.getCol(endr, endc) == 7){
                            vmove = move(startr, startc, endr, endc, b);
                        }
                        else if(startr != endr){
                            vmove = move(startr, startc, endr, endc, b);
                        }
                    }
                }

                if(blackCheck(b)){
                    move(endr, endc, startr, startc, b);
                    vmove = 0;
                }

                if(vmove){
                    turn = 0;
                }
                cout << "-------------" << endl;
            }
            else{
                cout << "blud thought he could move other persons piece" << endl;
            }
            // b.printblack();
        }
    }
}
