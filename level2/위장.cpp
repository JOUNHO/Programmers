#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer=1;
    map<string,int> m;
    for(vector<string> cloth : clothes){
        m[cloth[1]]++;
    }
    for(auto iter : m){
        answer *= (iter.second+1);
    }
    answer--;
    
    
    return answer;
}