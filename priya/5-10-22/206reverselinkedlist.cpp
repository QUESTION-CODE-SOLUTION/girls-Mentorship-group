if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode *p=NULL,*c=head,*a=c->next;
        while(c!=NULL)
        {
            c->next=p;
            p=c;
            c=a;
            if(c->next!=NULL)
                a=c->next;
        }
        return p;
        
