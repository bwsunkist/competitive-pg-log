#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int dream(string S){
  string tmp;
  cout<< "S.size() = " << S.size()<< endl;
  if(S.size()>=5){
    if(S.substr(0,5)=="dream"){
      tmp=S.substr(5);
      cout<< "S's first 5 ="<< tmp  << endl;
      if(S.substr(0,7)=="dreamer"  && S.substr(5,5) != "erase"){
        cout<< "S's first 7 ="<< tmp   << endl;
        tmp=S.substr(7);
      }

      cout<< "S.size() ="<< tmp.size()  << endl;      
      if(tmp.size()==0){
        cout << "goal!" << endl;
        return 1;
      }

      if(dream(tmp)==1){
        return 1;
      };
      
    }
    if(S.substr(0,5)=="erase" ){
      cout<< "S's first 5 ="<< S.substr(0,5)   << endl;
      tmp=S.substr(5);
      cout<< "extract tmp ("<< S << " --> " << tmp << ")" << endl;
      
      if(S.substr(0,6)=="eraser"  && S.substr(4,5) != "erase"){
      cout<< "S's first 6 ="<< S.substr(0,6)   << endl;
        tmp=S.substr(6);
      }

      if(tmp.size()==0){
        return true;
      }

      cout << "next daydreaming ...zzz"<< endl;
      if(dream(tmp)==1){
        return true;
      }
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

  cout << ans << endl;
  
}
