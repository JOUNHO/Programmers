#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mn = *min_element(arr.begin(),arr.end());
    auto it= find(arr.begin(),arr.end(),mn);
    arr.erase(it);
    if(arr.size() == 0) arr.push_back(-1);
    return arr;
}