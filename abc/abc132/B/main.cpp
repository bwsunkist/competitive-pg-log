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
  int n;
  int ans = 0;
  string s;

  cin >> n;

  vector<int> p(n);
  for(int i = 0; i < n; i++){
    cin >> p[i];
  }
  for(int i = 1; i < n-1; i++){
    if((p[i-1] < p[i] && p[i] < p[i+1])
       || (p[i-1] > p[i] && p[i] > p[i+1])){
      ans++;
      //      cout << "..." << p[i-1] << ", " << p[i] << ", " << p[i+1] << endl;
    }
  }
  cout << ans << endl;
}
