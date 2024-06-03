#include <QApplication>
#include <QProcessEnvironment>
#include <QLabel>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QString path = QProcessEnvironment::systemEnvironment().value("PWD");
    qDebug() << path;

    app.aboutQt();

    QSharedPointer<QLabel> label(new QLabel("Hello QT6!"));
    label->setFixedSize(200, 300);
    label->show();
    return app.exec();
}