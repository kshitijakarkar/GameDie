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
int GameDie::roll()
{
   int face;
   cout<<"Enter number of faces between 4 and 20 :";
   cin>>face;
   int i=rand()%face + 1;
   if(i!=0)
      return i;
}
