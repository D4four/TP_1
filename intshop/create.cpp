#include "create.h"
#include "ui_create.h"

Create::Create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
    bookWin = new Book();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(bookWin, &Book::back, this, &Create::show);

    StudBookWin = new StudBook();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(StudBookWin, &StudBook::back, this, &Create::show);

    OffBookWin = new Office();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(OffBookWin, &Office::back, this, &Create::show);
}

Create::~Create()
{
    delete ui;
}


void Create::on_create_clicked()
{
    int item = ui->choose->currentIndex();

    switch(item) {
    case 0:
        bookWin->show();
        this->close();
        break;

    case 1:
        StudBookWin->show();
        this->close();
        break;

    case 2:
        OffBookWin->show();
        this->close();
        break;
    }
}


void Create::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}

