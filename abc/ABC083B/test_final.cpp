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
  int ans=0;
  int tmp=0;

  cin >> N >> A >>B;
  for(int i=N; i>0; i--){
    cnt = i;
    while(cnt){
      tmp=tmp+cnt%10;
      cnt = cnt/10;
    }
    if(A <= tmp && tmp <= B){
      ans=ans+i;
    }
    tmp=0;
  }
  cout << ans << endl;

}
