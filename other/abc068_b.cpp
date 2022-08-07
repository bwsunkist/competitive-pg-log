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

  cin >> N;

  int max_n = 1;
  int max_div = 0;
  for(int i = 1; i <= N; i++){
    int temp_n = i;
    int temp_div = 0;
    while(temp_n % 2 == 0) {
      temp_n = temp_n / 2;
      temp_div++;
    }

    if(temp_div > max_div) {
      max_n = i;
      max_div = temp_div;
    }
  }

  cout << max_n << endl;

}
