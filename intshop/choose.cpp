#include "choose.h"
#include "ui_choose.h"

Choose::Choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Choose)
{
    ui->setupUi(this);
    createWin = new Create();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(createWin, &Create::back, this, &Choose::show);
    viewWin = new View();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(viewWin, &View::back, this, &Choose::show);
    editWin = new Edit();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(editWin, &Edit::back, this, &Choose::show);

    sWin = new Spisok();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(sWin, &Spisok::back, this, &Choose::show);
    lWin = new Logi();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(lWin, &Logi::back, this, &Choose::show);
}

Choose::~Choose()
{
    delete ui;
}



void Choose::on_back_clicked()
{
    this->close();
    emit back();
}


void Choose::on_open_clicked()
{
    viewWin->show();
    this->close();
}


void Choose::on_edit_clicked()
{
    editWin->show();
    this->close();
}


void Choose::on_create_clicked()
{
    createWin->show();
    this->close();
}


void Choose::on_spisok_clicked()
{
    sWin->show();
    this->close();
}


void Choose::on_logi_clicked()
{
    lWin->show();
    this->close();
}

