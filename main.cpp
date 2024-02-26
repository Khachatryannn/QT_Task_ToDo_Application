#include <QApplication>
#include "todo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToDo todo;
    todo.show();
    return a.exec();
}
