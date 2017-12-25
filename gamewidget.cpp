#include "gamewidget.h"
#include <QPainter>
#include <QImage>

gamewidget::gamewidget(QWidget *parent)
: QOpenGLWidget(parent)
{
    key_map = 0;
    image = new QImage((uchar*)data, SCREEN_WIDTH, SCREEN_HEIGHT, QImage::Format_ARGB32);
}

void gamewidget::clearBackground(int c)
{
    pal rgb = pale[c];
    image->fill(QColor(rgb.r,rgb.g,rgb.b,255));
}

void gamewidget::addPoint(int x, int y, int c)
{
    if(x<0||x>=SCREEN_HEIGHT || y<0 || y>=SCREEN_WIDTH)
        return;
    pal rgb = pale[c];
    image->setPixelColor(x,y, QColor(rgb.r,rgb.g,rgb.b));
}

void gamewidget::display()
{
    update();
}

void gamewidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);

    painter.drawImage(0,0,*image);

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
