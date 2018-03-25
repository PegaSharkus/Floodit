/********************************************************************************
** Form generated from reading UI file 'dialogend.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEND_H
#define UI_DIALOGEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogEnd
{
public:
    QGridLayout *gridLayout;
    QPushButton *replayBtn;
    QLabel *endLb;
    QLabel *floodLb;
    QLabel *recordLb;
    QLabel *moveLb;
    QPushButton *quitBtn;

    void setupUi(QDialog *DialogEnd)
    {
        if (DialogEnd->objectName().isEmpty())
            DialogEnd->setObjectName(QStringLiteral("DialogEnd"));
        DialogEnd->resize(465, 313);
        gridLayout = new QGridLayout(DialogEnd);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        replayBtn = new QPushButton(DialogEnd);
        replayBtn->setObjectName(QStringLiteral("replayBtn"));

        gridLayout->addWidget(replayBtn, 5, 3, 1, 1);

        endLb = new QLabel(DialogEnd);
        endLb->setObjectName(QStringLiteral("endLb"));
        endLb->setTextFormat(Qt::AutoText);
        endLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(endLb, 0, 2, 1, 1);

        floodLb = new QLabel(DialogEnd);
        floodLb->setObjectName(QStringLiteral("floodLb"));

        gridLayout->addWidget(floodLb, 1, 1, 1, 1);

        recordLb = new QLabel(DialogEnd);
        recordLb->setObjectName(QStringLiteral("recordLb"));

        gridLayout->addWidget(recordLb, 2, 1, 1, 1);

        moveLb = new QLabel(DialogEnd);
        moveLb->setObjectName(QStringLiteral("moveLb"));

        gridLayout->addWidget(moveLb, 1, 2, 1, 1);

        quitBtn = new QPushButton(DialogEnd);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));

        gridLayout->addWidget(quitBtn, 5, 4, 1, 1);


        retranslateUi(DialogEnd);

        QMetaObject::connectSlotsByName(DialogEnd);
    } // setupUi

    void retranslateUi(QDialog *DialogEnd)
    {
        DialogEnd->setWindowTitle(QApplication::translate("DialogEnd", "Dialog", Q_NULLPTR));
        replayBtn->setText(QApplication::translate("DialogEnd", "Replay?", Q_NULLPTR));
        endLb->setText(QApplication::translate("DialogEnd", "You Win!", Q_NULLPTR));
        floodLb->setText(QApplication::translate("DialogEnd", "You flooded it in :", Q_NULLPTR));
        recordLb->setText(QApplication::translate("DialogEnd", "recordLabel", Q_NULLPTR));
        moveLb->setText(QApplication::translate("DialogEnd", "0 moves", Q_NULLPTR));
        quitBtn->setText(QApplication::translate("DialogEnd", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogEnd: public Ui_DialogEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEND_H
