    #include<iostream>
    #include<vector>
    #include<cstdio>
    #include<string>
    #include<algorithm>
    #include<climits>
    using namespace std;
     
    int main() {
      int ans=0;
      int  tmp=0;
      int  tmpx = 0;
      int  tmpy = 0;
      int N=0;
      int bcnt=2;
     
      cin >> N;
     
      vector<int> a(N);
      vector<int> b(N);
      for(int i = 0; i < N; i++){
        cin >> a[i];
      }
     
      sort(a.begin(), a.end());
     
      tmp = a[0] - a[1];
      //cout <<  a[0] << " " << a[1] << endl;
      b[0] = a[0];
      b[1] = a[1];
     
      for(int i = 2; i< N-1; i ++){
        //cout <<  a[i] << " " << tmp << endl;
        b[bcnt]=tmp;
        //cout << "bcnt = " << bcnt << endl;
        bcnt++;
        b[bcnt]=a[i];
        //cout << "bcnt = " << bcnt << endl;
        bcnt++;
        
        tmp = tmp - a[i];
      }
     
      ans = a[N-1] - tmp;
      //cout << a[N-1] << " " << tmp << endl;
      b[bcnt]=a[N-1];
      //cout << "bcnt = " << bcnt << endl;
      bcnt++;
      b[bcnt]=tmp;
      //cout << "bcnt = " << bcnt << endl;
      bcnt++;
     
      cout << ans << endl;
      cout << b[0] << " " << b[1] << endl;
     
      bcnt = 2;
      for(int i = 2; i < N - 1; i++){
        cout << b[bcnt] << " ";
        //cout << "bcnt = " << bcnt << endl;
        bcnt++;
        cout << b[bcnt] << endl;
        //cout << "bcnt = " << bcnt << endl;
        bcnt++;
        //cout << i << "th loop---" << endl;
      }
        cout << b[bcnt] << " ";
        //cout << "bcnt = " << bcnt << endl;
        bcnt++;
        cout << b[bcnt] << endl;
        //cout << "bcnt = " << bcnt << endl;
    }
