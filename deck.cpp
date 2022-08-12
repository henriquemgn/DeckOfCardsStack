#include <vector>
#include <iostream>
using std::vector;
using std::string;

enum class Suit
{
    PAUS,
    OUROS,
    COPAS,
    ESPADA,
};

enum class Rank
{
    AS = 1,
    DOIS,
    TRES,
    QUATRO,
    CINCO,
    SEIS,
    SETE,
    OITO,
    NOVE,
    DEZ,
    BISPO,
    RAINHA,
    REI,
};

class Card
{
    public:
        Rank rank;
        Suit suit;
        int num_suits = 4;
        int num_ranks = 13;

};

class Deck

{
    public:
        vector<Card> cards;
        string card_back;
        int max_deck_size = 52;
};
