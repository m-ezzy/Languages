
#include <iostream>

using namespace std;

int main(){
    int a;
    
    enum colors{red=10,green,blue,yellow,purple=100,pink,black,white}c1;

    c1 = red;

    enum colors c2;
    c2 = green;

    colors c3,c4;
    c3 = black;
    c4 = white;
    
    enum colors c5 = blue; //i like this type of declaration and initialization

    //cout<<colors;
    cout<<endl<<red;
    cout<<endl<<green;
    cout<<endl<<blue;

    cout<<endl<<c1;
    cout<<endl<<c2;
    cout<<endl<<c3;
    cout<<endl<<c4;
    cout<<endl<<c5;

    cin>>a;
    return 0;
}
