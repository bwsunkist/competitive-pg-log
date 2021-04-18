#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

//最大公約数を求める
int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}

//最小公倍数を求める
int lcm(int a, int b){
  return a*b/gcd(b, a%b);
}

int main() {
  int N, M;
  int ans = 0;
  string s;

  cin >> N >> M;

  cout << gcd(N,M) << endl;

}
