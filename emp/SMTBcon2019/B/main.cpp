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
  string s;

  cin >> N;

  int tmp = N/1.08;
  tmp -= 10;
  
  // cout << "tmp start = " << tmp << endl;

  int cnt = 0;
  int calc = 0;
  while(cnt < 20){
    calc = tmp*1.08;
    if(calc == N){
      cout << tmp << endl;
      ans++;
      break;
    }

    tmp++;
    cnt++;
  }

  if(ans == 0){
    cout << ":(" << endl;
  }
}
