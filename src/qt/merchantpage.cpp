
#include "merchantpage.h"
#include "ui_merchants.h"

#include "bitcoingui.h"
#include "guiutil.h"

MerchantPage::MerchantPage( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MerchantPage)
{
    ui->setupUi(this);
    webViewHandler.setWebView(ui->webView);
    webViewHandler.loadPage("https://fistbumpgithub.github.io/2017/");
}

MerchantPage::~MerchantPage()
{
    delete ui;
}
