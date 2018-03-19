#include "ir2usb.h"
#include "ui_ir2usb.h"
#include <QFileDialog>
#include <QProgressBar>
#include <QProgressDialog>
#include <iostream>

Ir2Usb::Ir2Usb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ir2Usb)
{
    ui->setupUi(this);
}

Ir2Usb::~Ir2Usb()
{
    delete ui;
}

/**********************************************************************
 *
 * This function get the address that written by the user and send it
 * to another function that bring the data from this address.
 * After this it set the data in the readDataText (Line Edit object)
 *
 *********************************************************************/
void Ir2Usb::on_readButoon_clicked()
{
    QString readAdd;
    readAdd = ui->readAddText->text();
}

/**********************************************************************
 *
 * This function get the address and the data that written by the user
 * and send it to another function that write the data int this
 * address.
 *
 *********************************************************************/
void Ir2Usb::on_writeButton_clicked()
{
    QString writeAdd, writeData;
    writeAdd = ui->writeAddText->text();
    writeData = ui->writeDataText->text();
}

/**********************************************************************
 *
 * This function open a File Dialog that helps user to find the new
 * file he wants to burn. After this the path of the file will write
 * in thefileNameText (Line Edit object).
 *
 *********************************************************************/
void Ir2Usb::on_searchButton_clicked()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"/home/user//","All files (*.*)");
    ui->fileNameText->setText(fileName);
}

/**********************************************************************
 *
 * This function take the file name from the Line Edit and burn the
 * file in the Flash.
 *
 *********************************************************************/
void Ir2Usb::on_startUpdButt_clicked()
{
    ui->progressBar->setValue(100);
}

/**********************************************************************
 *
 * This function write the current versions of Fw and SW  that burn
 * in the flash.
 *
 *********************************************************************/
void Ir2Usb::on_refCurrVerButt_clicked()
{
    ui->fwCurrentLab->setText("hello");
    ui->swCurrentLab->setText("World");
}
