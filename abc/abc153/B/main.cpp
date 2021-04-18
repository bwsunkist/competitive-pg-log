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
  long long h;
  long long n;
  long long a;
  long long tt = 0;

  cin >> h >> n;

  // vector<int> a(n);
  for(int i = 0; i < n; i++){
    // cin >> a[i];
    cin >> a;
    tt += a;
  }
  if(h <= tt){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl ;
  }
}
