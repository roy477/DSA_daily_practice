int isValid(char* s)
{
    char stack[100];
    int top=-1;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stack[++top]=s[i];
        else
        {
            if(top==-1) return 0;

            char t=stack[top--];

            if((s[i]==')' && t!='(') ||
               (s[i]=='}' && t!='{') ||
               (s[i]==']' && t!='['))
                return 0;
        }
    }

    return top==-1;
}