#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "functionDecks.cpp"

int main(int argc, char *argv[])
{
    Deck deck;
    Stack stack;
    initialize(deck);
    shuffle(deck,stack);
    print_deck(deck);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
