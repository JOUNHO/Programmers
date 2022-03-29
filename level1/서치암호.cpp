#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i] <='z'){
            s[i] = (s[i]+n-'a')%26+'a';
        }else if(s[i]>='A' && s[i]<='Z'){
            s[i] = (s[i]+n-'A')%26+'A';
        }
    }
    return s;
}