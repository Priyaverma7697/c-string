#include <iostream>
using namespace std;
bool anagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
      return false;  
    }
    int counter[256]={0};
    
    for(int i=0;i<=str1.length();++i)
    {
        counter[str1[i]]++;  
        counter[str2[i]]--;
    }
    
    for(int i=0;i<256;++i)
    {
        if(counter[i]!=0)
        {
            return false;
        }
    } 
    return true;
}
int main()
{
string str1="priya";
string str2="riyap";
if(anagram(str1,str2))
{
    cout<<"anagram";
}
else
{
    cout<<"not";
}
}
