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

vector<int> divenum(int n){
  vector<int> ret;
  for(int i = 1 ; i*i <= n ; ++i){
    if(n%i == 0){
      ret.push_back(i);
      if(i != 1 && i*i != n)  ret.push_back(n/i);
    }
  }
  ret.push_back(n);
  return ret;
}

int main() {
  long long N;
  long long ans = 0;
  vector<int> ans2;

  cin >> N;
  ans2 = divenum(N);
  int i = ans2.size();
  sort(ans2.begin(), ans2.end());
  for(int j = 0; j < i; j++){
    cout << ans2[j] << ", ";
  }
   cout << endl;
//    cout << "ans = " << ans <<endl;
}
