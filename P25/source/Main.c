#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sh(int Deck[][13]);
void deal(const int Deck[][13], const char *Face[], const char *Suit[]);

int main(void)
{
	const char *suit[4] = { "Hearts","Diamands","Clubs","Spades" };

	const char *face[13] = { "Ace","Deuce","Three","Four","Five","Six",
	"Seven","Eight","Nine","Ten","Jack","Queen","King" };

	int deck[4][13] = { 0 };

	srand(time(0));

	sh(deck);
	deal(deck, face, suit);

	system("pause");
}

void sh(int Deck[][13])
{
	int row, column, card;

	for (card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (Deck[row][column] != 0);
		Deck[row][column] = card;
	}
}

void deal(const int Deck[][13], const char *Face[], const char *Suit[])
{
	int row, column, card;

	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{
				if (Deck[row][column] == card)
				{
					printf("%5s of %-8s%c", Face[column], Suit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}