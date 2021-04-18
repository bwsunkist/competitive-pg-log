#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int cnt=-1;
  int A, B, C;

  cin >> A >> B >> C;

  while(B>=0){
    B = B - A;
    cnt++;
  }

  if(cnt > C){
    cnt = C;
  }

  cout << cnt << endl;

}
