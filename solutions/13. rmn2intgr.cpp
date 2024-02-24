#include <string>
#include <unordered_map>
using namespace std;

const unordered_map<char, int> dick = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};

int romanToInt(string s) {
    auto sum=0;
    for(int i=static_cast<int>(s.size()-1);i>=0;--i) {
        const auto curr= dick.at(s[i]);
        if(i==0) {
            sum+=curr;
            break;
        }
        const auto prev= dick.at(s[i-1]);
        if(curr>prev) {
            sum-=prev;
            sum+=curr;
            i--;
            continue;
        }
        sum+=curr;
    }
    return sum;
}
// с большой помощью(лузер)