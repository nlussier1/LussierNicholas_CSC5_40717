/* Savitch 9th Edition Homework, Ch.1 ProgProj 1: Addition Simple
 * File:   main.cpp
 * Author: Nick_Lussier
 * Class: Homework
 * Created on January 8, 2015, 9:42 AM
 */
//system libraries
#include <iostream>
//user libraries
//global constants
//prototype functions

//execution begins here
using namespace std;

int main(int argc, char** argv) {
    //declaration of variables
    short cofhom;//coffee at home
    short cofout;//coffee while out
    short coftot;//total of coffee consumption
    //activation here, user input required
    cout<<"Jeff is a coffee addict\n";
    cout<<"Help him figure out home much coffee he drinks?\n";
    cout<<"How much did he drink this morning while home?\n";
    cin>>cofhom;
    if (cofhom<0)
        cofhom=cofhom*-1;
    cout<<"Jeff should probably cut down as he keeps drinking coffee throughout the day\n";
    cout<<"How much coffee did Jeff drink throughout the day\n";
    cin>>cofout;//end of user interaction
    if (cofout<0)
        cofout=cofout*-1; 
    cout<<"Oh so Jeff drank "<<cofout<<" while out!\n";   
        coftot=cofout+cofhom;//function for coftot
    cout<<"Total Jeff drank "<<coftot;
    cout<<" today!\n";
    cout<<"Thank you for participating";
    //sayonara
    return 0;
}

