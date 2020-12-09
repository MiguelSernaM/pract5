#include "health.h"
#include <QTimer>
#include <QDebug>
health::health()
{
    QTimer *sumelo= new QTimer();
    sumelo=new QTimer();
    sumelo->start(700);
    connect(sumelo,SIGNAL(timeout()),this,SLOT(sumartime()));

}

void health::resetiemp()
{
    tiempo=0;

}

int health::gettiemp()
{
    return tiempo;
}

void health::perderhealth()
{
 vidas-=1;
}

int health::getvidas()
{
    return vidas;
}

void health::sumartime()
{
    tiempo+=1;
    if(tiempo >= 60){
       perderhealth();
       tiempo=0;
    }
}

void health::iniciar()
{
}
