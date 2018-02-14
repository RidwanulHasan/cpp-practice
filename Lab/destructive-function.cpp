#include<iostream>

using namespace std;

class Cube
{
public:
    ~Cube()
    {
        cout<<"Object is destroyed"<<endl;
    }
};
//Destroy object2 first
//Destroy object1 later....
int  main()
{
    Cube object1,object2;
}
