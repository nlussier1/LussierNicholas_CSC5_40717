/* Savitch Program Project 5, 9th edition, chapter 1
 * File:   main.cpp
 * Author: Nick_Lussier
 * Purpose: Create large c where C is exchangeable
 * Created on January 8, 2015, 10:20 AM
 */
//system libraries
#include <iostream>
//user libraries
//global constants
//function prototype
//execution begins here

using namespace std;
int main(int argc, char** argv) {
//declaration of variables
    char c;
//User need here
    cout<<"Wanna see a magic trick?\n";//Decided to create friendly user input
    cout<<"I can turn this\n";
cout<<"   ccccc\n";
cout<<"  cc   cc\n";
cout<<" cc\n";  
cout<<" cc\n";
cout<<" cc\n";
cout<<"  cc   cc\n"; 
cout<<"   ccccc\n";
cout<<"To whatever you want\n";//gave example of program, image beforehand
cout<<"If you want to try, put in a letter!\n";
cin>>c;
cout<<"   "<<c<<c<<c<<c<<c<<endl;
cout<<"  "<<c<<c<<"   "<<c<<c<<endl;
cout<<" "<<c<<c<<endl;  
cout<<" "<<c<<c<<endl;
cout<<" "<<c<<c<<endl;
cout<<"  "<<c<<c<<"   "<<c<<c<<endl; 
cout<<"   "<<c<<c<<c<<c<<c<<endl;
    return 0;
}

