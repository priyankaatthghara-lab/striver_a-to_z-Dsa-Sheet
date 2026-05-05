/*
 leetcode 242: Valid Anagram
 Two approaches: 
 1. Brute force: sort two sentences
 2. Optimised: creating extra array
*/
#include<iostream>
#include<cstring>
using namespace std;
bool func(string str1, string str3){
   int count[26]={0};
   if (str1.size()!=str3.size())
   {
    cout<<" not the valid anagram";
    return false;
   }
   else{
   
   for (int i = 0; i < str1.size(); i++)
   {
     count[str1[i]-'a']++;

   }
   for (int i = 0; i < str3.size(); i++)
   { int idex=str3[i]-'a';
     if (str3[i]==0)
     {
       return false;
       cout<<"Invalid anagram";
     }
     else{
      count[idex]--;
     }
     
   }
   cout<<"Valid anagram"<<"\n";
   return true;
   
   
   }
   
}
int main(){
    string str1="anagram";
    string str2="margana";
    cout<<func(str1,str2);
    return 0;

}