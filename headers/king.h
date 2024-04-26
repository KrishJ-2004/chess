#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class king: public piece
{
private:


public:
    king(piecenum pn, pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};