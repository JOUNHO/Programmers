#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int flag=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            flag= i%2;
            answer += s[i];
            continue;
        }
        answer += (i%2==flag)? tolower(s[i]) : toupper(s[i]);
    }
    cout<<answer;


    return answer;
}