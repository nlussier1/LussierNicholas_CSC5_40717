/* Savtich 9th Edition, Chapter 1, Program Project 3
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purpose: Coin Calculation
 * Created on January 8, 2015, 11:05 AM
 */
//system libraries
#include <iostream>
//user libraries
//global constants
float VALUEQTR=.25;
float VALUEDIM=.10;
float VALUENIC=.05;
//function prototype
using namespace std;

//execution begins here
int main(int argc, char** argv) {
//declare variables
    float qtr;
    float totqtr=VALUEQTR*qtr;
    float dime;
    float totdime=VALUEDIM*dime;
    float nickl;
    float totnic=VALUENIC*nickl;
    float totcoin=totqtr+totdime+totnic;
cout<<"Hello! My Name is Max\n";
cout<<"I am a banker who specializes in coin values\n";
cout<<"Please enter the amount of Quarters you have please?\n";
    cin>>qtr;
    cout<<"I see that you have "<<qtr<<"quarters!\n";
    cout<<"That is ";
    totqtr=qtr*VALUEQTR;
    cout<<totqtr<<"$ in quarters\n";
cout<<"Now, how many dimes do you have?\n";
cin>>dime;
totdime=dime*VALUEDIM;
cout<<"I see that you have "<<totdime<<"$ in dimes!\n";
cout<<"And finally how many nickels do you have?\n";
cin>>nickl;
totnic=nickl*VALUENIC;
cout<<"You have "<<totnic<<"$ in nickels.\n";
totcoin=totqtr+totdime+totnic;
cout<<"Total you have "<<totcoin<<"$!\n";
cout<<"Thank you for participating!\n";
    return 0;
}
//Sayonaara
