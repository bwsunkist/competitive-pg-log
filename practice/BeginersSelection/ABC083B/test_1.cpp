#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int A,B,N;
  int cnt=0;
  int num;
  int tmp1,tmp2;

  cin >> N >> A >> B;

  cnt = 1854 %10;
  cout << cnt << endl;
  cnt = 1854 %100;
  cnt = cnt/10;
  cout << cnt << endl;
  cnt = 1854 %1000;
  cnt = cnt /100;
  cout << cnt << endl;
  cnt = 1854 %10000;
  cnt = cnt /1000;
  cout << cnt << endl;
}
