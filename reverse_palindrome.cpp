#include <iostream>
#include <string>
using namespace std;
void reversing(string str){
    string strrev=str;
    int start=0;
    int end=str.length()-1;
    while(start<end){
        char temp;
        temp=str[end];
        str[end]=str[start];
        str[start]=temp;
        start++;
        end--;
    }
//   cout<<str[0];
   if(str==strrev){
       cout<<"Palindrome";
   }
   else{
       cout<<"not a Palindrome";
   }
}
int main() {
string str="abcba";
reversing(str);
}
