#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits) {
    if (digits.back() != 9) {
        digits.back()++;
        return digits;
    }
    for (int i = digits.size() - 1; i >= 0; --i) {
        if (digits[i] >= 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            return digits;
        }
    }
    digits.insert(digits.begin(),1);
    return digits;
}
/// говно задача.
