#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N, K;
  int ansflg=0;
  int cnt=0;
  int tmp;

  cin >> N >> K;

  for(int i=0; i<N; i++){
    int tmp = i+K;
    if(tmp <= N){
      cnt++;
    }
  }
  
    cout << cnt << endl;
}
