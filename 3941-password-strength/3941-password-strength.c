int passwordStrength(char* password) {

    int visited[256]={0};
    int count=0;

    for(int i=0;password[i]!='\0';i++){
        unsigned char ch=password[i];

        if(visited[ch]==0){
        visited[ch]=1;
        if(ch>='a'&& ch<='z'){
            count+=1;
        }
        else if(ch>='A'&& ch<='Z'){
            count+=2;
        }
        else if(ch>='0' && ch<='9'){
            count+=3;
        }
        else
        {
            count+=5;
        }
    }

    
    
}
return count;

}