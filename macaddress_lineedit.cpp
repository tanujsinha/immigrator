#include "macaddress_lineedit.h"
#include <QMessageBox>

MacAddress_lineEdit::MacAddress_lineEdit(QWidget *parent)
        : QLineEdit(parent)
{
    connect( this, SIGNAL(textEdited(QString)), this, SLOT(MacAddress_lineEdit_textEdited(QString)));
}


MacAddress_lineEdit::~MacAddress_lineEdit()
{}




int Check_hex(char byte)
{
    if((byte!='A') || (byte!='a') || (byte!='B') || (byte!='b')
        || (byte!='C') || (byte!='c') || (byte!='D') || (byte!='d')
        || (byte!='E') || (byte!='e') || (byte!='F') || (byte!='f'))
    {
        int num=(int)byte;
        if((num!=0) || (num!=1) || (num!=2) || (num!=3) || (num!=4) || (num!=5)
           || (num!=6) || (num!=7) || (num!=8) || (num!=9))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

void MacAddress_lineEdit::MacAddress_lineEdit_textEdited(QString text)
{
    int status=1;
    int str_len=text.length();
    QMessageBox msg;
    char *textptr=(char *)malloc(sizeof(char)*str_len);
    memcpy(textptr,text.toStdString().c_str(),str_len);
    while((str_len-1)>0)
    {
        status=status & Check_hex(textptr[str_len]);
        msg.setText(QString::number(status));
        msg.exec();
        str_len--;
    }
    if(status)
    {
        //msg.setText("not appropiate MAC address");
        //msg.exec();
    }
}
