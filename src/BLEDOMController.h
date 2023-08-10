/********************************************************************************
** Form generated from reading UI file 'BLEDOMController.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef BLEDOMCONTROLLER_H
#define BLESDOMCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "kcolorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTreeWidget *treeWidget;
    QPushButton *Scan;
    KColorCombo *kcolorcombo;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        treeWidget = new QTreeWidget(Form);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 150, 190));
        treeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        Scan = new QPushButton(Form);
        Scan->setObjectName(QString::fromUtf8("Scan"));
        Scan->setGeometry(QRect(110, 0, 40, 33));
        kcolorcombo = new KColorCombo(Form);
        kcolorcombo->addItem(QString());
        kcolorcombo->setObjectName(QString::fromUtf8("kcolorcombo"));
        kcolorcombo->setGeometry(QRect(180, 30, 94, 32));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "BLEDOM Controller", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Form", "Group Manage", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Form", "My Devices", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Form", "BLEDOM", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        Scan->setText(QCoreApplication::translate("Form", "Scan", nullptr));
        kcolorcombo->setItemText(0, QCoreApplication::translate("Form", "test", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BLEDOMCONTROLLER_H
