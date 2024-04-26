#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class rook: public piece
{
private:


public:
    rook(piecenum pn, pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};