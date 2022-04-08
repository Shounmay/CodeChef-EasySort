#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include <fstream>
#include<string>
using namespace std;







int main(){

    int n,t;

    cin>>t;

    for(int q=1;q<=t;q++){
        vector<int>arr;

        cin>>n;

        int cnt=0;

        int swap_cnt=0;

        int num;

        vector<pair<int,int>>tb;

        

        for(int i=0;i<n;i++){

            cin>>num;
            
            arr.push_back(num);

            tb.push_back({arr[i],i});

           

        }

        sort(tb.begin(),tb.end());

        for(int i=0;i<n;i++){
            pair<int,int>p=tb[i];

            int val=p.first;
            int ind=p.second;

            if(i!=ind){
                swap_cnt++;

                swap(tb[i],tb[ind]);
                i--;
            }

        }

        cout<<"Case "<<q<<": "<<swap_cnt<<endl;

        

        
    }
   
    

    

    

	

}