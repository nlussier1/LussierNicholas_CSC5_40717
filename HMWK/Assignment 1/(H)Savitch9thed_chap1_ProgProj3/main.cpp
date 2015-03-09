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
float VALQTR=.25;//value of quarters
float VALDIM=.10;//dime value
float VALNIC=.05;//nickel value
//function prototype
using namespace std;

//execution begins here
int main(int argc, char** argv) {
//declare variables
    float qtr;//quarters
    float totqtr=VALQTR*qtr;//quarters value total
    float dime;//dimes
    float totdime=VALDIM*dime;//dime value
    float nickl;//nickels
    float totnic=VALNIC*nickl;//nickel values
    float totcoin=totqtr+totdime+totnic;//total amount of money
cout<<"Hello! My Name is Max\n";//user friendly
cout<<"I am a banker who specializes in coin values\n";
cout<<"Please enter the amount of Quarters you have please?\n";
    cin>>qtr;//user input quarter amounts
    cout<<"I see that you have "<<qtr<<" quarters!\n";//reflect amount to user
    cout<<"That is $";
    totqtr=qtr*VALQTR;//determine quater value
    cout<<totqtr<<" in quarters\n";//reflect th amount
cout<<"Now, how many dimes do you have?\n";
cin>>dime;//dime amount
totdime=dime*VALDIM;//dime value
cout<<"I see that you have $"<<totdime<<" in dimes!\n";//reflect amount
cout<<"And finally how many nickels do you have?\n";
cin>>nickl;
totnic=nickl*VALNIC;//nickel value
cout<<"You have $"<<totnic<<" in nickels.\n";
totcoin=totqtr+totdime+totnic;//add calculation
cout<<"Total you have "<<totcoin<<"$!\n";//final user number amount
cout<<"Thank you for participating!\n";//end program
    return 0;
}
//Sayonara
