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

// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
int main() {
  int N, A, B;
  string s;

  cin >> N >> A >> B;
  cin >> s;

  int internalRank = 0;
  int foreignRank = 0;
  int passed = 0;
  for(int i = 0; i < N; i++){
    if (s[i] == 'a') {
      internalRank++;
      if (passed < (A+B)) {
        passed++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
    else if (s[i] == 'b') {
      foreignRank++;
      if (passed < (A+B) && foreignRank <= B) {
        passed++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
}
