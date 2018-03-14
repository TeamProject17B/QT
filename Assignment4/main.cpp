#include <QPushButton>
#include <QApplication>
#include <QBoxLayout>
#include <QLayout>

int main(int argc, char **argv)
{

QApplication app(argc,argv);
// http://doc.qt.io/archives/qt-4.8/layout.html
QWidget *window = new QWidget;

    QPushButton *button1 = new QPushButton("Checking Account: 123456");
    QPushButton *button2 = new QPushButton("Deposit to Checking");
    QPushButton *button3 = new QPushButton("Withdraw from Checking");
    QPushButton *button4 = new QPushButton("Deposit to Savings");
    QPushButton *button5 = new QPushButton("Withdraw from Savings");
    QPushButton *button6 = new QPushButton("Savings Account: 654321");
    QPushButton *button7 = new QPushButton("Transfer Funds");
    QPushButton *button8 = new QPushButton("Transaction History");

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(button1, 0, 1, 0, 2);
    layout->addWidget(button2, 0, 1);
    layout->addWidget(button3, 0, 2);
    layout->addWidget(button4, 8, 1);
    layout->addWidget(button5, 8, 2);
    layout->addWidget(button6, 2, 1, 2, 2);
    layout-> addWidget(button7, 10, 1);
    layout-> addWidget(button8, 10, 2);

    window->setLayout(layout);
    window->show();

return app.exec();
}

