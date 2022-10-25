#include "CDialogConfirm.h"
#include "ui_CDialogConfirm.h"

CDialogConfirm::CDialogConfirm(const QString& message, QWidget* parent) :
    QDialog(parent),
    ui(new Ui::CDialogConfirm)
{
    ui->setupUi(this);
    ui->lblText->setText(message);
}

CDialogConfirm::~CDialogConfirm()
{
    delete ui;
}
