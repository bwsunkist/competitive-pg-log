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
  int A, B;
  int ans = 0;
  string s, t, u;

  cin >> s >> t;
  cin >> A >> B;
  cin >> u;

  if(s == u){
    A--;
  }else if(t == u){
    B--;
  }

  cout << A << " "<< B << endl;

}
