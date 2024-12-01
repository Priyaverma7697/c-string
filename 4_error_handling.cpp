#include <iostream>
using namespace std;
int main()
{
  int number1, number2, result;
  cout<<"enter numbers";
  cin>>number1>>number2;
  try{
      if(number2!=0){
        result=number1/number2;
        cout<<result;
      }
      else{
          throw number2;
      }
  }
catch(int e)
//   catch (…)
  {
      cout<<"divide by zero not allowed";
  }
}
