#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v(n+2,1);
    v[0]=0; v[n+1]=0;
    for(int l : lost) --v[l];
    for(int r : reserve) ++v[r];

    for(int i=1;i<=n;i++){
        if(v[i] == 0){
            if(v[i-1] == 2 ){
                ++v[i];
                --v[i-1];
            }
            else if(v[i+1] == 2){
                ++v[i];
                --v[i+1];
            }
        }
        
    }
    for(int i=1;i<n+1;i++){
        if(v[i] == 1 || v[i] ==2){
            answer++;
        }
    }
    return answer;
}