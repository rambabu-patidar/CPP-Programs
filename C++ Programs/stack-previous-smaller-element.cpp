#include<bits/stdc++.h>
using namespace std;
void prev_small_element(int arr[],int n){
    stack<int> st;
    vector<int> v;
    for( int i=0;i<n;i++){
        while( !st.empty() and st.top() >= arr[i]){
            st.pop();
        }
        if( st.empty()){
            
            v.push_back(-1);

        }
        else{
            v.push_back(st.top());
            
        }
        st.push(arr[i]);
    }

    for( int i = 0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
        
    }
}
int main(){

    int arr[] ={1,3,2,-1,6,9,2,6,2,8,5,0};
    for( auto i: arr)
        cout<<i<<" ";
        cout<<endl;
    prev_small_element(arr, 12);
    
    return 0;
}

// see concept used in anuj bhaiya video
