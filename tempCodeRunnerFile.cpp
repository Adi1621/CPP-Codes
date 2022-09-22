#include<iostream>
using namespace std;
int main() {
    char a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    // if(a=='a'|| a=='b'|| a=='c'|| a=='d'|| a=='e'|| a=='f'|| a=='g'|| a=='f'|| a=='h'|| a=='i'|| a=='j'|| a=='k'|| a=='l'|| a=='m'|| a=='n'|| a=='o'|| a=='p'|| a=='q'|| a=='r'|| a=='s'|| a=='t'|| a=='u'|| a=='v'|| a=='w'|| a=='x'|| a=='y'|| a=='z') {
    //     cout<<"this is lower case"<<endl;
    // }
    // else if(a=='A'|| a=='B'|| a=='C'|| a=='D'|| a=='E'|| a=='F'|| a=='G'|| a=='H'|| a=='I'|| a=='J'|| a=='K'|| a=='L'|| a=='M'|| a=='N'|| a=='O'|| a=='P'|| a=='Q'|| a=='R'|| a=='S'|| a=='T'|| a=='U'|| a=='V'|| a=='W'|| a=='X'|| a=='Y'|| a=='Z') {
    //     cout<<"THIS IS UPPER CASE"<<endl;
    // }
    // else {
    //     cout<<"This is a number"<<endl;
    // }
    if(a<=90&&a>=60) {
        cout<<"THIS IS UPPPER CASE"<<endl;
    }
    else if(a<=122&&a>=97) {
        cout<<"this is lower case"<<endl;
    }
    else {
        cout<<"this is a number"<<endl;
    }

}