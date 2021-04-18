    #include<iostream>
    #include<vector>
    #include<cstdio>
    #include<string>
    #include<algorithm>
    using namespace std;
     
    int main() {
      string s,tm,tmm;
      int cnt =0;
      long N;
      long ac=0;
      long bc=0;
      long acbc =0;
      long abc=0;
      long ans = 0;
     
      cin >> N;
     
      for(int i=0; i< N; i++){
        cin >> s;
     
        
        //    cout <<"s = " << s << endl;
        // cout <<"s.back() == A = " << s.back()<< endl;
        tm = s.back();
        tmm = s[0];

        if(tm == "A" && tmm == "B"){
          acbc++;
        }else if(tm == "A"){
          ac++;
        }else if(tmm == "B"){
          bc++;
        }

        
        if(s.find("AB") != string::npos){
          do{
            int index = s.find("AB");
                s.erase(index, 2);
                abc++;
          }while(s.find("AB") != string::npos);
        }
      }
     

      long c1 = acbc;
      long c2 = ac;
      long c3 = bc;


      //cout << "c1 = " << c1 << endl;
      // cout << "c2 = " << c2 << endl;
      // cout << "c3 = " << c3 << endl;
      
      
      if(c1 == 0){
        ans = min(c2, c3);
      }else{
        if((c2 + c3) > 0){
          ans = c1 + min(c2, c3);
        }else if((c2 + c3) == 0){
          ans = c1 -1;
        }
      }

      ans = ans + abc;

      
      //      ans = abc+min(ac,bc);
      //      if(min(ac,bc)==N ){
      //        ans--;
      //      }
      cout << ans << endl;
     
    }
