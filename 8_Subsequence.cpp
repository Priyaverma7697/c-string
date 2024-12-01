#include <iostream>
using namespace std;
bool subseq(string str1,string str2)
{
    int j=0;
    for(int i=0;i<str1.length();++i)
    {
    if(str1[i]==str2[j])
    {
        j++;
    }
    }
  
    if(j==str2.length())
    {
        return true;
    }
    
    return false;
    
}

int main()
{

string str1="abcbc";
string str2="abb";

if(subseq(str1,str2))
{
    cout<<"sub";
}
else
{
    cout<<"not";
}
}
