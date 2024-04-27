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
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int i=0; i<8; i++){
        SetConsoleTextAttribute(h, 9);
        cout << 8-i << "| ";
        SetConsoleTextAttribute(h, 15);
        for(int j=0; j<8; j++){
            if(whiteboard[j][7-i] != 7){
                if(color[j][7-i] == 0){
                    SetConsoleTextAttribute(h, 15);
                    cout << whiteboard[j][7-i] << " ";
                }
                else{
                    SetConsoleTextAttribute(h, 8);
                    cout << whiteboard[j][7-i] << " ";
                }
            }
            else{
                SetConsoleTextAttribute(h, 6);
                cout << "-" << " ";
            }
        }
        cout << endl;
    }

    cout << "------------------------" << endl;

    SetConsoleTextAttribute(h, 9);
    cout << "0| ";
    for(int i=0; i<8; i++){
        char let = 'A';
        cout << (char)(let + i) << " ";
    }
    SetConsoleTextAttribute(h, 7);

    cout << endl;

    // printcolor();

}

void board::printblack(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int i=0; i<8; i++){
        SetConsoleTextAttribute(h, 9);
        cout << i+1 << "| ";
        SetConsoleTextAttribute(h, 15);
        for(int j=0; j<8; j++){
            if(blackboard[j][7-i] != 7){
                if(color[7-j][i] == 0){
                    SetConsoleTextAttribute(h, 15);
                    cout << blackboard[j][7-i] << " ";
                }
                else{
                    SetConsoleTextAttribute(h, 8);
                    cout << blackboard[j][7-i] << " ";
                }

            }
            else{
                SetConsoleTextAttribute(h, 6);
                cout << "-" << " ";
            }
        }
        cout << endl;
    }

    cout << "------------------------" << endl;

    SetConsoleTextAttribute(h, 9);
    cout << "0| ";
    for(int i=0; i<8; i++){
        char let = 'H';
        cout << (char)(let - i) << " ";
    }
    SetConsoleTextAttribute(h, 7);

    cout << endl;
    // printcolor();
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