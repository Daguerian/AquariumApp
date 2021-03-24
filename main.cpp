#include <QApplication>
#include <QString>
#include <QTranslator>
#include <QLibraryInfo>
#include "Fenetre.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);   //création de l'App

    //set langage, pour la traduction des boutons, ect
    QString locale = QLocale::system().name().section('_', 0, 0);
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));

    Fenetre fenetre;
    fenetre.show();

    return app.exec();
}
