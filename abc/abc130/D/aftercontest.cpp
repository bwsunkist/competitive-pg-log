#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long ans=0;
  long long K = 0;
  int N = 0;
  long long tmp = 0;
  int cnt = 0;
  long long flg=0;

  cin >> N >> K;

  vector<int> a(N+1);
  for(long i = 1; i <= N; i++){
    cin >> a[i];
  }
  //  for(long i = 1; i <= N; i++){
  //    cout << a[i] << ", ";
  //  }
  //  cout << endl;
  for(long i = 1; i <= N; i++){
    tmp = tmp + a[i];
    cnt = i;

    if(tmp >= K){
      //      cout << "over K. cnt = " << cnt << ", tmp = " << tmp << endl;
      flg=1;
      break;
    }
  }

  if(flg==1){
  ans++;
  ans += N-cnt;
  //cout << "ans = " << ans << endl;
  }
  flg=0;
  //a_n-1以降を用いてのパターン
  for(long i = 1; i <= N; i++){
    tmp = tmp - a[i];
    //    cout << "minus a[" << i << "]" << endl;
    //    cout << "update(for): tmp = " << tmp << endl;

    if(tmp >= K){
      ans ++ ;
      // cout << "tmp over K(for). ans =  "<< ans << endl;
    }

    //over K まで要素足す
    while(tmp < K){
      cnt++;
      //      cout << "cnt = " << cnt << endl;;
      //      cout << "while loop -- " << endl;
      if(cnt <= N){
        tmp += a[cnt];
        //        cout << "update: tmp = " << tmp << endl;
        if(tmp >= K){
          flg=1;
        }
      }else{
        //        cout <<" break" << endl;
        break;
      }
    }

    if(flg == 1){
      ans++;
    }
    flg=0;
    if(cnt<=N && tmp >= K){
      ans += N- cnt;
      //cout << "update: ans = "<< ans <<endl;
    }
  }
  
  cout << ans << endl;
}
