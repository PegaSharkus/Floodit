/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *blueButton;
    QPushButton *greenButton;
    QPushButton *redButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *orangeButton;
    QPushButton *yellowButton;
    QPushButton *purpleButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *lbMoves;
    QHBoxLayout *horizontalLayout_3;
    QLabel *nameLb;
    QLineEdit *nameEdit;
    QLabel *dimLb;
    QSpinBox *heightSpBox;
    QSpinBox *widthSpBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nbColorLb;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *colorSpBox;
    QPushButton *startButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(226, 381);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        blueButton = new QPushButton(centralWidget);
        blueButton->setObjectName(QStringLiteral("blueButton"));
        blueButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: blue;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout->addWidget(blueButton);

        greenButton = new QPushButton(centralWidget);
        greenButton->setObjectName(QStringLiteral("greenButton"));
        greenButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: green;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout->addWidget(greenButton);

        redButton = new QPushButton(centralWidget);
        redButton->setObjectName(QStringLiteral("redButton"));
        redButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: red;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout->addWidget(redButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        orangeButton = new QPushButton(centralWidget);
        orangeButton->setObjectName(QStringLiteral("orangeButton"));
        orangeButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: orange;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_2->addWidget(orangeButton);

        yellowButton = new QPushButton(centralWidget);
        yellowButton->setObjectName(QStringLiteral("yellowButton"));
        yellowButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: yellow;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_2->addWidget(yellowButton);

        purpleButton = new QPushButton(centralWidget);
        purpleButton->setObjectName(QStringLiteral("purpleButton"));
        purpleButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: purple;\n"
"	border-style: outset;\n"
"	width: 40px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:disabled{\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_2->addWidget(purpleButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        lbMoves = new QLabel(centralWidget);
        lbMoves->setObjectName(QStringLiteral("lbMoves"));

        horizontalLayout_4->addWidget(lbMoves);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        nameLb = new QLabel(centralWidget);
        nameLb->setObjectName(QStringLiteral("nameLb"));

        horizontalLayout_3->addWidget(nameLb);

        nameEdit = new QLineEdit(centralWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setMaxLength(3);

        horizontalLayout_3->addWidget(nameEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        dimLb = new QLabel(centralWidget);
        dimLb->setObjectName(QStringLiteral("dimLb"));

        verticalLayout_2->addWidget(dimLb);

        heightSpBox = new QSpinBox(centralWidget);
        heightSpBox->setObjectName(QStringLiteral("heightSpBox"));
        heightSpBox->setMinimum(8);
        heightSpBox->setMaximum(20);
        heightSpBox->setValue(12);

        verticalLayout_2->addWidget(heightSpBox);

        widthSpBox = new QSpinBox(centralWidget);
        widthSpBox->setObjectName(QStringLiteral("widthSpBox"));
        widthSpBox->setMinimum(8);
        widthSpBox->setMaximum(20);
        widthSpBox->setValue(12);

        verticalLayout_2->addWidget(widthSpBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        nbColorLb = new QLabel(centralWidget);
        nbColorLb->setObjectName(QStringLiteral("nbColorLb"));

        horizontalLayout_5->addWidget(nbColorLb);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        colorSpBox = new QSpinBox(centralWidget);
        colorSpBox->setObjectName(QStringLiteral("colorSpBox"));
        colorSpBox->setMinimum(3);
        colorSpBox->setMaximum(6);
        colorSpBox->setValue(6);

        horizontalLayout_5->addWidget(colorSpBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout_2->addWidget(startButton);


        gridLayout_3->addLayout(verticalLayout_2, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 226, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        blueButton->setText(QString());
        greenButton->setText(QString());
        redButton->setText(QString());
        orangeButton->setText(QString());
        yellowButton->setText(QString());
        purpleButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Moves :", Q_NULLPTR));
        lbMoves->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        nameLb->setText(QApplication::translate("MainWindow", "Name :", Q_NULLPTR));
        dimLb->setText(QApplication::translate("MainWindow", "Dimensions (height x width)", Q_NULLPTR));
        nbColorLb->setText(QApplication::translate("MainWindow", "Amount of colors", Q_NULLPTR));
        startButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
