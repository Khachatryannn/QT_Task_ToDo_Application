#include "todo.h"


ToDo::ToDo(QWidget *parent)
    : QWidget(parent)
{

    taskInput = new QLineEdit(this);
    taskList = new QListWidget(this);
    addButton = new QPushButton("Click to Add", this);
    removeButton = new QPushButton("Click to Remove", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(taskInput);
    layout->addWidget(taskList);
    layout->addWidget(addButton);
    layout->addWidget(removeButton);

    connect(addButton, &QPushButton::clicked, this, &ToDo::addTask);
    connect(removeButton, &QPushButton::clicked, this, &ToDo::removeTask);

    QFont Font1 = addButton->font();
    Font1.setPointSize(25);
    addButton->setFont(Font1);
    addButton->setStyleSheet("color: yellow");
    addButton->show();

    QFont Font2 = removeButton->font();
    Font2.setPointSize(25);
    removeButton->setFont(Font2);
    removeButton->setStyleSheet("color: yellow");
    removeButton->show();



}

void ToDo::addTask()
{
    QString task = taskInput->text();
    if (!task.isEmpty()) {
        taskList->addItem(task);
        taskInput->clear();
    }
}

void ToDo::removeTask()
{
    qDeleteAll(taskList->selectedItems());
}
