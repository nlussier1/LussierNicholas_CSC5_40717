/* Savitch 9thEd Chapter 1, Prog Proj 1
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purpose: To create my own two integer addition program
 * Created on January 6, 2015, 9:48 PM
 */

//System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float zkills, zass;
    cout<<"Rick is a zombie hunter.\n";
    cout<<"He has been keeping track of";
    cout<<"the zombies he kills, and the assists he contributes to.\n";
    cout<<"Rick has killed how many zombies today?\n";
    cin>>zkills;
    if (zkills<5 and zkills>-1)
        cout<<"Rick could do better\n";
    if (zkills>4 and zkills<11)
        cout<<"Rick has done well today!\n";
    if (zkills>10)
        cout<<"Are you sure Rick is not a Zombie Killer God?\n";
    if (zkills<0)
        cout<<"I'm sorry, I don't understand how he could kill less than 0\n";    
    cout<<"But Rick isn't alone!\n";
    cout<<"He helps others as well\n";
    cout<<"How many did he assist with today?\n";
    cin>>zass;
    cout<<"Total Rick has killed ";
            cout<<zass+zkills;
    cout<<" zombies\n";  
    if (zass+zkills>15 and zass+zkills<50)
        cout<<"Rick is a veteran zombie slayer!";
    if (zass+zkills<10)
        cout<<"Rick will not survive the Zombie World";
    if (zass+zkills>50)
        cout<<"All hail Rick, slayer of zombies, the walking undead genocide";
                
                  
    }


