#include "mainwindow.h"
#include <QDebug>
#include <QApplication>
#include <QCommandLineParser>
#include <cstdio>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCommandLineParser parser;
    QCommandLineOption testOption(QStringList() << "t" << "test", QStringLiteral("Test"));
    parser.addOption(testOption);
    parser.process(a);
    bool isTest = parser.isSet(testOption);
    if(isTest){
        fprintf(stderr,"Test mode\n");
        return 3;
    }else{
        fprintf(stderr,"normal mode\n");
        return 1;
    }
    return 2;
}
