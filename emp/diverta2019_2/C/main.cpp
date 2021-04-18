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

  sort(a.begin(), a.end());

  tmp = a[0] - a[1];
  //cout <<  a[0] << " " << a[1] << endl;
  b[0] = a[0];
  b[1] = a[1];

  for(int i = 2; i< N-1; i ++){
    //    cout <<  a[i] << " " << tmp << endl;
    c[ccnt]=tmp;
    //cout << "bcnt = " << bcnt << endl;
    ccnt++;
    c[ccnt]=a[i];
    //cout << "bcnt = " << bcnt << endl;
    ccnt++;
    
    tmp = tmp - a[i];
  }

  ans = a[N-1] - tmp;
  cout << a[N-1] << " " << tmp << endl;
  d[dcnt]=a[N-1];
  //cout << "bcnt = " << bcnt << endl;
  dcnt++;
  d[bcnt]=tmp;
  //cout << "bcnt = " << bcnt << endl;
  dcnt++;

  cout << ans << endl;
  cout << b[0] << " " << b[1] << endl;

  ccnt =0;
  dcnt=0;
  
  for(int i = 2; i < N - 1; i++){
    cout << c[ccnt] << " ";
    //cout << "bcnt = " << bcnt << endl;
    ccnt++;
    cout << c[ccnt] << endl;
    //cout << "bcnt = " << bcnt << endl;
    ccnt++;
    //cout << i << "th loop---" << endl;
  }
    cout << d[dcnt] << " ";
    //cout << "bcnt = " << bcnt << endl;
    dcnt++;
    cout << d[dcnt] << endl;
    //cout << "bcnt = " << bcnt << endl;
}
