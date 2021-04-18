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

  if( N%2 == 0){
    cout << N << endl;
  }else{
    cout << 2*N << endl;
  }
}
