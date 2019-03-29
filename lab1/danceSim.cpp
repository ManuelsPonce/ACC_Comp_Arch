#include <iostream>
#include <string>
#include <sstream>

//Function prototypes
void showCards(int numCards[], int nDancers);
void doStep(int numCards[],int size);

//Globals
const int MAX_DANCERS = 20;

int main()
{
    //variables
    int numSteps = 10;
    int numDancers = 5;
    int numCards = 10;
    int cards[MAX_DANCERS+1] = {0};
    bool stable = false;

    std::cout << numDancers << " dancers will dance " << numSteps << " steps." << std::endl; //displaying dance
    cards[0] = numCards;
    showCards(cards, numDancers);
    
	
	for (int s=0; s<numSteps; s++) //loop through the steps and orginizes cards and displays them
	{
    	doStep(cards, numDancers);
    	showCards(cards, numDancers);
	}
    return 0;
}

void showCards(int numCards[], int nDancers) //Showing content of array
{
    for (int i=0; i<nDancers+1; i++)
    {
        std::cout << numCards[i] << " ";
    }
    std::cout << std::endl;
}

void doStep(int numCards[],int size) //Arranging the cards in the array
{
	for (int i=0; i<size+1; i++)
	{
		if (numCards[i] > numCards[i+1])
		{
			int comStack = numCards[i] + numCards[i+1];
			
			if ( comStack % 2 == 0) //checks if the two stacks added up is even or odd
			{
				numCards[i] = comStack/2;
				numCards[i+1] = comStack/2;
			}
		
			else
			{ 
				numCards[i] = comStack/2;
				numCards[i+1] = (comStack+1)/2;
			}
		}
	}	
}


