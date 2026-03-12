
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* p=head;
    struct ListNode* q;
    while(p!=NULL && p->next!=NULL)
    {
        
        if(p->val == p->next->val)
        {
            q=p->next;
            p->next=q->next;
            q->next=NULL;
            free(q);
        }
        else
        {
            p=p->next;
        }
    }
    return head;
    
}