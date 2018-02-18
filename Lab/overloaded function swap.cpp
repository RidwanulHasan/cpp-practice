#include<iostream>

using namespace std;

void swap(int &ix,int &iy);
void swap(float &fx, float &fy);
void swap(char &cx, char &cy);
void swap(double &dx, double &dy);

int main()
{
    int ix,iy;
    float fx,fy;
    char cx,cy;
    double dx,dy;
    cout<<"Enter 2 integers        : ";
    cin>>ix>>iy;
    cout<<"Enter 2 floating points : ";
    cin>>fx>>fy;
    cout<<"Enter 2 characters      : ";
    cin>>cx>>cy;
    cout<<"Enter 2 double points   : ";
    cin>>dx>>dy;

    cout<<endl;

    cout<<"Entered Integers      : ";
    cout<<"ix="<<ix<<" "<<"iy="<<iy<<endl;
    swap(ix,iy);

    cout<<"After swapping        : ";
    cout<<"ix="<<ix<<" "<<"iy="<<iy<<endl;

    cout<<"Entered Floating point: ";
    cout<<"fx="<<fx<<" "<<"fy="<<fy<<endl;
    swap(fx,fy);

    cout<<"After swapping        : ";
    cout<<"fx="<<fx<<" "<<"fy="<<fy<<endl;

    cout<<"Entered Characters    : ";
    cout<<"cx="<<cx<<" "<<"cy="<<cy<<endl;
    swap(cx,cy);

    cout<<"nAfter swapping       : ";
    cout<<"cx="<<cx<<" "<<"cy="<<cy<<endl;

    cout<<"Entered double points : ";
    cout<<"dx="<<dx<<" "<<"dy="<<dy<<endl;
    swap(dx,dy);

    cout<<"After swapping        : ";
    cout<<"dx="<<dx<<" "<<"dy="<<dy<<endl;

    cout<<endl;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(float &a, float &b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(char &a, char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(double &a, double &b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
}

