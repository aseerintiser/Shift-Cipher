#include<stdio.h>
#include<string.h>

int main()
{
    int k,i;
    char str[100],p;

    printf("Enter a message to decrypt: ");
    gets(str);
    printf("Enter the key: ");
    scanf("%d",&k);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            p=str[i]-'A';
            if(p-k>=0) p=(p-k)%26;
            else p=(p-k)%26+26;  //if (p-k) is negative, the mod becomes negative. 26 is added to convert the mod into positive.
            printf("%c",p+'A');
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            p=str[i]-'a';
            if(p-k>=0) p=(p-k)%26;
            else p=(p-k)%26+26;
            printf("%c",p+'a');
        }
        else
            printf ("%c",str[i]);
    }
    return 0;
}

