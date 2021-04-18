#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  long long  tmp=0;
  long long  tmpx = 0;
  long long  tmpy = 0;
  int N=0;
  int K=0;

  cin >> N;

  vector<long long> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  tmp = a[1] - a[2];
  cout <<  a[1] << " " << a[2] << endl;

  for(int i = 1; i< N-1; i ++){
    cout << tmp << " " << a[i] << endl;
    tmp = tmp - a[i];
  }

  ans = a[0] - tmp;
  cout << a[0] << " " << tmp << endl;;

  cout << ans << endl;;
}
