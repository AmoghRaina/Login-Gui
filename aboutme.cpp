#include "aboutme.h"
#include "ui_aboutme.h"
#include <QDesktopServices>
#include <QUrl>

aboutme::aboutme(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::aboutme)
{
    ui->setupUi(this);
    setWindowTitle("About me");
    setWindowOpacity(0.97);
    setFixedSize(size());
    ui->textBrowser->setOpenExternalLinks(true);

}

aboutme::~aboutme()
{
    delete ui;
}
void aboutme::onLinkClicked(const QUrl &url) {
    QDesktopServices::openUrl(url);
}
