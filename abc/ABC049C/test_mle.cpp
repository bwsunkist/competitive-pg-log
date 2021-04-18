#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int dream(string S){
  string tmp;
  if(S.size()>=5){
    if(S.substr(0,5)=="dream"){
      tmp=S.substr(5);
      if(S.substr(0,7)=="dreamer"  && S.substr(5,5) != "erase"){
        tmp=S.substr(7);
      }

      if(tmp.size()==0){
        return 1;
      }

      if(dream(tmp)==1){
        return 1;
      };
      
    }
    if(S.substr(0,5)=="erase" ){
      tmp=S.substr(5);
      
      if(S.substr(0,6)=="eraser"  && S.substr(4,5) != "erase"){
        tmp=S.substr(6);
      }

      if(tmp.size()==0){
        return 1;
      }

      if(dream(tmp)==1){
        return 1;
      };
    }
  }

  return 0;
}


int main() {
  int cnt=0;
  string S;

  cin >> S;

  int ans = dream(S);
  if(ans == 1){
    cout << "YES"<< endl;
  }else{
    cout << "NO"<< endl;
  }

  
}
