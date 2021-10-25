//
// Created by TianBo on 2021/10/25.
//

#include "iostream"
#include "algorithm"

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if (pHead == nullptr)
            return nullptr;
        ListNode* pre = nullptr;
        ListNode* next = nullptr;

        while (pHead != nullptr)
        {
            next = pHead->next;
            pHead->next = pre;
            pre = pHead;
            pHead = next;
        }

        return pre;
    }
};

int main()
{
    Solution s;
    ListNode* pHead = new ListNode(1);
    ListNode* p1 = new ListNode(2);
    ListNode* p2 = new ListNode(3);
    pHead->next = p1;
    p1->next = p2;
    pHead = s.ReverseList(pHead);
    while (pHead != nullptr)
    {
        cout<<pHead->val;
        pHead = pHead->next;
    }
    return 0;
}