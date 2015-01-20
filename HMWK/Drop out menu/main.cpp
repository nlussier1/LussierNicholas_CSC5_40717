/* 
 * File:   main.cpp
 * Author: Nick_Lussier
 * Create a Drop down menu for projects
 * Created on January 15, 2015, 7:55 AM
 */
//system libraries
#include <iostream>
#include <cstring>
using namespace std;
//user libraries
//global constants
//function prototypes

//execution begins here
int main(int argc, char** argv) {
    cout<<"Hello and Thank you for using my menu program to test my projects\n";
    cout<<"I hope this program runs well but if something should not function as\n";
    cout<<"anticipated I have included the individual programs in a seperate file\n";
    cout<<endl<<"To begin, please select a program from the menu.\n";
    cout<<endl<<cout<<"Program 1 is a Madlib from Savitch, 9th Edition. Chapter 2, problem 4.\n";
    cout<<"Program 2 is a square root problem from Savitch, 9th Edition. Chapter 2, Problem 2.\n";
    cout<<"Please make a selection\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{ 
            string instruc, food, color, adj, animal, name;
            int number;
            char temp;
            //requesting user input
            cout<<"Hello! Let's play with some Madlibs.\n";
            cout<<"I'm going to ask you a series of requests without the context";
            cout<<" and I would really like your cooperation\n";
            cout<<"First of all, give us the name of your instructor\n";
            cin>>instruc;
            cout<<"Thanks. Now I need a food."<<endl;
            cin>>food;
            cout<<"Now color\n";
            cin>>color;
            cout<<"Adjective\n";
            cin>>adj;
            cout<<"Animal\n";
            cin>>animal;
            cout<<"Your name please!\n";
            cin>>name;
            cout<<"Finally a number from 100 to 120 please!\n";
            cin>>number;
                if (number>=100 && number<=120)
                    {
                    cout<<"Thanks! Now let's tell a story!\n"<<"\n"<<"\n";
                    }
                else while (number<100 || number>120)
                    {   
                    cout<<"I'm sorry, those numbers weren't valid, please re-enter them.\n";
                        cin>>number;
                        }
            cout<<"Dear Instructor "<<instruc<<"\n"<<"\n";
            cout<<"I am sorry that I am unable to ";
            cout<<"turn in my homework at this time\n";
            cout<<"First, I ate rotten "<<food<<", which made me turn ";
            cout<<color<<" and extremely ill.\n"<<"I came down with a fever of ";
            cout<<number<<". Next, my "<<adj<<" pet "<<animal<<" must have smelled"; 
            cout<<" the remains of the "<<food<<" on my homework, because she ate it.\n";
            cout<<"I am currently rewriting my homework and hope you will accept it late\n";
            cout<<"\n"<<"Sincerely, \n"<<name<<endl;

        }
    }
    case 2:{
    return 0;
}

