#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QProcess>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    system("gnome-terminal -- bash -c 'source /opt/ros/kinetic/setup.bash ;roscore'&");

}

void MainWindow::on_pushButton_2_clicked()
{
    system("gnome-terminal -- bash -c 'source /opt/ros/kinetic/setup.bash ;rosrun turtlesim turtlesim_node'&");
    system("gnome-terminal -- bash -c 'source /opt/ros/kinetic/setup.bash ;rosrun turtlesim turtle_teleop_key'&");
}

void MainWindow::on_pushButton_3_clicked()
{
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch send_goal_robot01 clean02.launch limited:=true'&");
}
