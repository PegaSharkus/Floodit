#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../model/floodit.h"
#include "../observer/observer.h"
#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

namespace G40853 {

class MainWindow : public QMainWindow, public Observer{
    Q_OBJECT
    Ui::MainWindow *ui;
    FloodIt game_;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow() noexcept;
    void update(Subject *);

private:
    void generateBoard();
    void setStyleSheet(QLabel *lb, QString colorName);
    void refreshBoard();
    void eraseBoard();

private slots:
    void startGame();
    void paintBlue();
    void paintPurple();
    void paintRed();
    void paintOrange();
    void paintYellow();
    void paintGreen();
};

} // namespace G40853

#endif // MAINWINDOW_H
