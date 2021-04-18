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
  int ans = 0;

  cin >> N;

  if(N % 4 == 0 || N % 7 == 0){
    ans++;
  }else{
    int n = N;
    while(n > 0){
      n = n-4;
      if(n % 7 == 0) {
        ans++;
        break;
      }
    }
  }
  if(ans>0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;

  }

  
}
