#include <QPushButton>
#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QFrame>
#include <QLineEdit>
#include <QLabel>

int main(int argc, char **argv)
{

QApplication app(argc,argv);
// http://doc.qt.io/archives/qt-4.8/layout.html
QWidget *window = new QWidget;
    // Create buttons
    QPushButton *button1 = new QPushButton("Checking Account: 123456");
    QPushButton *button2 = new QPushButton("Deposit to Checking");
    QPushButton *button3 = new QPushButton("Withdraw from Checking");
    QPushButton *button4 = new QPushButton("Deposit to Savings");
    QPushButton *button5 = new QPushButton("Withdraw from Savings");
    QPushButton *button6 = new QPushButton("Savings Account: 654321");
    QPushButton *button7 = new QPushButton("Transfer Funds");
    QPushButton *button8 = new QPushButton("Transaction History");

    // Labels for Account balances
    QLabel *label1 = new QLabel;
    label1 -> setText("Checking Available Balance: $50.00");
    QLabel *label2 = new QLabel;
    label2 ->setText("Savings Available Balance: $150.00");

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

return app.exec();
}

