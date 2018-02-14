#include<iostream>

using namespace std;

void show(int a,double b)
{
    cout<<a<<" "<<b<<endl;
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
    show(0,5.9);
    show(0.0,5);
    cout<<show("Nothing ('_-)")<<endl;

}
