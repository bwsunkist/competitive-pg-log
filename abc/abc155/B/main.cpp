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
  bool ans = true;

  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i]; 
  }
  for(int i = 0; i < N; i++){
    if(a[i] % 2 == 0){
      if(a[i] % 3 != 0 && a[i] % 5 != 0){
        ans = false;
      }
    }
  }
  if(ans){
    cout << "APPROVED" << endl;
    return 0;
  }else{
    cout << "DENIED" << endl;
    return 0;
  }
}
