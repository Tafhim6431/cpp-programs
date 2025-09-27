#include<iostream>
using namespace std;

int main (){
  char word []= "fjkmKGgvgbFDvGvFgb";
  
  int n  = sizeof(word);
  for (int i = 0 ; i <= n-1; i++){
     
     char ch;
    if (word[i] < 'a' ){
      cout << word[i];

    }else{
      int position = word[i]-'a';
      ch = 'A'+position;
      cout << ch;
    }
  }
}