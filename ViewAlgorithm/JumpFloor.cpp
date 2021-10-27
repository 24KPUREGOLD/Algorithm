//
// Created by TianBo on 2021/10/27.
//

#include "iostream"

using namespace std;

class Solution {
public:
    int jumpFloor(int number) {
        if(number <= 1)
            return 1;
        return jumpFloor(number-1) + jumpFloor(number-2);
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    cout<<s.jumpFloor(n)<<endl;
    return 0;
}