/*
#include <iostream>
#include <vector>

using namespace std; 

int main() {

  int NumCards;
  int NumCuts;
  vector<int> Deck;
  int temp1;
  int temp2;

  cin >> NumCards >> NumCuts;
    
  for(int i = 0; i < NumCards; i++)
  {
    Deck.push_back(i + 1);
  }

  for(int i = 0; i < NumCuts; i++)
  {
    cin >> temp1 >> temp2;

    for(int j = 0; j < temp2; j++)
    {
      Deck.push_back(Deck[NumCards-(temp1+temp2-1)]);
      Deck.erase(Deck.begin()+(NumCards-(temp1+temp2-1)));
    }

  }

  cout << Deck.back() << endl;

  return 0;

}

*/