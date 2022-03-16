#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool sosu(int num){
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> v(nums.size());
    v[0]=1;
    v[1]=1;
    v[2]=1;

    do{
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(v[i]){
                sum += nums[i];
            }
        }
        if(sosu(sum)){
            answer+=1;
        }
    }while(prev_permutation(v.begin(),v.end()));


    return answer;
}