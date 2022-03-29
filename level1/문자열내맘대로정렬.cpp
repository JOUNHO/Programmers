#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int N=0;
bool compare(string i, string j){
    if(i[N] == j[N]) return i<j;
    return i[N]<j[N];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    N=n;
    sort(strings.begin(),strings.end(),compare);
    
    
    return strings;
}