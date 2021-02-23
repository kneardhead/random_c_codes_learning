// to make a C ++ program that will input the age and then give the 5 times the age and tell that is the fathers age. 
// the 20 percent less of the fathers age will be told to be the mothers age. it can be a float/double, accept decimal.

#include<iostream>
#include<cmath>
using namespace std;

int main(){  
    float iage;
    float fage;
    float mage;
//mathematical forumula
    fage = round( 5 * iage );
    mage = round(fage * round(1 - 0.20));
    cout << "Give input of age \n";
    cin >> iage;
    cout << "The age you inputted is: " << iage << "\n";
    cout << "The age of your dad is: " << fage << "\n";
    cout << "The age of your mom is: " << mage << "\n";
}

int round(float x)
{
    float g = (int)(x*100 + .05);
    return (float)g/100;
}