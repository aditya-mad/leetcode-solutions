/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> one, two, sum;
        ListNode *arr1 = l1, *arr2 = l2;
        int carry = 0, temp;
        while (arr1)
        {
            one.push(arr1->val);
            arr1 = arr1->next;
        }
        while (arr2)
        {
            two.push(arr2->val);
            arr2 = arr2->next;
        }

        while (!one.empty() && !two.empty())
        {
            temp = one.top() + two.top() + carry;
            carry = temp > 9 ? temp / 10 : 0;
            sum.push(temp % 10);
            one.pop();
            two.pop();
        }

        while (!one.empty())
        {
            temp = carry + one.top();
            carry = temp > 9 ? temp / 10 : 0;
            sum.push(temp % 10);
            one.pop();
        }
        while (!two.empty())
        {
            temp = carry + two.top();
            carry = temp > 9 ? temp / 10 : 0;
            sum.push(temp % 10);
            two.pop();
        }

        if (carry)
            sum.push(carry);

        ListNode *ans = new ListNode(sum.top());
        sum.pop();

        arr1 = ans;

        while (!sum.empty())
        {
            arr1->next = new ListNode(sum.top());
            arr1 = arr1->next;
            sum.pop();
        }
        return ans;
    }
};