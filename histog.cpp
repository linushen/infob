#include <iostream>
using namespace std;

struct zaehler{
    char buchstabe;
    int wieoft;
};

int main(){
    int groesse_abfrage;
    cout << "Wie gross ist dein text?",
    cin >> groesse_abfrage;

    const int groesse = groesse_abfrage + 1;
    char text[6];
    cin >> text;
    int o=0;
    int d=0;
    zaehler a;
    char e;
    zaehler liste[25];
    zaehler c;

    for(int i=0; i<26; i++){
        char b=97;
        c.buchstabe = b+i;
        c.wieoft = 0;
        liste[i]=c;    
    }

    while (d<groesse-1){        
        e=text[d];
        while (true){
            a = liste[o];
            if(e==a.buchstabe){
                liste[o].wieoft=liste[o].wieoft+1;
                o=0;
                break;            
            }else if(o==26){
                cout << "Fehler " << e << " kann nicht gezaehlt werden" <<endl;
                o=0;
                break;
            }
            o++;
        }
        d++;
    }
    
    for(int i=0; i<26; i++){
        a.buchstabe = liste[i].buchstabe;
        a.wieoft =  liste[i].wieoft;
        cout << a.buchstabe<< " " << a.wieoft <<endl;
    }

    

    return 0;
}

// Tests

// Linus@Linus-Pc ~/code/infob
// $ g++ -Wall -Wextra -Werror -pedantic -std=c++14 histog.cpp

// Linus@Linus-Pc ~/code/infob
// $ ./a.exe
// Wie gross ist dein text?5
// hallo
// a 1
// b 0
// c 0
// d 0
// e 0
// f 0
// g 0
// h 1
// i 0
// j 0
// k 0
// l 2
// m 0
// n 0
// o 1
// p 0
// q 0
// r 0
// s 0
// t 0
// u 0
// v 0
// w 0
// x 0
// y 0
// z 0