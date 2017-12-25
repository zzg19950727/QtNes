#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileInfo>
#include <QKeyEvent>
#include <QList>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    void init_UI();

    void init_slot();

    void setApplicationPath(QString path);

    void changeDir(QString path);

    void show_list();

    void keyPressEvent(QKeyEvent* event);

    void keyReleaseEvent(QKeyEvent* event);

private slots:
    void pushbutton_up_pressed();

    void pushbutton_down_pressed();

    void pushbutton_left_pressed();

    void pushbutton_right_pressed();

    void pushbutton_A_pressed();

    void pushbutton_B_pressed();

    void pushbutton_C_pressed();

    void pushbutton_D_pressed();

    void pushbutton_up_released();

    void pushbutton_down_released();

    void pushbutton_left_released();

    void pushbutton_right_released();

    void pushbutton_A_released();

    void pushbutton_B_released();

    void pushbutton_C_released();

    void pushbutton_D_released();

    void play();

private:
    Ui::MainWindow *ui;

    QList<QFileInfo> list;

    int key_map;

    QTimer timer;
};

#endif // MAINWINDOW_H
