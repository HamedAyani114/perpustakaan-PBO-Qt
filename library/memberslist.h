#ifndef MEMBERSLIST_H
#define MEMBERSLIST_H

#include <QDialog>

namespace Ui {
class membersList;
}

class membersList : public QDialog
{
    Q_OBJECT

public:
    explicit membersList(QWidget *parent = nullptr);
    ~membersList();

private slots:

    void on_value_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::membersList *ui;
};

#endif // MEMBERSLIST_H
