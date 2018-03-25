#include "board.h"
#include "position.h"
#include <stdlib.h>
#include <algorithm>
#include <time.h>

using namespace G40853;

Board::Board(): height_{0}, width_{0}{}

void Board::setBoard(unsigned height, unsigned width, unsigned nbColor){
    resetBoard();
    height_ = height;
    width_ = width;
    srand(time(NULL));  //initialisation de la fonction random
    for(unsigned u {0}; u < width; ++u){
        for(unsigned j{0}; j < height; ++j){
            board_.emplace(
                        std::pair<Position, Color>{
                            Position(u, j),
                            static_cast<Color>(rand() % nbColor) //la fonction random renvoie une couleur aléatoire
                        });
            border_.emplace(std::pair<Position, bool>{Position(u,j), 0});
        }
    }
    stain_.push_back(Position(0,0));
    border_.erase(Position(0,0));
    border_.at(Position(0,1)) = 1;
    border_.at(Position(1,0)) = 1;
    traceStain();
}

void Board::resetBoard(){
    board_.clear();
    stain_.clear();
    border_.clear();
}

unsigned Board::getHeight() const{
    return height_;
}

unsigned Board::getWidth() const{
    return width_;
}

std::map<Position, Color> Board::getBoard() const{
    return board_;
}

bool Board::isFull() const{
    return stain_.size() == height_*width_;
}

void Board::traceStain(){
    Color color {board_.at(Position(0,0))};
    Position pos, temp;
    std::vector<Position> toRemove;
    for(auto it = border_.begin(); it != border_.end(); ++it){
        if(it->second && board_.at(it->first) == color){
            stain_.push_back(it->first);
            toRemove.push_back(it->first);
            pos = Position(it->first);
            temp = Position(pos.getX(), pos.getY()+1);
            checkBorder(temp);
            temp = Position(pos.getX()+1, pos.getY());
            checkBorder(temp);
            temp = Position(pos.getX(), pos.getY()-1);
            checkBorder(temp);
            temp = Position(pos.getX()-1, pos.getY());
            checkBorder(temp);
        }
    }
    for(auto it = toRemove.begin(); it != toRemove.end(); ++it){
        border_.erase(*it);
    }
}

void Board::checkBorder(Position &pos){
    if(border_.find(pos) != border_.end() && !border_.at(pos)) border_.at(pos) = 1;
}

void Board::paintStain(Color color){
    for(auto it = stain_.begin(); it != stain_.end(); ++it){
        board_.at(*it) = color;
    }
}
