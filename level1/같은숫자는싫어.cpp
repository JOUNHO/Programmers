#include <vector>
#include<algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> v) 
{
    vector<int> answer;

    v.erase(unique(v.begin(),v.end()),v.end());

    return v;
}

//unique : 연속된 값들 중 중복인 값은 맨뒤에 쓰레기값으로 저장 -> 쓰레기 값의 처음 위치로 리턴