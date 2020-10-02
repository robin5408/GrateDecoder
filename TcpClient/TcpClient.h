#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TcpClient.h"

class TcpClient : public QMainWindow
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = Q_NULLPTR);

private:
    Ui::TcpClientClass ui;
};
