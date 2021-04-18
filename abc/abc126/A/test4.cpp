#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int ansflg=0;
  int tmp;

  cin >> N;

  vector<int> t(N),x(N), y(N);
  for(int i = 0; i < N; i++){
    cin >> t[i] >> x[i] >> y[i];
  }

  for(int i = 0; i < N; i++){
    tmp= x[i] + y[i];

    if(tmp%2 != t[i]%2 || tmp > t[i]){
      ansflg=1;
    }

  }

  if(ansflg==0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
