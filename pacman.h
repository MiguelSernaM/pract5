#ifndef PACMAN_H
#define PACMAN_H

#include <QMainWindow>
#include "bolita.h"
#include "muros.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "moneda.h"
#include <QTimer>
#include <health.h>
QT_BEGIN_NAMESPACE
namespace Ui { class pacman; }
QT_END_NAMESPACE

class pacman : public QMainWindow
{
    Q_OBJECT

public:
    pacman(QWidget *parent = nullptr);
    QList<moneda *> monedas;
    QList<moneda *> monedas2;
    QList<moneda *> monedas3;
    ~pacman();


private:
    health *viditas;
    int valor;
    Ui::pacman *ui;
    int mundo= 1;
    int mostrar=0;
    bolita *personaje;
    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    QGraphicsScene *scene3;
    void keyPressEvent(QKeyEvent *evento);
    muros *pared1;
    muros *pared2;
    muros *pared3;
    muros *pared4;
    muros *pared5;
    muros *pared6;
    muros *pared7;
    muros *pared8;
    muros *pared9;
    muros *pared10;
    muros *pared11;
    muros *pared12;
    muros *pared13;
    muros *pared14;
    muros *pared15;
    muros *pared16;
    muros *pared17;
    muros *pared18;
    muros *pared19;
    muros *pared20;
    muros *pared21;
    muros *pared22;
    muros *pared23;
    muros *pared24;
    muros *pared25;
    muros *pared26;
    muros *pared27;
    muros *pared28;
    muros *pared29;
    muros *pared30;
    muros *pared31;
    muros *pared32;
    muros *pared33;
    muros *pared34;
    muros *pared35;
    muros *pared36;
    muros *pared37;
    muros *pared38;
    muros *pared39;
    muros *pared40;
    muros *pared41;
    muros *pared42;
    muros *pared43;
    QList<moneda *> eliminarMonedas(QList<moneda *> monedas,int pos);




};
#endif // PACMAN_H
