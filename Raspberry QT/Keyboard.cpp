#include "Keyboard.h"
#include "ui_Keyboard.h"
#include "LoginScreen.h"

int Keyboard::ile = 0;

Keyboard::Keyboard(QWidget *parent, QPushButton *toClick) :
    QDialog(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->toClick = toClick;
    ile++;
}

Keyboard::~Keyboard()
{
    delete ui;
    ile--;
}

void Keyboard::activate(QLineEdit *toEdit)
{
    this->toEdit = toEdit;
    if(toEdit->echoMode() == 2)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
    else if(toEdit->text().size()==0)
    {
        this->type = 2;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_Q_clicked()
{
    toEdit->insert(ui->Q->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_W_clicked()
{
    toEdit->insert(ui->W->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_E_clicked()
{
    toEdit->insert(ui->E->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_R_clicked()
{
    toEdit->insert(ui->R->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_T_clicked()
{
    toEdit->insert(ui->T->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_Y_clicked()
{
    toEdit->insert(ui->Y->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_U_clicked()
{
    toEdit->insert(ui->U->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_I_clicked()
{
    toEdit->insert(ui->I->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_O_clicked()
{
    toEdit->insert(ui->O->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_P_clicked()
{
    toEdit->insert(ui->P->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_A_clicked()
{
    toEdit->insert(ui->A->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_S_clicked()
{
    toEdit->insert(ui->S->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_D_clicked()
{
    QString text = ui->D->text();
    if(text.compare("&&") == 0)
    {
        text = "&";
    }
    toEdit->insert(text);
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }

}

void Keyboard::on_F_clicked()
{
    toEdit->insert(ui->F->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_G_clicked()
{
    toEdit->insert(ui->G->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_H_clicked()
{
    toEdit->insert(ui->H->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_J_clicked()
{
    toEdit->insert(ui->J->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_K_clicked()
{
    toEdit->insert(ui->K->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_L_clicked()
{
    toEdit->insert(ui->L->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_CAPS_clicked()
{
    toClick->setFocus();
    this->hide();
}

void Keyboard::on_Z_clicked()
{
    toEdit->insert(ui->Z->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_X_clicked()
{
    toEdit->insert(ui->X->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_C_clicked()
{
    toEdit->insert(ui->C->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_V_clicked()
{
    toEdit->insert(ui->V->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_B_clicked()
{
    toEdit->insert(ui->B->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_N_clicked()
{
    toEdit->insert(ui->N->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_M_clicked()
{
    toEdit->insert(ui->M->text());
    if(toEdit->text().size()==1)
    {
        this->type = 0;
        on_NUMERYCZNA_clicked();
    }
}

void Keyboard::on_BACKSPACE_clicked()
{
    toEdit->backspace();
}


void Keyboard::on_NUMERYCZNA_clicked()
{
    if(this->type == 0)
    {
        this->ui->NUMERYCZNA->setText("123");

        this->ui->Q->setText("q");
        this->ui->W->setText("w");
        this->ui->E->setText("e");
        this->ui->R->setText("r");
        this->ui->T->setText("t");
        this->ui->Y->setText("y");
        this->ui->U->setText("u");
        this->ui->I->setText("i");
        this->ui->O->setText("o");
        this->ui->P->setText("p");

        this->ui->A->setText("a");
        this->ui->S->setText("s");
        this->ui->D->setText("d");
        this->ui->F->setText("f");
        this->ui->G->setText("g");
        this->ui->H->setText("h");
        this->ui->J->setText("j");
        this->ui->K->setText("k");
        this->ui->L->setText("l");

        this->ui->Z->setText("z");
        this->ui->X->setText("x");
        this->ui->C->setText("c");
        this->ui->V->setText("v");
        this->ui->B->setText("b");
        this->ui->N->setText("n");
        this->ui->M->setText("m");
        this->ui->PRZECINEK->setText(",");

        this->type = 1;
    }

    else if(this->type == 1)
    {
        this->ui->NUMERYCZNA->setText("ABC");

        this->ui->Q->setText("1");
        this->ui->W->setText("2");
        this->ui->E->setText("3");
        this->ui->R->setText("4");
        this->ui->T->setText("5");
        this->ui->Y->setText("6");
        this->ui->U->setText("7");
        this->ui->I->setText("8");
        this->ui->O->setText("9");
        this->ui->P->setText("0");

        this->ui->A->setText("@");
        this->ui->S->setText("#");
        this->ui->D->setText("&&");
        this->ui->F->setText("*");
        this->ui->G->setText("-");
        this->ui->H->setText("+");
        this->ui->J->setText("=");
        this->ui->K->setText("(");
        this->ui->L->setText(")");

        this->ui->Z->setText("_");
        this->ui->X->setText("$");
        this->ui->C->setText("\"");
        this->ui->V->setText("\'");
        this->ui->B->setText(":");
        this->ui->N->setText(";");
        this->ui->M->setText("/");
        this->ui->PRZECINEK->setText("%");

        this->type = 2;
    }

    else if(this->type == 2)
    {
        this->ui->NUMERYCZNA->setText("abc");

        this->ui->Q->setText("Q");
        this->ui->W->setText("W");
        this->ui->E->setText("E");
        this->ui->R->setText("R");
        this->ui->T->setText("T");
        this->ui->Y->setText("Y");
        this->ui->U->setText("U");
        this->ui->I->setText("I");
        this->ui->O->setText("O");
        this->ui->P->setText("P");

        this->ui->A->setText("A");
        this->ui->S->setText("S");
        this->ui->D->setText("D");
        this->ui->F->setText("F");
        this->ui->G->setText("G");
        this->ui->H->setText("H");
        this->ui->J->setText("J");
        this->ui->K->setText("K");
        this->ui->L->setText("L");

        this->ui->Z->setText("Z");
        this->ui->X->setText("X");
        this->ui->C->setText("C");
        this->ui->V->setText("V");
        this->ui->B->setText("B");
        this->ui->N->setText("N");
        this->ui->M->setText("M");

        this->type = 0;
    }
}

void Keyboard::on_PRZECINEK_clicked()
{
    toEdit->insert(ui->PRZECINEK->text());
}

void Keyboard::on_SPACE_clicked()
{
    toEdit->insert(" ");
}

void Keyboard::on_KROPKA_clicked()
{
    toEdit->insert(ui->KROPKA->text());
}

void Keyboard::on_ENTER_clicked()
{
    toClick->setFocus();
    toClick->click();
    this->hide();
}
