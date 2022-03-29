#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> v;
    vector<int> sdt;
    int scoreNum = -1;
    for(int i=0;i<dartResult.length();i++){
        int score=0;
        if(dartResult[i]>= '0' && dartResult[i] <= '9'){
            score = dartResult[i] - '0';
            if(dartResult[i+1] == '0'){
                score = 10;
                i++;
            }
            v.push_back(score);
            scoreNum++;
        } //점수
        
        if(dartResult[i] == 'S'){
            v[scoreNum] = pow(v[scoreNum],1);
        } else if(dartResult[i] == 'D'){
            v[scoreNum] = pow(v[scoreNum],2);
        } else if(dartResult[i] == 'T'){
            v[scoreNum] = pow(v[scoreNum],3);
        }// SDT
        
        if(dartResult[i] == '*'){
            v[scoreNum] *= 2; 
            if(scoreNum > 0) v[scoreNum-1] *=2;
        }else if(dartResult[i] == '#'){
            v[scoreNum] *=-1;
        }//옵션
    }
    for(int score : v){
        answer+=score;
    }
    
    return answer;
}