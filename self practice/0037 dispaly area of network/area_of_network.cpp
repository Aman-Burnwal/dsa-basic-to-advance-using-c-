#include <iostream>
using namespace std;

void area_of_circle(float radius, float pie)
{
    cout << pie * radius * radius << endl;
    
}

void circle() {
    cout << "radius is " << endl;
    float radius;
    cin >> radius;

    float pie = 3.14f;

    area_of_circle(radius, pie);
}



int main()
{

    int userchoice;

    cout << "do you want to find circle area? \nfor yes type 1 and for no type 0" << endl;

    cin >> userchoice;

    if (userchoice == 1)
        circle();
    return 0;
}