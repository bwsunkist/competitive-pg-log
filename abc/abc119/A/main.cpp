#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
#include <sstream>
using namespace std;

int main() {
  int N;
  int cnt=0;
  int tmp=0;
  int f1=0;
  int f2=0;
  string S;
  string s1;
  string s2;
  string s3;
  istringstream ss1;
  istringstream ss2;
  istringstream ss3;
  int p1;
  int p2;
  int p3;

  cin >> S;

  s1 = S.substr(0,4);
  s2 = S.substr(5,2);
  s3 = S.substr(8,2);

  ss1 = istringstream(s1);
  ss2 = istringstream(s2);
  ss3 = istringstream(s3);

  ss1 >> p1;
  ss2 >> p2;
  ss3 >> p3;

  //2019/4
  if(p1 == 2019 && p2 == 4 && p3 <= 30){
    cout << "Heisei" << endl;
  }else if(p1 == 2019 && p2 <=4){
    cout << "Heisei" << endl;
  }else if(p1 < 2019){
    cout << "Heisei" << endl;
  }else{
    cout << "TBD" << endl;
  }

}
