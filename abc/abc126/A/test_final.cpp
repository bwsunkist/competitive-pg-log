#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int cnt=0;
  string S;
  string tmp;

  cin >> S;

  tmp=S;
  while(tmp.size()>=5){
    if(tmp.substr(0,5)=="dream"){
      tmp=tmp.substr(5);
      if(tmp.substr(0,2)=="er"  && tmp.substr(0,5) != "erase"){
        tmp=tmp.substr(2);
      }

      if(tmp.size()==0){
        cout << "YES"<< endl;
      }
      
    }
    else if(tmp.substr(0,5)=="erase" ){
      tmp=tmp.substr(5);
      
      if(tmp.substr(0,1)=="r"  && tmp.substr(0,4) != "rase"){
        tmp=tmp.substr(1);
      }

      if(tmp.size()==0){
        cout << "YES"<< endl;
      }
    }
    else{
      cout << "NO" << endl;
      break;
    }

  }
  if(tmp.size()<5 && tmp.size()!=0){
    cout << "NO" << endl;
  }
}
