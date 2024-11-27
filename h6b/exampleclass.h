#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);

    void startToWait();

signals:
    void readyToSay();

public slots:
    void sayHelloSlot();

};

#endif // EXAMPLECLASS_H