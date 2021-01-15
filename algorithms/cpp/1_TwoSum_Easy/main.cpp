#include <iostream>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] + nums[j] == target) {
                return vector<int> {j, i};
            }
        }
    }


    return nums;
}


int main() {
    
    vector<int> v1 {2,7,11,15};
    int t1 = 9;
    vector<int> v2 {3,2,4};
    int t2 = 6;
    vector<int> v3 {3,3};
    int t3 = 6;

    cout << "[" << twoSum(v1,t1)[0] << ", " << twoSum(v1, t1)[1] << "]\n";

    cout << "[" << twoSum(v2,t2)[0] << ", " << twoSum(v2, t2)[1] << "]\n";

    cout << "[" << twoSum(v3,t3)[0] << ", " << twoSum(v3, t3)[1] << "]\n";



    return 0;
}