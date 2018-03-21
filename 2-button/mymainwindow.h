#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QPushButton>
#include <QMessageBox>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QFrame>
#include <QLineEdit>
#include <QLabel>

class MyMainWindow: public QMainWindow
{
  Q_OBJECT

  public:
    MyMainWindow(){}
    ~ MyMainWindow(){}

    void decorate()
    {
    QWidget *window = new QWidget;
      QPushButton *button1 = new QPushButton(this);
      QPushButton *button2 = new QPushButton(this);
      QPushButton *button3 = new QPushButton(this);
      QPushButton *button4 = new QPushButton(this);
      QPushButton *button5 = new QPushButton(this);
      QPushButton *button6 = new QPushButton(this);
      QPushButton *button7 = new QPushButton(this);
      QPushButton *button8 = new QPushButton(this);

      button1->setText("Checking Account: 123456");
      button2->setText("Deposit to Checking");
      button3->setText("Withdraw from Checking");
      button4->setText("Deposit to Savings");
      button5->setText("Withdraw from Savings");
      button6->setText("Savings Account: 654321");
      button7->setText("Transfer Funds");
      button8->setText("Transaction History");

      // Labels for Account balances
      QLabel *label1 = new QLabel;
      label1 -> setText("Checking Available Balance: $50.00");
      QLabel *label2 = new QLabel;
      label2 ->setText("Savings Available Balance: $150.00");

      QObject::connect(button1, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button2, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button3, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button4, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button5, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button6, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button7, SIGNAL(clicked()),this, SLOT(clickedSlot()));
      QObject::connect(button8, SIGNAL(clicked()),this, SLOT(clickedSlot()));

// I commented this stuff out because it blocked several buttons...
// I left them here just in case we need to use them later
 /*
      button1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button4->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button6->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button7->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
      button8->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
*/


      // Format buttons
      QGridLayout *layout = new QGridLayout;
      layout->addWidget(button1, 2, 1, 2, 2);
      layout->addWidget(label1,1,1,1,2);
      layout->addWidget(button2, 4, 1);
      layout->addWidget(button3, 4, 2);
      layout->addWidget(button4, 12, 1);
      layout->addWidget(button5, 12, 2);
      layout->addWidget(button6, 0, 1, 0, 2);
      layout->addWidget(label2,5,1,5,2);
      layout-> addWidget(button7, 20, 1);
      layout-> addWidget(button8, 20, 2);

      // Set the title
      QString windowTitle("Welcome to Bank of America, Jason Guevara!");
      window->setWindowTitle(windowTitle);
      window->setLayout(layout);
      window->show();
    }

   public slots:
     void clickedSlot()
     {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Hello");
        msgBox.setText("You Clicked "+ ((QPushButton*)sender())->text());
        msgBox.exec();
     }
};
#endif
