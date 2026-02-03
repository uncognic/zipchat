#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_zipchat.h"

class zipchat : public QMainWindow
{
    Q_OBJECT

public:
    zipchat(QWidget *parent = nullptr);
    ~zipchat();

private:
    Ui::zipchatClass ui;
};

