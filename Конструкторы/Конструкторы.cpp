#include <iostream>
using namespace std;

class Drob
{
private:
    int x;
    int y;
public:
    
    Drob() : x(0), y(0)
    {

    }

    Drob(int a, int b) : x(a), y(b)
    {
        
    }

    void Print()
    {
        cout << "Numerator: " << x << "\tDenominator: " << y << endl;
    }


    void Input(int a, int b)
    {
        x = a;
        y = b;
    }

 
    void Input()
    {
        x = rand() % 20;
        y = rand() % 20;
    }
};

int main()
{
    srand(time(0));


    Drob a(1, 2);
    a.Print();

    Drob b;
    b.Input();
    b.Print();
}
