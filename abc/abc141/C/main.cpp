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
  long long  N, K, Q;
  long long  ans = 0;

  cin >> N >> K >> Q;

  vector<long long> a(Q);
  for(int i = 0; i < Q; i++){
    cin >> a[i];
  }

  map<long long, long long> fq; 
  for(int i = 0; i < Q; i++){
    fq[a[i]]++;
  }



}
