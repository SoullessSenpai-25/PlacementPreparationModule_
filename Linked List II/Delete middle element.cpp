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
    ListNode* deleteMiddle(ListNode* head) {
           if(head==NULL || head->next==NULL)
            return NULL;
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        int mid=count/2;
       
        ListNode* curr=head;
        ListNode* pre=NULL;
        int cnt=1;
        while(cnt<=mid){
            pre=curr;
            curr=curr->next;
            cnt++;
        }
        pre->next=curr->next;
        curr->next=NULL;
 return head;
        
    }
};
