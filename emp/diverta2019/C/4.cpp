#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N;
  int ansflg=0;
  int tmp=0;
  int cnt=0;
  int ac,bc,abc;

  cin >> N;

  vector<string> S(10000);
  for(int i = 0; i < N; i++){
    cin >> S[i];

    cout <<"S[i] = " <<  S[i] << endl;
    if([S[i].size()-1]=="A"){
      ac++;
    }
      
    if(S[i][0]=="B"){
      bc++;
    }

    
    do{
        int index = S[i].find("AB");
            S[i].erase(index, 2);
            abc++;
  }while(S[i].find("AB") != string::npos);





  }

  int ans = abc+min(ac,bc);
  if(min(ac,bc)=N){
    ans--;
  }
  cout << ans << endl;

}
