#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printnumber(int n){
  if (n==10) return ;
  printnumber(n+1); 
  cout<<n;
}

int main(){
  printnumber(4);
  return 0;
}
   