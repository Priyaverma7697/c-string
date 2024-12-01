#include <iostream>
#include <string>
using namespace std;
void sto(string str){
    int start=0;
    int end=str.length()-1;
   while(start<=end){
       if(str[start]>='A' && str[start]<='Z'){
           str[start]=str[start]+32;
       }
       else if(str[start]>='a' && str[start]<='z'){
           str[start]=str[start]-32;
       }
       start++;
   }
   cout<<str;
}
int main() {
string str="rose";
sto(str);
}
