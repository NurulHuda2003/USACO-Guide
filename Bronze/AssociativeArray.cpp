#include<bits/stdc++.h>
using namespace std;
#define ll long long

void query_solution(int q,map<ll,ll>&map){
    while (q--){
        int type;
        cin>>type;
        if(type==0){
            ll key,value;
            cin>>key>>value;
            map[key]=value;
        }
        else{
            ll key;
            cin>>key;
            if(map.find(key)!=map.end()){
                cout<<map[key]<<endl;
            }else{
                cout<<0<<endl;
            }
        }


        }
    }


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

//problem formulation
/*for input there is a 2 type of query:
                                        first or 0 query: insert value of v to k in array
                                        for second 1 query: print the position of that value in the array 
    constrains:
    k,v cant be greater than or equal 10^18 and greater or equal to 0
    q is less than or equal 10^6 and greater than 1 */
//unorder map makes its slower than map

    int q;
    cin>>q;
    //undorderd map use key value pair to store the value of k and v
    //unordered_map<ll,ll>map;
    map<ll,ll>map;

    query_solution(q,map);
    return 0;
}