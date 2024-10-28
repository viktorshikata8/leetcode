#include <vector>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> const&nums, const int target) {
    for (auto i = 0; i < nums.size() - 1; ++i) {
        for (auto j = i + 1; j < nums.size(); ++j) {
            if (nums[j] + nums[i] == target)
                return {i, j};
        }
    }
    return {};
}
auto main()->int {
    auto nums=vector<int>{44,64,847684,465,123};
    auto result=twoSum(nums,108);
    if(result.empty())
        cout<<"/7oLLLIeJl HaXyu"<<endl;
    else
        for (auto num :result)
            cout<<num<<" ";
    return 0;
}
