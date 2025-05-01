#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    LoginWindow(QWidget* parent = nullptr);
    ~LoginWindow();

private slots:
    void onLoginButtonClicked();

private:
    Ui::LoginWindow* ui;
    const QString predefinedUsername = "admin";
    const QString predefinedPassword = "1234";
};

#endif // LOGINWINDOW_H

