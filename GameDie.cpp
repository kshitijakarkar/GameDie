#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
   srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
   int i=rand()%7;
   if(i!=0)
      cout<<" Your number is :"<<i<<endl;
}
