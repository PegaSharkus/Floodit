#ifndef FLOODIT_H
#define FLOODIT_H

#include "board.h"
#include "../observer/subject.h"
#include <sys/stat.h>

/*!
 * \brief Guillaume Jouret's namespace.
 */
namespace G40853 {


class FloodIt : public Subject{

    std::string name_;
    Board board_;
    unsigned colorNb_;
    int moveNb_;
    std::string nameRec_;
    int record_;
    bool ended_;

public:
    FloodIt();
    void setFloodIt(std::string name, unsigned height, unsigned width, unsigned colorNb);
    Board getBoard() const;
    unsigned getColorNb() const;
    int getMoveNb() const;
    int getRecord() const;
    std::string getName() const;
    std::string getNameRec() const;
    bool isEnded() const;
    void paintZone(Color color);
private:
    void readScore();
    inline static bool fileExists(const std::string& path);
};

// inline method

bool FloodIt::fileExists(const std::string &path){
    struct stat buffer;
    return (stat(path.c_str(), &buffer) == 0);
}

} // namespace G40853

#endif // FLOODIT_H
