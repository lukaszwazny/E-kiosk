#ifndef LOGGEDSCREEN_H
#define LOGGEDSCREEN_H

#include <QDialog>
#include "LoginScreen.h"
#include "BuyingPassScreen.h"
#include "LoggedUser.h"

namespace Ui {
class LoggedScreen;
}

class LoggedScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoggedScreen(QWidget *parent = nullptr, LoggedUser* = nullptr, QWidget *toClose = nullptr);
    ~LoggedScreen();

private slots:
    void on_wyloguj_clicked();

    void on_kupKarnet_clicked();

    void on_zmienDane_clicked();

     void odbierzZmianeDanych();

private:
    Ui::LoggedScreen *ui;
    BuyingPassScreen *buyingPassScreen;
    LoggedUser *loggedUser;
};

#endif // LOGGEDSCREEN_H