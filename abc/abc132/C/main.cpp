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
  int ans = 0;

  cin >> N;

  vector<int> d(N);
  for(int i = 0; i < N; i++){
    cin >> d[i];
  }
  sort(d.begin(), d.end());

  if(d[N/2-1] == d[N/2]){
    cout << 0 << endl;
  }else{
    cout << d[N/2] - d[N/2 - 1] << endl;
  }

}
