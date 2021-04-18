#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
#include<iomanip>
using namespace std;

int main() {
  int N,K;
  double cnt=0;
  int tmp=0;
  int f1=0;
  int f2=0;
  double ans =0;

  cin >> N >> K;

  for(int i = 1; i <= N; i++ ){
    tmp = i;
    cnt= 1.0/N;
    while(tmp < K){
      tmp = tmp*2 ;
      cnt = cnt/2.0;
    }
    ans = ans + cnt;
  }

  cout << setprecision(12) << ans << endl;

}
