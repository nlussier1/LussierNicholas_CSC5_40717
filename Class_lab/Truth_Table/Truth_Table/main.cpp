/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Create a Truth Table
 * Created on January 13, 2015, 9:15 AM
 */
//system libraries
#include <iostream>
//user libraries
//Global libraries
//function prototypes
using namespace std;
 
 //execution begins here
int main(int argc, char** argv) {
    //declare 2 boolean variables
    bool X,Y;
    //output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X%%!Y !(X&&Y) !X||!Y"<<endl;
    //fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F');
    cout<<" ";
    cout<<(Y?'T':'F');
    cout<<"  ";
    cout<<(!X?'T':'F');
    cout<<"  ";
    cout<<(!Y?'T':'F');
    cout<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //fill out second line
    X=true;Y=false;
        cout<<(X?'T':'F');
    cout<<" ";
    cout<<(Y?'T':'F');
    cout<<"  ";
    cout<<(!X?'T':'F');
    cout<<"  ";
    cout<<(!Y?'T':'F');
    cout<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"\n";
    X=false;Y=true;
    cout<<(X?'T':'F');
    cout<<" ";
    cout<<(Y?'T':'F');
    cout<<"  ";
    cout<<(!X?'T':'F');
    cout<<"  ";
    cout<<(!Y?'T':'F');
    cout<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"\n";
    X=false;Y=false;
    cout<<(X?'T':'F');
    cout<<" ";
    cout<<(Y?'T':'F');
    cout<<"  ";
    cout<<(!X?'T':'F');
    cout<<"  ";
    cout<<(!Y?'T':'F');
    cout<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"\n";
    
//test swap
    int a=2, b=3;
   cout<<"----------------------------------------------\n";
   cout<<"a="<<a<<" "<<"b="<<b<<endl;
    a=a^b;
   cout<<"After swap\n";
    b=a^b;
   cout<<"b="<<b<<endl;
    a=a^b;
   cout<<"a="<<a<<endl;
   cout<<"-----------------------------------------------\n";
//sayonara
    return 0;
}

