#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    winCh = new Choose();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(winCh, &Choose::back, this, &MainWindow::show);
    signInW = new SignIn();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(signInW, &SignIn::back, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
     if (e->key() == Qt::Key_Enter || e->key() == Qt::Key_Return){
         on_auth_clicked();
     }
}

void MainWindow::on_auth_clicked()
{
    QString login = ui->logEdit->text();
    QString password = ui->passEdit->text();
    int flag = 0;
    string linen;
    string linep;
    map <string, string> sign;
    ifstream n((("Names.txt"))); // окрываем файл для чтения
    ifstream p((("Passes.txt"))); // окрываем файл для чтения
    if (n.is_open() && p.is_open())
    {

        while (getline(n, linen) && getline(p, linep))
        {
            sign[linen] = linep;

        }




    }

    n.close();
    p.close();

    map <string, string> :: iterator it = sign.begin();

    for (int i = 0; it != sign.end(); it++, i++) {
        if ((login.toStdString() == it->first && password.toStdString() == it->second)) {
            flag = 1;
            break;
        }
    }
    if ((login == "admin" && password == "admin")) {
        flag = 1;
    }

    if (flag == 1) {
        ofstream nn("now.txt", ios_base::trunc);
        nn << login.toStdString() << endl;
        nn.clear();

        winCh->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Авторизация", "Попробуйте снова...");
    }

//    if (!(login == "admin" && password == "admin")) {
//        QMessageBox::warning(this, "Авторизация", "Попробуйте снова...");
//    } else {
//        winCh->show();
//        this->close();
//    }
}


void MainWindow::on_sign_clicked()
{
    signInW->show();
    this->close();
}

