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
  string tmp;

  cin >> N;

  vector<string> S(N);
  for(int i = 0; i < N; i++){
    cin >> S[i];
  }

  for(int i = 0; i < N; i++){

    tmp=S[i]
    if(temp[tmp.size()-1]=="A"){
      ac++;
    }
      
    if(temp[0]=="B"){
      bc++;
    }

    
    do{
        int index = tmp.find("AB");
            tmp.erase(index, 2);
            abc++;
  }while(tmp.find("AB") != string::npos);

    
  }
}
