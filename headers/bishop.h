#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class bishop: public piece
{
private:


public:
    bishop(pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};