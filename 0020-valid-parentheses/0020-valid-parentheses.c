struct Node{
    char data;
    struct Node* next;
};

struct Node* top=NULL;

void push(char x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp!=NULL){
        temp->data=x;
        temp->next=top;
        top=temp;
        
    }
}
char pop(){
    char x=-1;
    if(top!=NULL){
        struct Node*p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}

bool isValid(char* s) {

    while(top!=NULL){
       pop();
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('|| s[i]=='{'|| s[i]=='['){
            push(s[i]);
        }
        else if(s[i]==')'|| s[i]=='}'|| s[i]==']'){
            if(top==NULL){
                return false;
            }

            if(s[i]==')' && top->data!='('||
               s[i]=='}' && top->data!='{'||
               s[i]==']' && top->data!='['){
                return false;
               }
               pop();
               
        }

    }
    return top==NULL; 
}