#include "gamewidget.h"
#include <QPainter>

gamewidget::gamewidget(QWidget *parent)
: QOpenGLWidget(parent)
{
    key_map = 0;
}

void gamewidget::clearBackground(int c)
{
    background_color = c;
}

void gamewidget::addPoint(int x, int y, int c)
{
    map[c][map_size[c]].setX( x );
    map[c][map_size[c]++].setY( y );
}

void gamewidget::display()
{
    update();
}

void gamewidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);

    pal color = pale[background_color];
    painter.fillRect(this->rect(), QColor(color.r, color.g, color.b));

    for(int i=0; i<0; ++i)
    {
        pal color = pale[i];
        painter.setPen(QColor(color.r, color.g, color.b));
        painter.drawPoints(map[i], map_size[i]);
    }

    painter.end();
}

void gamewidget::setFlag(Flags flag)
{
    key_map |= flag;
}

void gamewidget::removeFlag(Flags flag)
{
    key_map &= ~flag;
}

bool gamewidget::testFlag(Flags flag)
{
    return key_map&flag;
}
