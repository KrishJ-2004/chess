#include <iostream>
#include <vector>

#pragma once

using namespace std;

class board
{
private:
    vector< vector<int> > blackboard;
    vector< vector<int> > whiteboard;
    vector< vector<int> > color;    


public:
    board();

    int getPos(int a, int b);

    void setPos(int a, int b, int piece);

    int getCol(int a, int b);

    void setCol(int a, int b, int Col);

    void initBoard();

    void printwhite();

    void printblack();

    void printcolor();

    void print();

};