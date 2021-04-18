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
using namespace std;

int main() {
  int N;
  int ansflg2 = 0;
  long long maxv = 0;

  cin >> N;

  vector<long long > H(N);
  for(int i = 0; i < N; i++){
    cin >> H[i];

    if((maxv-2) >=H[i]){
      ansflg2++;
    }
    maxv = max(maxv, H[i]);
  }

  if(ansflg2 > 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
