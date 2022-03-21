#include <string>
#include <vector>

using namespace std;
// 비트연산자
string solution(int num) {    
    string answer =  num&1 ? "Odd" : "Even";
    return answer;
}