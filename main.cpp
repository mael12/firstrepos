//appelfonctions
#include<iostream>
#include "person.h"
using namespace std;

int main(){
    person p;
    cout << "Enter a first name" << endl;
    cin >> p.firstname;
    cout << "There are " << nb_char_firstname(p) << " char(s) in the firstname." << endl;
}
