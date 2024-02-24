#include <string>
#include <unordered_map>
#include <vector>
#include <limits>
#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    if(strs.empty() or strs.front().empty())
        return "";
    if(strs.size()==1)
        return strs.front();
    auto small= numeric_limits<int>::max();
    string shortest;
    string result;
    for(auto i=0;i<=strs.size();++i) {
        if(strs[i].size()<small) {
            small=strs[i].size();
            shortest=strs[i];
        }
    }
    for(auto i=0; i<strs.size();++i) {
        for (auto k=0;k<shortest.size();k++) {
            if(shortest[k]==strs[i][k])
                continue;
            return shortest.substr(0,k);
        }
    }
    return shortest;
}
auto main()->int {
    vector<string> strs = {"abca","aba","aaab"};
    cout<<longestCommonPrefix(strs);
    return 0;
}
// задача плохая(вышла только в матлабе) ГОВНО