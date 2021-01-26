#pragma once

struct Deck
{
    int m_index[52];
    int m_value[13] = { 1,2,3,4,5,6,7,8,9,10,10,10,10};
    char m_name[13][6] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    char m_suit[4][9] = { "Hearts", "Clubs", "Spades", "Diamonds" };

};