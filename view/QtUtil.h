#include "../model/color.h"
#include <QColor>

namespace G40853 {

QString translateColor(const Color & color){
    QColor qcolor;
    switch (color) {
    case RED:
        qcolor = QColor("red");
        break;
    case GREEN:
        qcolor = QColor("green");
        break;
    case BLUE:
        qcolor = QColor("blue");
        break;
    case YELLOW:
        qcolor = QColor("yellow");
        break;
    case ORANGE:
        qcolor = QColor("orange");
        break;
    case PURPLE:
        qcolor = QColor("purple");
        break;
    }
    return qcolor.name();
}

} // namespace G40853
