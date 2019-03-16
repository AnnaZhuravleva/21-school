#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int count(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *findw(char *str)
{
    int c;
    char *word;
    int i;

    c = 0;
    i = 0;
    while (str[c] != '\t' && str[c] != ' ' && str[c] != '\n' && str[c ] != '\0')
    {
        c++;
    }
    word = (char *)malloc(sizeof(*word) * (c + 1));
    while (c > 0)
    {
        word[i] = str[i];
        c--;
        i++;
    }        
    word[i] = '\0';
    return(word);            
}

char *f(char *str)
{
    char **dic;
    int i;
    int size;
    int k;

    k  = 0;
    size = 0;
    while (str[k])
    {
        if (str[0] == '\t' || str[0] == ' ' || str[0] == '\n' || str[0] == '\0')
        {
            str++;
        }
        else
        {
            dic = (char **)malloc(k + 2);
            dic[k] = findw(str);
            k++;
            while (str[0] != '\t' && str[0] != ' ' && str[0] != '\n' && str[0] != '\0')
                str++;
        }
    }
    dic[k + 2] = 0;
    return(*dic);
}

int main()
{
    char **d;
    int i;

    i = 0;
    d = (char **)malloc(char * 6);
    d =  f("hello world jj kkk duu");
    while (i <= 6)
    {
        printf("%s ", d[i]);
        i++;
    }
        
    return(0);
}