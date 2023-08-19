#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int guess,num,attempts=0;
    srand(time(0));
    num=rand()%100+1;
    do
    {
        cout<<"Guess the number between 1 to 100\n";
        cin>>guess;
        attempts++;
        if(guess>num)
        cout<<"Your guess is too high\n";
        else if(guess<num)
        cout<<"Your guess is too low\n";
        else 
        cout<<"CONGRATULATIONS!!You got it right in "<<attempts<<" guesses.\n";
    }
    while(guess!=num);
    return 0;
}