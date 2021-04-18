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

  vector<int> p(N);
  vector<int> p2(N);
  for(int i = 0; i < N; i++){
    cin >> p[i];
    p2[i] = p[i];
  }
  sort(p.begin(), p.end());
  // cout << "------" << endl;
  // for(int i = 0; i < N; i++){
  //   cout << p[i] << ",";
  // }
  //   cout << endl;;
  //   cout << "------" << endl;
  // for(int i = 0; i < N; i++){
  //   cout << p2[i] << ",";
  // }
  //   cout << endl;;
  //   cout << "------" << endl;
  for(int i = 0; i < N; i++){
    if(p[i] != p2[i]){
      ans++;
    }
  }

  if(ans == 2 || ans == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

}
