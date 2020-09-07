#include <iostream>
#include <array>
#include <ctime>
#include <random>

enum CardRank
{
    CARD_2,
    CARD_3,
    CARD_4,
    CARD_5,
    CARD_6,
    CARD_7,
    CARD_8,
    CARD_9,
    CARD_10,
    CARD_JACK,
    CARD_QUEEN,
    CARD_KING,
    CARD_ACE,
    MAX_RANKS
};

enum CardSuit
{
    SUIT_CLUB,
    SUIT_DIAMOND,
    SUIT_HEART,
    SUIT_SPADE,
    MAX_SUITS
};

struct Card
{
    CardRank rank;
    CardSuit suit;
};

void printCard(const Card &card)
{
    switch (card.rank)
	{
		case CARD_2:		std::cout << '2'; break;
		case CARD_3:		std::cout << '3'; break;
		case CARD_4:		std::cout << '4'; break;
		case CARD_5:		std::cout << '5'; break;
		case CARD_6:		std::cout << '6'; break;
		case CARD_7:		std::cout << '7'; break;
		case CARD_8:		std::cout << '8'; break;
		case CARD_9:		std::cout << '9'; break;
		case CARD_10:		std::cout << 'T'; break;
		case CARD_JACK:		std::cout << 'J'; break;
		case CARD_QUEEN:	std::cout << 'Q'; break;
		case CARD_KING:		std::cout << 'K'; break;
		case CARD_ACE:		std::cout << 'A'; break;
	}

	switch (card.suit)
	{
		case SUIT_CLUB:		std::cout << 'C'; break;
		case SUIT_DIAMOND:	std::cout << 'D'; break;
		case SUIT_HEART:	std::cout << 'H'; break;
		case SUIT_SPADE:	std::cout << 'S'; break;
	}
}

void printDeck(const std::array<Card, 52> &deck)
{
    for(const auto &card : deck)
    {
        printCard(card);
        std::cout << ' ';
    }
    std::cout << '\n';
}

void swapCard(Card &card1, Card &card2)
{
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card, 52> &deck)
{
	for (int index = 0; index < 52; ++index)
	{
		int swapIndex = getRandomNumber(0, 51);
		swapCard(deck[index], deck[swapIndex]);
	}
}

int getCardValue(const Card &card)
{
	switch (card.rank)
	{
	case CARD_2:		return 2;
	case CARD_3:		return 3;
	case CARD_4:		return 4;
	case CARD_5:		return 5;
	case CARD_6:		return 6;
	case CARD_7:		return 7;
	case CARD_8:		return 8;
	case CARD_9:		return 9;
	case CARD_10:		return 10;
	case CARD_JACK:		return 10;
	case CARD_QUEEN:	return 10;
	case CARD_KING:		return 10;
	case CARD_ACE:		return 11;
	}
}

char getPlayerChoice()
{
	std::cout << "(h) to hit, or (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'h' && choice != 's');

	return choice;
}

bool playBlackjack(const std::array<Card, 52> deck)
{
	const Card *cardPtr = &deck[0];

	int playerTotal = 0;
	int dealerTotal = 0;

	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerTotal << '\n';

	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);

	while (1)
	{
		std::cout << "You have: " << playerTotal << '\n';
		char choice = getPlayerChoice();
		if (choice == 's')
			break;

		playerTotal += getCardValue(*cardPtr++);

		if (playerTotal > 21)
			return false;
	}
	while (dealerTotal < 17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerTotal << '\n';
	}
	if (dealerTotal > 21)
		return true;

	return (playerTotal > dealerTotal);
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    rand();

	std::array<Card, 52> deck;

	int card = 0;
	for (int suit = 0; suit < MAX_SUITS; ++suit)
    {
        for (int rank = 0; rank < MAX_RANKS; ++rank)
        {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].rank = static_cast<CardRank>(rank);
            ++card;
        }
    }

	shuffleDeck(deck);

	if (playBlackjack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";

	return 0;
}


