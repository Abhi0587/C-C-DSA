bool isPalindrome(struct ListNode* head) {

    int n=0;

    struct ListNode* p=head;
    

    while(p!=NULL){
        n++;
        p=p->next;
    }

    int *arr=(int *)malloc(n*sizeof(int));

    p=head;
    int i=0;

    while(p!=NULL){
        arr[i]=p->val;
        p=p->next;
        i++;
    }
    
    int left=0;
    int right=i-1;

    while(left<right){
        if(arr[left]!=arr[right]){
            free(arr);
            return false;
        }
        left++;
        right--;
    }

    free(arr);
    return true;

}