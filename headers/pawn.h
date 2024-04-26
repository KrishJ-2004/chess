#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class pawn: public piece
{
private:


public:
    pawn(pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};