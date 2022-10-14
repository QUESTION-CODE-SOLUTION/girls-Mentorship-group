class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         int l=1;
        ListNode*previous=head,*current=head,*forward=head;
        while(current!=0)
        {
            if(l<k)
            previous =previous->next;
            if(l>k)
            forward=forward->next;
            current=current->next;
            l++;
        }
           int temp =previous->val;
            previous->val =forward->val;
            forward->val=temp;
    
        return head ;
        
    }
};
