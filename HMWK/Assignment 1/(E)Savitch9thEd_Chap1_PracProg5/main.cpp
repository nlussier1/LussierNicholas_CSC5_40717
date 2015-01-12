/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Creating a simple program calculating area
 * Created on January 11, 2015, 4:33 PM
 */
//system libraries 
#include <iostream>
//user libraries
//global constants
//function prototypes

//execution begins here
using namespace std;

int main(int argc, char** argv) {
    float width, length, area=width*length;//defined variables w*l=a
    cout<<"Imagine you are building a planter\n";//created friendly user situation
    cout<<"For the purpose of your build, this program will help you calculate";
    cout<<"the area of your construct.\n";
    cout<<"To start with we'll need the feet of width that your construction will require\n";
    cin>>width;//user input one
    cout<<"Thank you!\n";
    cout<<"Finally we'll need the length of the area you plan to work with\n";
    cin>>length;
    cout<<"You're area is ";
            area=width*length;//area calculation
            cout<<area;
            cout<<"ft";//output in feet
            

    return 0;
}

