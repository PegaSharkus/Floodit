#include "position.h"

using namespace G40853;

Position::Position(): Position(0,0)
{}

Position::Position(unsigned x, unsigned y): x_{x}, y_{y}
{}
