#ifndef TODO_H
#define TODO_H

#include <QWidget>
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFont>
#include <QLabel>

class ToDo : public QWidget
{
    Q_OBJECT

public:
    ToDo(QWidget *parent = nullptr);

private slots:
    void addTask();
    void removeTask();

private:
    QLineEdit *taskInput;
    QListWidget *taskList;
    QPushButton *addButton;
    QPushButton *removeButton;
};

#endif

