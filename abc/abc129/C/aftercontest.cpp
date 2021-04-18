#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long ans=1;
  long long cnt=0;
  long long N =0;
  long long M =0;
  long long mns1=0;
  long long mns2=0;
  long long tmp = 0;
  long long now = 0;
  long long acnt=0;
  //i=0
  mns2=1;
  //i=1
  mns1=1;
  
  cin >> N >> M;

  if(N==1){
    cout << "1" << endl;
    return 0;
  }

  vector<long long> a(M), b(M+1);

  if(M > 0){
    for(long long i = 0; i < M; i++){
      cin >> a[i];

      if(i > 1 && (a[i-1] + 1) == a[i]){
        //    cout << "NOt exist a way to step up floor." << endl;
        cout << "0" << endl;
        return 0;
      }
    }

    if(a[acnt] == 1){
      mns1 = 0;
      acnt++;
    }

    for(long long i = 2; i <= N; i++){
      if(i==a[acnt]+1){
        now = mns2;

        mns2 = 0;
        mns1 = now;
      
        acnt++;
      }else if(i == a[acnt]){
        //cout << "This Floor is Broken!." << endl;
        now=0;
        mns2= mns1;
        mns1=0;
      }else{
        now = mns1 + mns2;

        mns2 = mns1;
        mns1 = now;
      }

      if(now > 1000000007){
        now = now%1000000007;
      }
      if(mns1 > 1000000007){
        mns1 = mns1%1000000007;
      }
      if(mns2 > 1000000007){
        mns2 = mns2%1000000007;
      }

      //cout << "*** i = " << i << endl;
      //cout << "mns1 = " << mns1 << ", mns2 = " << mns2 << endl;
      //cout << " now = " << now << endl;
    }
  }else{
    for(long long i = 2; i <= N; i++){
        now = mns1 + mns2;

        mns2 = mns1;
        mns1 = now;

        if(now > 1000000007){
          now = now%1000000007;
        }
        if(mns1 > 1000000007){
          mns1 = mns1%1000000007;
        }
        if(mns2 > 1000000007){
          mns2 = mns2%1000000007;
        }
    }
  }

    cout << now%1000000007 << endl;

}
