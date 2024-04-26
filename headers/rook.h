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
    rook(pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};