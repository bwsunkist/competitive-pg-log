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
  int A, B;
  int cnt=0;
  int enter=0;

  cin >> A;
  cin >> B;

  if(B==1){
    cout << cnt<< endl;
    return 0;
  }

  cnt++;
  enter+=A;//1つめのタップ
  while(enter<B){
    enter+=(A-1);
    cnt++;
  }
  cout << cnt<< endl;
}
