class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
      {
          return head;
      }
       ListNode* c=head;
       ListNode* p=nullptr;
       while(c!=nullptr)
       {
          ListNode*temp=new ListNode(c->val); 
          temp->next=p;
          p=temp;
          c=c->next;
       }
       while(head && p )
       {
           if(head->val!=p->val)
           {
               return false;
           }
           head=head->next;
           p=p->next;
       }
       return true;
    }
};
