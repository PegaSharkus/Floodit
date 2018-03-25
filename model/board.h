#ifndef BOARD_H
#define BOARD_H

#include "color.h"
#include "position.h"
#include <map>
#include <vector>

/*!
 * \brief Guillaume Jouret's namespace.
 */
namespace G40853 {

/*!
 * \brief The Board class represent the grid.
 */
class Board{
    unsigned height_;
    unsigned width_;
    std::map<Position, Color> board_;
    std::map<Position, bool> border_;
    std::vector<Position> stain_;

public:
    Board();
    void setBoard(unsigned height, unsigned width, unsigned nbColor);
    unsigned getHeight() const;
    unsigned getWidth() const;
    std::map<Position, Color> getBoard() const;
    bool isFull() const;
    void traceStain();
    void paintStain(Color color);

private:
    void resetBoard();
    void checkBorder(Position &pos);
};

} // namespace G40853

#endif // BOARD_H
