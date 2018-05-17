#include <iostream>
using namespace std;
int i=0;
int j=1;
int t=1;

void f(int a[], int size){
if(t<size){
    if(i<size-1){
    if(a[i]<a[i+j]){
        ::i=i+j;
        ::j=1;
        f(a, size);
    }else{
        ::j++;
        f(a, size);
    }
    }else{
        int zwischen= a[size-t];
        a[size-t]=a[i];
        a[i]=zwischen;
        ::t++;    
    }
} 
}

int main(){
    int c;
    char variable;
    cout << "Wie lang ist das Array? ";
    cin >> c;
    int a[c];
    for(int i=0; i<c; i++){
        cout << "Im Array soll stehen: ";
        cin >>variable;
        a[i]=variable;
    }
    f(a, c);
    for (int i = 0; i < c-1; i++){
    cout << a[i];
    }

    return 0;
}