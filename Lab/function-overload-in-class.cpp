// Warning ! This code is incomplete!
#include<iostream>

using namespace std;

class Cube
{
    int a;
    double b;
    char c;
};

void show(int a,double b,char c)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
void show(double a, int b)
{
    cout<<a<<" "<<b<<endl;
}
string show(string b)
{
    return b;
}
int main()
{
    Cube ob;
    ob.setValues(4);
    ob.setValues(3,7,6);
    ob.setValues(8,9);
    ob.getValues()

}
