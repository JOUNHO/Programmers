#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(vector<int> v : commands){
        vector<int> temp;
        int i = v[0]-1;
        int j = v[1]-1;
        int k = v[2]-1;
        for(int idx=i;idx<=j;idx++){
            temp.push_back(array[idx]);
        }
        sort(temp.begin(),temp.end());
        answer.push_back(temp[k]);
    }

    return answer;
}