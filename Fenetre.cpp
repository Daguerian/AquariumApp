#include "Fenetre.h"
#include <QMediaPlayer>
#include <QVideoWidget>
//#include <QNetworkRequest>


Fenetre::Fenetre()
{
    setFixedSize(500, 600); //set la taille de la fenetre en pixels
    setWindowTitle("Aquarium App");


}

Fenetre::~Fenetre()
{
    delete mediaPlayer;
    delete mediaContent;
}
