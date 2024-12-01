#include <iostream>
using namespace std;
class a{
int b=10;

friend void show( a obj);

};
void show( a obj)
{
cout<<obj.b;
    
}
int main()
{
    a obj;
    show(obj);

}
