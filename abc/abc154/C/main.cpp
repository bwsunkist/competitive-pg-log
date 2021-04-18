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
  int N, M;
  bool ans = true;
 
  cin >> N;

  vector<long long> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 1; i < N; i++){
    if(a[i-1] == a[i]){
      ans = false;
    }
  }
  if(ans){
      cout << "YES" << endl;;
  }else{
      cout << "NO" << endl;;
  }
}
