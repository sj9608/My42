#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (!to_find[0])
        return str;
    while (str[i])
    {
        j = 0;
        while(str[i + j] == to_find[j])
        {
            j++;
            if(to_find[j] == '\0')
                return &str[i];
        }
        i++;
    }
    return (0);
}
int main()
{
    char str1[20] = "12345678";
    char str2[20] = "12345678";
    char str3[10] = "64";
    // char str4[10] = str3;
    printf("%s\n", ft_strstr(str1, str3));
    printf("%s\n\n", strstr(str2, str3));
    return 0;
}
