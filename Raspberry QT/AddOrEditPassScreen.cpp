#include "AddOrEditPassScreen.h"
#include "ui_AddOrEditPassScreen.h"
#include "RegistrationInfoScreen.h"

AddOrEditPassScreen::AddOrEditPassScreen(QWidget *parent, Pass *toEdit, std::vector<Pass> *karnety) :
    QDialog(parent),
    ui(new Ui::AddOrEditPassScreen)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    keyboard = keyboard->getKeyboard();
    keyboard->move(0,388); //418

    this->ui->ileDni->installEventFilter(this);
    this->ui->cena->installEventFilter(this);
    this->ui->nazwa->installEventFilter(this);
    this->ui->cenaLabel->setFocus();

    this->karnety = karnety;
    this->toEdit = toEdit;
    if(toEdit !=nullptr)
    {
        this->ui->nazwa->setText(toEdit->nazwa.c_str());
        this->ui->cena->setText(QString::number(toEdit->cena));
        this->ui->ileDni->setText(QString::number(toEdit->ileDni));
    }
}

AddOrEditPassScreen::~AddOrEditPassScreen()
{
    delete ui;
}

bool AddOrEditPassScreen::eventFilter(QObject *obj, QEvent *event)
{
    if( obj == ui->cena && event->type() == QEvent::FocusIn)
    {
        ui->cena->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(200, 200, 200);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->ileDni->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->nazwa->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        keyboard->activate(1, ui->cena, ui->zatwierdz);
        keyboard->show();
        keyboard->activateWindow();
    }
    else if( obj == ui->ileDni && event->type() == QEvent::FocusIn)
    {
        ui->ileDni->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(200, 200, 200);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->cena->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->nazwa->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        keyboard->activate(1, ui->ileDni, ui->zatwierdz);
        keyboard->show();
        keyboard->activateWindow();
    }
    else if( obj == ui->nazwa && event->type() == QEvent::FocusIn)
    {
        ui->nazwa->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(200, 200, 200);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->ileDni->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        ui->cena->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
        keyboard->setType(1);
        keyboard->activate(2, ui->nazwa, ui->zatwierdz);
        keyboard->show();
        keyboard->activateWindow();
    }
    return false;
}

void AddOrEditPassScreen::mousePressEvent(QMouseEvent *event)
{
    ui->cena->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
    ui->ileDni->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
    ui->nazwa->setStyleSheet("color: rgb(0, 0, 0);background-color: rgb(255, 255, 255);font: 75 30pt \"Tahoma\";border-style: solid;border-width:4px;border-radius:30px;");
    ui->cenaLabel->setFocus();
    keyboard->hide();
}

void AddOrEditPassScreen::on_powrot_clicked()
{
    this->close();
}

void AddOrEditPassScreen::on_zatwierdz_clicked()
{
    if(this->ui->nazwa->text().isEmpty() || this->ui->cena->text().isEmpty() ||  this->ui->ileDni->text().isEmpty() )
    {
        RegistrationInfoScreen *registrationInfoScreen = new RegistrationInfoScreen(nullptr, "PUSTE POLE!");
        registrationInfoScreen->move(162,234);
        registrationInfoScreen->show();
        return;
    }
    if(this->toEdit !=nullptr)
    {
        /*
        UserDAO *toEdit = kodokanDAO->authorize_user(toEdit->email, toEdit->hashed_pswd);

        if(toEdit->name.compare(this->ui->imie->text().toStdString()) != 0)
            toEdit->update_user_name(this->ui->imie->text().toStdString());

        if(toEdit->surname.compare(this->ui->imie->text().toStdString()) != 0)
            toEdit->update_user_surname(this->ui->nazwisko->text().toStdString());

        if(toEdit->email.compare(this->ui->imie->text().toStdString()) != 0)
            toEdit->update_user_email(this->ui->email->text().toStdString());

        if(toEdit->hashed_pswd.compare(this->ui->imie->text().toStdString()) != 0)
            toEdit->update_user_hashed_pswd(this->ui->haslo->text().toStdString());
        */
        toEdit->nazwa = this->ui->nazwa->text().toStdString();
        toEdit->cena = this->ui->cena->text().toInt();
        toEdit->ileDni = this->ui->ileDni->text().toInt();
    }
    else
    {
        /*
        kodokanDAO.add_user(this->ui->email->text().toStdString(),
                            this->ui->email->text().toStdString(),
                            this->ui->imie->text().toStdString(),
                            this->ui->nazwisko->text().toStdString(),
                            this->ui->haslo->text().toStdString());

        */
        Pass newPass(this->ui->nazwa->text().toStdString() , this->ui->cena->text().toInt() , this->ui->ileDni->text().toInt());
        karnety->push_back(newPass);
    }

    on_powrot_clicked();
}
