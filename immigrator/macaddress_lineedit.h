#ifndef MACADDRESS_LINEEDIT_H
#define MACADDRESS_LINEEDIT_H

#include <QLineEdit>
#include <QObject>
#include <QKeyEvent>

#define MAC_LENGTH  6

class MacAddress_lineEdit : public QLineEdit
{
    Q_OBJECT

public:
    MacAddress_lineEdit(QWidget *parent = 0);
    ~MacAddress_lineEdit();

private slots:
    void MacAddress_lineEdit_textEdited(QString m);
};

#endif // MACADDRESS_LINEEDIT_H
