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

    // for(int index = 0; index<groesse; index++){
    //     int zaehler_index = ((int)text[index] - 97);
    //     if(zaehler_index < 97 || zaehler_index > 122){
    //         continue;
    //     }
    //     liste[zaehler_index].wieoft += 1;
    // }


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