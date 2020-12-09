#ifndef HEALTH_H
#define HEALTH_H

#include <QObject>
#include <QTimer>
class health : public QObject
{   Q_OBJECT



public:
    health();
    void resetiemp();
    int gettiemp();
    void perderhealth();
    int getvidas();
    int tiempo=0;
    int vidas=3;


signals:

public slots:
    void sumartime();
    void iniciar();
};

#endif // HEALTH_H
