#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    connect(ui->loginButton, &QPushButton::clicked,
        this, &LoginWindow::onLoginButtonClicked);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::onLoginButtonClicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == predefinedUsername && password == predefinedPassword) {
        ui->statusLabel->setStyleSheet("color: green; font-weight: bold;");
        ui->statusLabel->setText("Login successful!");
    }
    else {
        ui->statusLabel->setStyleSheet("color: red; font-weight: bold;");
        ui->statusLabel->setText("Login failed. Try again.");
    }
}
