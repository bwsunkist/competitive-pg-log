#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  string s;
  string rslt;
  int cnt=0;
  
  cin >> s ;

  
  do{
    cnt=0;

    if(s.find("WA") != string::npos){
  int index = s.find("WA");
            s.erase(index, 2);
            s.insert(index, "AC");
            cnt++;
    }
  }while(cnt!=0);

      cout <<  s << endl;

  
}
