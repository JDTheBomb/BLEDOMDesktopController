#include BLEDOMController.h

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *widget = new QWidget;
    Ui::CalculatorForm ui;
    ui.setupUi(widget);

    widget->show();
    return app.exec();
}