#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int a,b,c;
  int flag = 0;

  cin >> a >> b;

  if(a%2 ==0 || b%2 ==0){
    flag =1;
  }

  if(flag == 1){
    cout << "Even" << endl;
  }else{
    cout << "Odd" << endl;    
  }

}
