#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int N;
  int a,b,c;

  cin >> N;
  c = N%10;
  b = (N/10)%10;
  a = (N/100)%10;

  if(a < b){
    a++;
  }else if(a == b){
    if(a < c){
      a++;  
    }else{
    }
  }else if(a > b){
  }else{
  }
  
  cout << a*100 + a*10 + a << endl;
}
