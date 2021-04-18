    #include<iostream>
    #include<vector>
    #include<cstdio>
    #include<string>
    #include<string.h>
    #include<algorithm>
    #include<climits>
    using namespace std;
     
    int main() {
      int ans=0;
      int X = 0;
      int N = 0;
      string s;
      int breakflg=0;
      int cnt = 0;
      int maxcnt = 0;
      int loopcnt = 0;
     
      cin >> s;
     
      for(int i = 0; i < s.length(); i++){
        loopcnt = i;
        while(breakflg == 0){
          if(s[loopcnt] == 'A'
             || s[loopcnt] == 'C'
             || s[loopcnt] == 'T'
             || s[loopcnt] == 'G'){
            cnt++;
            loopcnt++;
          }else{
            breakflg++;
          }
        }
        maxcnt = max(maxcnt, cnt);
        breakflg = 0;
        loopcnt = 0;
        cnt = 0;
      }
     
      cout << maxcnt << endl;
    }