#include <iostream>
using namespace std;
bool bp(string str)
{  int curly=0;
    int square=0;
    int circle=0;
    
 for(int i=0;i<str.length();++i)
 {
   
     char ch=str[i];
     
     if(ch=='{') 
     {
         curly++;
     }
     else if(ch=='(') 
     {
         circle++;
     }
      else  if(ch=='[') 
     {
         square++;
     }
       else  if(ch=='}') 
     {
         curly--;
     }
        else  if(ch==')') 
     {
         circle--;
     }
        else  if(ch==']') 
     {
         square--;
     }
 }
 
 if(curly==0 && square==0 && circle==0)
 {
     return true;
 }
 
 return false;
    
}
int main()
{
string str="{([])}";
if(bp(str))
{
    cout<<"balanced";
}
else
{
    cout<<"unbalanced";
}
}
