#ifndef DIALOGEND_H
#define DIALOGEND_H

#include <QDialog>

namespace Ui {
class DialogEnd;
}

class DialogEnd : public QDialog{
    Q_OBJECT
    Ui::DialogEnd *ui;

public:
    explicit DialogEnd(int score, int record, std::string name, std::string nameRec, QWidget *parent = 0);
    ~DialogEnd();

private slots:
    void replay();
};

#endif // DIALOGEND_H
