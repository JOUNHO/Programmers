#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int l = s.length();
    if(!(l == 4 || l ==6)) return false; 
    for(int i=0;i<s.length();i++){
        if(!(s[i]>='0' && s[i]<='9')) return false;
    }
    return true;
}