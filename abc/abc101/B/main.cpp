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
  long long N;

  cin >> N;

  //各桁確認
  long long ksum = 0;
  long long  ketaN = N;
  int keta = 0;
  while(ketaN > 0){
    ksum = ksum + (ketaN%10);
    ketaN = ketaN/10;
    keta++;
  }

  if(N%ksum == 0){
    cout  << "Yes" << endl;
  }else {
    cout  << "No" << endl;
  }

}
