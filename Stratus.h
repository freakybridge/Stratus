#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Stratus.h"

class Stratus : public QMainWindow
{
    Q_OBJECT

public:
    Stratus(QWidget *parent = Q_NULLPTR);

private:
    Ui::StratusClass ui;
};
