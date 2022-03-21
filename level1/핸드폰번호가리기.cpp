#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int l = phone_number.length();
    for(int i=0;i<l-4;i++){
        answer+="*";
    }
    answer = answer+ phone_number.substr(l-4);
    return answer;
}