#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,1,2,3,2,4,2,5};
    vector<int> c = {3,3,1,1,2,2,4,4,5,5};
    int p=0;
    int q=0;
    int r=0;
    
    for(int i=0;i<answers.size();i++){
        if(a[i%5] == answers[i]){
            p++;
        }
        if(b[i%8] == answers[i]){
            q++;
        }
        if(c[i%10] == answers[i]){
            r++;
        }
    }
    cout<< p << q<< r;
    if(p>=q && p>=r){
        answer.push_back(1);
    }
    if(q>=p && q>=r){
        answer.push_back(2);
    }
    if(r>=p && r>=q){
        answer.push_back(3);
    }
    return answer;
}