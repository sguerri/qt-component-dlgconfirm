#ifndef CDIALOGCONFIRM_H
#define CDIALOGCONFIRM_H

#include <QDialog>

namespace Ui {
class CDialogConfirm;
}

class CDialogConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit CDialogConfirm(const QString& message, QWidget* parent = nullptr);
    ~CDialogConfirm();

private:
    Ui::CDialogConfirm* ui;
};

#endif // CDIALOGCONFIRM_H
