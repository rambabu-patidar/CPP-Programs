#include<iostream>
#include<stack>
using namespace std;

void reverseString( string  s){

    stack<string> st;

    for( int i=0;i<s.length(); i++){
        string word = "";

        while(s[i]!= ' ' && i< s.length()){
            word += s[i];
            i++;

        }
        st.push(word);
    }

   while(!st.empty()){
       cout<<st.top()<<" ";
       st.pop();
   }
    return;
}

int main(){

    string s = "Hello, Rambabu how are you.";
    reverseString(s);
    
    return 0;
}