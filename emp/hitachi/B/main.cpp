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
  int A, B, M;
  string s;

  cin >> A >> B >> M;

  vector<int> a(A);
  vector<int> b(B);
  vector<int> x(M);
  vector<int> y(M);
  vector<int> z(M);
  vector<int> ans(M);
  for(int i = 0; i < A; i++){
    cin >> a[i];
  }
  for(int i = 0; i < B; i++){
    cin >> b[i];
  }
  for(int i = 0; i < M; i++){
    cin >> x[i] >> y[i] >> z[i];
  }
  for(int i = 0; i < M; i++){
    // cout << "total = " << a[x[i] -1] << " + "<< b[y[i] -1] << " - " << z[i] << endl;
    ans[i] = a[x[i]-1] + b[y[i]-1] - z[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  // cout << "a = " << a[0] << ", b = " << b[0] << endl;
  // ans[ans.size()] = a[0] + b[0];
  // cout << " ans.. " <<   ans[ans.size()] << endl;
  // int n = ans.size();
  // cout << " n.. " <<   n << endl;

  // for(int i = 0; i <= n; i++){
  //   cout << ans[i] << endl;
  // }
  sort(ans.begin(), ans.end());

  if(ans[0] <= (a[0] + b[0])){
    cout << ans[0] << endl;
  }else{
    cout << (a[0] + b[0]) << endl;
  }

  // cout << " --- "  << endl;
  // cout << ans[0] << endl;
  // cout << ans[1] << endl;
}
