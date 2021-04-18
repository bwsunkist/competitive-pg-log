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
  string s;

  cin >> s;

  if(s == "Sunny"){
    cout << "Cloudy" << endl;
  }else if(s == "Cloudy"){
    cout << "Rainy" << endl;
  }else if(s == "Rainy"){
    cout << "Sunny" << endl;
  }
}
