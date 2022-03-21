#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0;i<arr1.size();i++ ){
        vector<int> a1 = arr1[i];
        vector<int> a2 = arr2[i];
        vector<int> newTemp;
        for(int j=0;j<a1.size();j++){
            newTemp.push_back(a1[j]+a2[j]);            
        }
        answer.push_back(newTemp);
    }
    return answer;
}