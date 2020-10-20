#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void ReadCord(int &x, int &y);
void CalcDistance(int x1, int y1, int x2, int y2, float &d);
void display(float d);

int main()
{
    int x1, x2, y1, y2;
    float d;
    ReadCord(x1, y1);
    ReadCord(x2, y2);
    CalcDistance(x1, y1, x2, y2, d);
    display(d);
}
void ReadCord(int &x, int &y)
{
    cout << "Enter a coordinate set" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
}
void CalcDistance(int x1, int y1, int x2, int y2, float &d)
{
    d = sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));
}   
void display(float d)
{
    cout << "The distance between the two points is: " << setprecision(2) << fixed << showpoint << d << endl;
}

