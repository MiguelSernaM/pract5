#ifndef MUROS_H
#define MUROS_H
#include <QGraphicsItem>
#include <QPainter>



class muros: public QGraphicsItem
{
public:
    int w,h;
    int posx,posy;
    muros(int w_, int h_, int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr);

};

#endif // MUROS_H
