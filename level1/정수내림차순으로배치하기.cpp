#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a,int b){
    return a>=b;
}

long long solution(long long n) {
    string answer = "";
    string s = to_string(n);
    vector<int> v;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]-'0');        
    }
    sort(v.begin(),v.end(),cmp);
    for(int a : v){
        answer+=to_string(a);
    }
    return stol(answer);
}



//2번째 풀이 string도 정렬가능~!
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(char a,char b){
    return a>=b;
}

long long solution(long long n) {
    string answer = "";
    string s = to_string(n);
    sort(s.begin(),s.end(),cmp);
    return stol(s);
}


