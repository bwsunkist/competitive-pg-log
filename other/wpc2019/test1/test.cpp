#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  string s;
  int cnt=0;

  int idx=0;
  
  cin >> s ;

  do{
    cnt=0;
    if(idx==0){
      if(s.find("WA") != string::npos){
        idx = s.find("WA");
        s.replace(idx, 2, "AC");
        cnt++;
      }
    }else{
      if(s.substr(idx-1).find("WA") != string::npos){
        idx = (idx-1) + s.substr(idx-1).find("WA");
        s.replace(idx, 2, "AC");
        cnt++;
      }
    }
  }while(cnt!=0);

      cout <<  s << endl;

  
}
