#ifndef IR2USB_H
#define IR2USB_H

#include <QWidget>

namespace Ui {
class Ir2Usb;
}

class Ir2Usb : public QWidget
{
    Q_OBJECT

public:
    explicit Ir2Usb(QWidget *parent = 0);
    ~Ir2Usb();

private slots:
    void on_readButoon_clicked();

    void on_writeButton_clicked();

    void on_searchButton_clicked();

    void on_startUpdButt_clicked();

    void on_refCurrVerButt_clicked();

private:
    Ui::Ir2Usb *ui;
};

#endif // IR2USB_H
