#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
#include <map>
using namespace std;

int main() {
  int N;
  int ans = 0;
  string s;

  cin >> N;

  vector<int> a(N);
  vector<int> b(N);
  vector<long long > c(N, 0);
  int mx = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    b[i] = a[i];
    mx = max(mx, a[i]);
  }
  sort(b.begin(), b.end());
  int bct = 0;
  int bf = 0;
  map<int, int> freq;
  for(int i = 0; i < N; i++){
    freq[a[i]]++;
    if(i > 0){
      if(bf == b[i]){
      }else{
        bct++;
      }
    }
    c[bct]++;
    bf = b[i];
  }
  int fq = c.size();
  long long  allcnt = 0;
  for(int i = 0; i < fq; i++){
    allcnt += c[i]*(c[i]-1)/2;
    // cout << "c[" << i << "] = " << c[i];
    // cout << ", allcnt = " << allcnt << endl;
  }

  // cout << " --- " << endl;
  for(int i = 0; i < N; i++){
    long long mns = 0;
    long long pls = 0;
    mns = freq[a[i]]*(freq[a[i]]-1)/2;
    pls = (freq[a[i]]-1)*(freq[a[i]]-2)/2;
    cout << allcnt - mns + pls << endl;
    // cout << "allcnt = " << allcnt;
    // cout << ", mns = " <<  mns;
    // cout << ", pls = " <<  pls << endl;
  }

}
