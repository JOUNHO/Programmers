#include <string>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    auto a = sqrt(n);
    answer = (a-(int)a)==0 ? pow((a+1),2) : -1;
    return answer;
}