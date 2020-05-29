#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LoginScreen.h"
#include "QMouseEvent"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QMainWindow::showFullScreen();
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_kupKarnetButton_clicked()
{
    QMouseEvent event1(QEvent::MouseButtonPress, QPoint(0,0),
    Qt::LeftButton,
    Qt::LeftButton,
    Qt::NoModifier );
    QApplication::sendEvent(ui->zalozKontoButton, &event1);
}

void MainWindow::on_zalogujSieButton_clicked()
{
    loginScreen = new LoginScreen(); // Be sure to destroy your window somewhere
    loginScreen->move(0,0);
    loginScreen->show();
}

void MainWindow::on_zalozKontoButton_clicked()
{
    registrationScreen = new RegistrationScreen();
    registrationScreen->move(0,0);
    registrationScreen->show();
    registrationScreen->loop();
}
