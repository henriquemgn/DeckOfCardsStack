#include<iostream>
#include<cstdlib>
#include "stackstruct.cpp"

void initialize(Deck&);       // Inicia o deque de cartas
void print_deck(const Deck&); //printa o deque
void print_card(const Card&); // printa carta, chamado pela função printar deque
void shuffle(Deck&, Stack&);  // embaralha o deque


void initialize(Deck& deck){

    Card card;
    for (int suit = 0; suit < card.num_suits;suit++)
        {
        for (int rank = 0; rank<card.num_ranks;rank++)
            {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
            }
        }

};

void print_deck(const Deck& deck)
{
    for (Card c : deck.cards)
    {
        print_card(c);
    }
}

void print_card(const Card& card)
{
    std::cout << "Rank = " << int(card.rank) <<std::endl;
    std::cout << "  " << "Suit = " << int(card.suit) << " ";
}

void shuffle(Deck& deck, Stack& stack)
{
    Deck shuffled;
    Stack shuffled_stack;

    while (!deck.cards.empty())
    {
        size_t rand_index = rand() % deck.cards.size();
        shuffled.cards.push_back(deck.cards[rand_index]);
        pushstack(&shuffled_stack, deck.cards[rand_index]);

        deck.cards.erase(deck.cards.begin() + rand_index);

    }
    deck = shuffled;
};
