/*
www.DarkCybernetics.com
Primitive Data Types
*/
#include <iostream>
using namespace std;
/*
•Integer
•Character
•Boolean
•Floating Point
•Double Floating Point
•Valueless or Void
•Wide Character
*/
int main()
{
    cout<<"Integer has as a size of:"<< sizeof(int);
    cout<<"Character has a size of:"<<sizeof(char);
    cout<<"Boolean has a size of:"<<sizeof(bool);
    cout<<"Floating Point has a size of:"<<sizeof(float);
    cout<<"Double Floating has a size of:"<<sizeof(double);
    cout<<"Void has a size of:"<<sizeof(void);
    cout<<"Wide Character has a size of:"<<sizeof(wchar_t);

    return 0;
}
