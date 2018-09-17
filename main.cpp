//appelfonctions
#include<iostream>
#include "person.h"
using namespace std;

int main(){
    person p{"mael", "brule", 12};
    cout << "There are " << nb_char_firstname(p) << " in person p's firstname." << endl;
}


