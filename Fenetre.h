#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QMediaPlayer>


class Fenetre: public QWidget
{
public:
    Fenetre();
    ~Fenetre();

public slots:   //methodes SLOTS

private:
    QMediaPlayer *mediaPlayer;
    QMediaContent *mediaContent;
//    QVideoWidget *videoWidget;

};

#endif // FENETRE_H
