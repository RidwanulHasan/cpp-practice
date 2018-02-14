#include<iostream>
using namespace std;

void show(int a)
{
    cout<<a<<endl;
}
void show(double a)
{
    cout<<a<<endl;
}
string show(string b)
{
    return b;
}
int main()
{
    show(0);
    show(0.0);
    cout<<show("Nothing ('_-)")<<endl;

}
