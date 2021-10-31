//
// Created by TianBo on 2021/10/31.
//最长递增子数组
//

#include "iostream"
#include "vector"
#include "set"

using namespace std;

class Solution {
public:
    /**
     *
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxLength(vector<int>& arr) {
        // write code here
        if(arr.size() <= 0)
            return 0;
        int p = 0;
        int length = 1;
        int maxLength = 1;

        for (int i = 1; i < arr.size(); ++i) {
            if(arr[i] > arr[i-1])
            {
                length++;
            }else{
                length = 1;
            }
            length > maxLength ? maxLength = length : maxLength = maxLength;
        }
        return maxLength;
    }
};

int main()
{
    Solution s;
    int a[8] = {3,3,2,1,3,3,3,1};
    vector<int> arr(a,a+8);
    cout<<s.maxLength(arr)<<endl;
    return 0;
}