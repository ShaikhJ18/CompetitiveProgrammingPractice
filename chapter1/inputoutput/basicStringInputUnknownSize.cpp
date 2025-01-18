#include<bits/stdc++.h>

using namespace std;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    //this loop will continue to read the data until it finds a period
    while (cin >> s){
        //this case checks for compatibaility and breaks the loop to print the string
        if (s == "exit") break;
        cout << s << " ";
    }


}