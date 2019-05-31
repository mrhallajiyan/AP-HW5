/********************************************************************************
** Form generated from reading UI file 'location.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATION_H
#define UI_LOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Location
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Location)
    {
        if (Location->objectName().isEmpty())
            Location->setObjectName(QStringLiteral("Location"));
        Location->resize(400, 300);
        menuBar = new QMenuBar(Location);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Location->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Location);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Location->addToolBar(mainToolBar);
        centralWidget = new QWidget(Location);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Location->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Location);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Location->setStatusBar(statusBar);

        retranslateUi(Location);

        QMetaObject::connectSlotsByName(Location);
    } // setupUi

    void retranslateUi(QMainWindow *Location)
    {
        Location->setWindowTitle(QApplication::translate("Location", "Location", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Location: public Ui_Location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATION_H
