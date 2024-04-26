#include <iostream>
#include <vector>

#pragma once

using namespace std;

class board
{
private:
    vector< vector<int> > blackboard;
    vector< vector<int> > whiteboard;


public:
    board();

    int getPos(int a, int b);

    void setPos(int a, int b, int piece);

    void initBoard();

    void print();

};