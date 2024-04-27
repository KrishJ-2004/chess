#include "../headers/board.h"

board::board(){

    for(int i=0; i<8; i++){
        vector<int> *t1 = new vector<int>(8,7);
        blackboard.push_back(*t1);
    }

    for(int i=0; i<8; i++){
        vector<int> *t1 = new vector<int>(8,7);
        whiteboard.push_back(*t1);
    }

    for(int i=0; i<8; i++){
        vector<int> *t1 = new vector<int>(8,7);
        color.push_back(*t1);
    }

}

int board::getPos(int a, int b){
    return whiteboard[a][b];
}

void board::setPos(int a, int b, int piece){
    whiteboard[a][b] = piece;
    blackboard[7-a][7-b] = piece;
}

int board::getCol(int a, int b){
    return color[a][b];
}

void board::setCol(int a, int b, int Col){
    color[a][b] = Col;
}


void board::initBoard(){
    setPos(0, 0, 3);
    setPos(7, 0, 3);

    setPos(1, 0, 1);
    setPos(6, 0, 1);

    setPos(2, 0, 2);
    setPos(5, 0, 2);

    setPos(3, 0, 4); 
    setPos(4, 0, 5);

    for(int i=0; i<8; i++){
        setPos(i, 1, 0);
        setCol(i, 1, 0);
        setCol(i, 0, 0);
    }


    setPos(0, 7, 3);
    setPos(7, 7, 3);

    setPos(1, 7, 1);
    setPos(6, 7, 1);

    setPos(2, 7, 2);
    setPos(5, 7, 2);

    setPos(3, 7, 4); 
    setPos(4, 7, 5);

    for(int i=0; i<8; i++){
        setPos(i, 6, 0);
        setCol(i, 6, 1);
        setCol(i, 7, 1);
    }

}

void board::printwhite(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout << whiteboard[j][7-i] << " ";
        }
        cout << endl;
    }

    cout << "------------------------" << endl;

}

void board::printblack(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout << blackboard[j][7-i] << " ";
        }
        cout << endl;
    }

    cout << "------------------------" << endl;
}

void board::printcolor(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout << color[j][7-i] << " ";
        }
        cout << endl;
    }

    cout << "------------------------" << endl;
}

void board::print(){
    printwhite();
    printblack();
    printcolor();
}