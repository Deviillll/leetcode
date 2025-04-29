#include<iostream>
using namespace std;
#include<string>


 int lengthOfLastWord(string s){
    int i=s.length();
    int count=0;

    while (i>=0&&s[i]==' ')
    {
        i--;
    }
    

  while(i>=0&&s[i]!=' '){
    i--;
    count++;
  }
  return count;

 }


int main(){
    string s="hammad tariq ";
    int length=lengthOfLastWord(s);
    cout<<length;
    


    return 0;
}