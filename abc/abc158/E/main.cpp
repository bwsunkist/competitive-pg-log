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
  int N, P;
  int ans = 0;
  string s;

  cin >> N >> P;
  cin >> s;
  istringstream si;
  int n = 0;

  string tmp = "";
  for(int i = 0; i < N-1; i++){
    tmp = "";
    for(int j = i; j < N; j++){
      tmp = tmp+s[j];
    }
    si = istringstream(tmp);
    si >> n;
    cout << "n = " << n << endl;
    if(n % P == 0) ans++;
    cout << ans << endl;
  }

}
