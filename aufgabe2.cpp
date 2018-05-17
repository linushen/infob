#include <iostream>
using namespace std;
int i=0;
int j=1;
int t=0;

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
        int zwischen= a[size-(t+1)];
        a[size-(t+1)]=a[i];
        a[i]=zwischen;
        ::i=0;
        ::j=1;
        ::t++;
        f(a, size-t);    
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
    for (int i = 0; i < c-1; i++){
    cout << a[i]<<endl;
    }
    f(a, c);
    for (int i = 0; i < c-1; i++){
    cout << a[i];
    }

    return 0;
}