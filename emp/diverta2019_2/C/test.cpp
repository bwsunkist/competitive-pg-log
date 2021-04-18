#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  int  tmp=0;
  int  tmpx = 0;
  int  tmpy = 0;
  int N=0;
  int bcnt=0;
  int ccnt=0;
  int dcnt=0;

  cin >> N;

  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);
  vector<int> d(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];

  }
  for(int i = 0; i < N; i++){
    cout << a[i] << "," ;
  }
  cout << endl;

  sort(a.begin(), a.end());

  for(int i = 0; i < N; i++){
    cout << a[i] << "," ;
  }
  cout << endl;
}
