#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long ans=0;
  int K = 0;
  int N = 0;
  long long tmp = 0;
  int cnt = 0;

  cin >> N >> K;

  vector<int> a(N);
  for(long i = 1; i <= N; i++){
    cin >> a[i];
  }

  for(long i = N; i > 0; i--){
    tmp = tmp + a[i];
    cnt = i;

    if(tmp >= K){
      cout << "over K" << endl;
      break;
    }
  }
  
  ans = cnt;
    cout << "ans update = " << ans << endl;
    cout << "( cnt = " << cnt << " )" << endl;
  cnt--;

  //a_n-1以降を用いてのパターン
  for(long i = N; i > 1; i--){
    tmp = tmp - a[i];

    //over K まで要素足す
    while(tmp < K){
      cout << "while loop -- " << endl;
      if(cnt > 0){
        tmp += a[cnt];
        cnt--;
      }else{
        cnt = -1;
        cout <<" break" << endl;
        break;
      }      
    }

    cnt++;
    ans += cnt;
    cout << "ans update = " << ans << endl;
    cout << "( cnt = " << cnt << " )" << endl;
    cnt--;
  }
  
  cout << ans << endl;
}
