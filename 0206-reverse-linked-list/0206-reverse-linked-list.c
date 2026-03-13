
struct ListNode* reverseList(struct ListNode* head) {
    int n=0,i=0;

    if(head==NULL)
    return head;
    
    struct ListNode* p=head;
    while(p!=NULL)
    {
        n++;
        p=p->next;
    }
    int arr[n];
    p=head;

    while(p!=NULL)
    {
        arr[i++]=p->val;
        p=p->next;
    }
    p=head;
    i=n-1;
    while(p!=NULL)
    {
        p->val=arr[i--];
        p=p->next;
    }

    return head;
    
}