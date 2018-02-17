#include<iostream>
using namespace std;

class Hublu
{
    int a,b,c;
public:
    void insertValues(int m, int n)
    {
        a=m;
        b=n;
    }
    void insertValues(int k)
    {
        b=k;
    }
    void insertValues(int m, int r, int d)
    {
        a=m;
        b=r;
        c=d;
    }
    void showValues()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void showValues(string n)
    {
        cout<<"blah blah blah "<<n<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

};

int main()
{
    Hublu objectOne;
    objectOne.insertValues(5,6);
    objectOne.insertValues(6,7,8);
    objectOne.insertValues(3);
    objectOne.insertValues(2,1);

    objectOne.showValues();
    objectOne.showValues("- what is this!");
}
