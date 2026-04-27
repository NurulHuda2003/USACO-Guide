#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    // while (N--){
    //     int a,b,g;
    //     cin>>a>>b>>g;
    //     //random number generator
    //           //define range
    //           int min=1;
    //           int max=3;
    //             //initialize a random number generator
    //             random_device rd;
    //             mt19937 gen(rd());
    //             uniform_int_distribution<>distrib(min,max);
    //             //generate randmin numer in the range[min,max]
    //             int random_number=distrib(gen);
    //             g=random_number;
    //             if()
    // }  not needed
    vector<int>a(N),b(N),g(N);
    for(int i=0;i<N;i++){
        cin>>a[i]>>b[i]>>g[i];
    }
   int ans=0;
    for (int i=1;i<=N;i++){
      
        int pebble=i;
        int correct_guess=0;
        for (int j=0;j<N;j++){
            if(pebble==a[j]){
                pebble=b[j];
            }else if(pebble ==b[j]){
                pebble=a[j];
            }if (pebble==g[j]){
                correct_guess++;
            }
            //cout<<ans<<'\n';
        }
                    ans=max(ans,correct_guess);

    }


    // 3           for 1
    // 121             if initial at 1 then swaped to 2 so gues 1 wrong 
    // 321             after first step initial at 2 so swap 2 to 3  possible  and goes to 3 wrong
    // 131               also after 2nd step initial still at 3  so swap 1 to 3 possible  and goes to 1 so guess right  
    //                     so total correct ans is 1

            cout<<ans<<'\n';

}
