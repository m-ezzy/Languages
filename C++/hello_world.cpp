//here, if we write .h extension after file name then it doesn't work
#include <iostream>

//this line should be included in every program
//if we don't write this line then we have to write std:: befor every cout and cin statement
//if we write this line then std:: is not necessary
using namespace std;

//void main doesn't work. it demands a return type other than void
int main(){

    int a = 10;
    char hw[20] = "hello world!";

    //endl foe new line. same as "\n"
    cout<<endl<<a;
    std::cout<<endl<<"hello world!";
    cout<<endl<<hw;

    return 0;
}
