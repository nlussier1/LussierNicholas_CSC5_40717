/* Purpose: To add the sum of two items, in this situation, coffee addiction
 * File:   main.cpp
 * Author: Nick_Lussier
 * For Savitch 9th Edition, Chapter 1, Program Project 1
 * Created on January 8, 2015, 7:27 AM
 */
//system libraries 
#include <iostream>

//user libraries

//global constants

//prototype functions


//execution begins here
using namespace std;
int main(int argc, char** argv)
{
//variables defined
    short homecof, starbuk, coaddi, tcaff;
    int pike=330;
    coaddi=homecof+starbuk;
    tcaff=coaddi*pike;

//program write
    cout<<"Nicholas' is addicted to coffee.\n";
    cout<<"His caffeine intake has grown out of control\n";
    cout<<"He creates a program to give an idea\n";
    cout<<"of just how much he is drinking?\n";
    cout<<"He drinks Pike's Roast which contains 330 mG of caffeine a day\n";
    cout<<"Tell me how much he drank before he left this morning\n";
    cin>>homecof;
    
        if (homecof<=10 and homecof>=0)
            cout<<"Nicholas is satisfied by his consumption and leaves for school.\n";
        else if (homecof>=10 and cin<=99)
            cout<<"Nick feels dazed, but believes he can sense the color green\n";
        else if (homecof<0)
            cout<<"I'm not sure you understand how this works...\n"<<"We'll fix it for you\n";
            if (homecof<0)
                cout<<"Nick drank "<<-1*homecof<<" cups of coffee"<<endl;
    cout<<"But that is not all Nick";
    cout<<"While out around town, Nick consumes more coffee\n";
    cout<<"How many cups do you think he drinks?\n";
    cin>>starbuk;
    
            
    
    
if (homecof>99 or starbuk>99 or coaddi>99)
    cout<<"Time blurs into nothing, Nick becomes one with time\n";
        if (homecof>99 or starbuk>100 or coaddi>100) 
            exit (0);
    return 0;
}


