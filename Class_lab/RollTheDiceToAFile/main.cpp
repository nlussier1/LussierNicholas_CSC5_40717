/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purpose: illustrate file i/o and random numbers
 * Created on January 12, 2015, 10:07 AM
 */
//system libraries
#include <cstdlib>//random rand(), srand()
#include <iostream>//Keyboard/Monitor I/o
#include <fstream>//file I/O
#include <ctime>//time functions
using namespace std;
//user libraries
//global functions
//prototype functions

//execution begins here
int main(int argc, char** argv) {
//set random number seed
    srand(static_cast<unsigned int>(time(0)));
//declare file object
    ofstream output;
//open file
    output.open("RollTheDice.dat");
//declare 5 dice
    unsigned short die1, die2, die3, die4, die5;
//set the value of die
    die1=rand()%6+1;
    die3=rand()%6+1;
    die2=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
//output results
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3<<" ";
    cout<<die4<<" "<<die5<<endl;
//output to file
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3<<" ";
    output<<die4<<" "<<die5<<endl;
//output
//close now
    output.close();
    return 0;
}

