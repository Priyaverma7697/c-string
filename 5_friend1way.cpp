#include <iostream>
using namespace std;
class a{
   int b=10; 
 friend class b;

};
class b
{
public:void show(a obj)
  {
      cout<<obj.b;
  }
};
int main()
{
a obj;
b obj1;
obj1.show(obj);
}
