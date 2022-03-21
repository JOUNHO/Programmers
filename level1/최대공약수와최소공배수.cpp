#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int mx=1;
    int mn=1;
    
    int l = n>=m? m : n;
    for(int i=2;i<=l;i++){
        if((n%i)==0 && (m%i)==0){
            mx=i;
        }
    }
    for(int i=2;i<=n*m;i++){
        if((i%n)== 0 &&(i%m)==0){
            mn=i;
            break;
        }
    }
    answer={mx,mn};
    
    
    return answer;
}


// 2번째 방법 유클리드 호제법
#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b){
    
    while(a%b!=0){
        int r= a%b;
        a=b;
        b=r;
    }
    
    return b;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer = {gcd(n,m), (n*m)/gcd(n,m)};
    
    return answer;
}