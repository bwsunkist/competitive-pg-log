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
  int s;
  int cnt =1;

  cin >> s;

  vector<int> a(s*1000, 0);
  a[0] = 0;
  a[s]++;

  while(a[s] <= 1){
    if(s % 2 == 0){
      s = s/2;
    }else{
      s = 3*s + 1;
    }
    a[s]++;
    cnt ++;

  }

  cout << cnt << endl;
}
