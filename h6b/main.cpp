#include "exampleclass.h"

#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass *objExample=new ExampleClass;
    objExample->startToWait();
    return a.exec();
}
