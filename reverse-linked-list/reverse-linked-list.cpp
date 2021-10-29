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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pPre = head;
        ListNode *pCur = nullptr;
        ListNode *pTmp = nullptr;
        while(pPre) {
            pTmp = pPre->next;
            pPre->next = pCur;
            pCur = pPre;
            pPre = pTmp;
        }
        return pCur;
    }
};