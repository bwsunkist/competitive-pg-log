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
  int M1, D1, M2, D2;
  int ans = 0;
  string s;


  cin >> M1 >> D1;
  cin >> M2 >> D2;

  if(M1 != M2 && D2 == 1){
    ans++;
  }
   cout << ans << endl;

}
