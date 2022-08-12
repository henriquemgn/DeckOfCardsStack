#ifndef DECK_H
#define DECK_H
#include <vector>
class deck
{
public:
    std::vector<int> numero{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    std::vector<int> naipe{0, 1, 2, 3};
    std::vector<std::vector<int>> carta;
    deck();
};

#endif // DECK_H
