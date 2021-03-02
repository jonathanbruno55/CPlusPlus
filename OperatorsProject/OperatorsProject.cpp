#include <iostream>
using namespace std;

int main()
{
    //+,-,*,/,%

    cout << 5 + 2 << endl; //7
    cout << 5 / 2 << endl; //2
    cout << 5.0 / 2.0 << endl; //2.5
    cout << 5 % 2 << endl; //1

    //++,--
    int counter = 7;
    counter++;
    cout << counter << endl; //8
    counter--;
    cout << counter << endl; //7

    int counter2 = 7;
    cout << counter2++ << endl; //7
    cout << ++counter2 << endl; //9
    cout << counter2-- << endl; //9
    cout << counter2 << endl; //8

    system("cls"); //clears console

    //<,>,<=,>=,==,!=
    //int a = 5, b = 5;
    int a = 5, b = 8;
    cout << (a > b) << endl; //false
    cout << (a <= b) << endl; //true
    cout << (a == b) << endl; //true
    cout << (a != b) << endl; //false

    system("cls"); //clears console

    //&&,||,!
    //int a = 5, b = 8;
    //cout << (a == 5 && b == 5) << endl; //false
    //cout << (a == 5 || b == 5) << endl; //true
    //cout << !(a == 5 || b == 5) << endl; //false

    cout << (a == 5 && b == 5+3) << endl; //true
    
    system("cls"); //clears console

    //=,+=,-=,*=,/=,%=
    int x = 5;
    //x += 7;
    //x = x + 7;
    //cout << x << endl; //12
    
    x -= 7;
    //x = x - 7;
    cout << x << endl; //-2

    system("pause>0");
}
