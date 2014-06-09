#include "macaddress_lineedit.h"
#include <QMessageBox>



MacAddress_lineEdit::MacAddress_lineEdit(QWidget *parent)
    : QLineEdit(parent)
{
    connect( this, SIGNAL(textEdited(QString)), this, SLOT(MacAddress_lineEdit_textEdited(QString)));
}


MacAddress_lineEdit::~MacAddress_lineEdit()
{}

void MacAddress_lineEdit::MacAddress_lineEdit_textEdited(QString text)
{
    bool status=TRUE;
    int index;
    int cursor;
    int str_len=text.length();
    int number;
    QMessageBox msg;
    char *textptr=(char *)malloc(sizeof(char)*2);
    QStringList array=QStringList();
    if(str_len>17)
    {
        cursor=0;
        array=text.split(':');

        while(cursor<MAC_LENGTH)
        {
            textptr=strdup(array[cursor].toStdString().c_str());
            for(index=0;index<2;index++)
            {
                if((textptr[index]=='A') || (textptr[index]=='a') || (textptr[index]=='B') || (textptr[index]=='b')
                        || (textptr[index]=='C') || (textptr[index]=='c') || (textptr[index]=='D') || (textptr[index]=='d')
                        || (textptr[index]=='E') || (textptr[index]=='e') || (textptr[index]=='F') || (textptr[index]=='f'))
                {
                    status=status & TRUE;
                }
                else
                {
                    number=((int)textptr[index])-48;
                    if(number==1 || number==2 || number==3 || number==4 || number==5 || number==6 || number==7 || number==8
                            || number==9 || number==0)
                    {
                        status=status & TRUE;
                    }
                    else
                    {
                        status=status & FALSE;
                    }
                }
            }
            cursor++;
        }
        if(!status)
        {
            msg.setText("Not Appropiate MAC Address");
            msg.exec();
        }
    }
    free(textptr);
}
