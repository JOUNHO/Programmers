#include <string>
#include <vector>
#include <iostream>
using namespace std;


int solution(vector<vector<int>> sizes) {
    int answerMax =0;
    int answerMin =0;
    for(vector<int> size : sizes){
        int maxValue = max(size[0],size[1]);
        int minValue = min(size[0],size[1]);
        answerMax = max(answerMax,maxValue);
        answerMin = max(answerMin,minValue);
    }
    return answerMax*answerMin;
    
    
}