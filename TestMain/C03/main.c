#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;
    char *str5;
    char *str6;
    char *str7;
    char *str8;
    char *str9;
    char *str10;
    char *str11;
    char    *str_base;
    char    dest[100];
    char    dest2[100];
    char    *src;
    int        index;
    char *haystack;
    char *needle;
    char *result_c;
    char *result_ft;

    printf("= %d =========\n", 0);
    str1 = "Hello";
    str2 = "apple";
    str3 = "";
    str4 = "ABCD";
    str5 = "abcdEghe";
    str6 = "Hello World!";
    str7 = "HelLO wOrLd!";
    str8 = "hELlo WoRld!";
    str9 = "z";
    str10 = "Hello";
    str11 = "Hello ";

    printf("c  : %d\n", strcmp(str1, str2));
    printf("ft : %d\n", ft_strcmp(str1, str2));
    printf("c  : %d\n", strcmp(str3, str4));
    printf("ft : %d\n", ft_strcmp(str3, str4));
    printf("c  : %d\n", strcmp(str4, str5));
    printf("ft : %d\n", ft_strcmp(str4, str5));
    printf("c  : %d\n", strcmp(str4, str9));
    printf("ft : %d\n", ft_strcmp(str4, str9));
    printf("c  : %d\n", strcmp(str4, str5));
    printf("ft : %d\n", ft_strcmp(str4, str5));
    printf("c  : %d\n", strcmp(str6, str7));
    printf("ft : %d\n", ft_strcmp(str6, str7));
    printf("c  : %d\n", strcmp(str6, str8));
    printf("ft : %d\n", ft_strcmp(str6, str8));
    printf("c  : %d\n", strcmp(str10, str11));
    printf("ft : %d\n", ft_strcmp(str10, str11));
    printf("\n\n");

    printf("= %d =========\n", 1);
    printf("c  : %d\n", strncmp(str1, str2, 0));
    printf("ft : %d\n", ft_strncmp(str1, str2, 0));
    printf("c  : %d\n", strncmp(str3, str4, 1));
    printf("ft : %d\n", ft_strncmp(str3, str4, 1));
    printf("c  : %d\n", strncmp(str4, str5, 2));
    printf("ft : %d\n", ft_strncmp(str4, str5, 2));
    printf("c  : %d\n", strncmp(str4, str9, 3));
    printf("ft : %d\n", ft_strncmp(str4, str9, 3));
    printf("c  : %d\n", strncmp(str4, str5, 4));
    printf("ft : %d\n", ft_strncmp(str4, str5, 4));
    printf("c  : %d\n", strncmp(str6, str7, 5));
    printf("ft : %d\n", ft_strncmp(str6, str7, 5));
    printf("c  : %d\n", strncmp(str6, str8, 6));
    printf("ft : %d\n", ft_strncmp(str6, str8, 6));
    printf("c  : %d\n", strncmp(str10, str11, 5));
    printf("ft : %d\n", ft_strncmp(str10, str11, 5));
    printf("c  : %d\n", strncmp(str10, str11, 6));
    printf("ft : %d\n", ft_strncmp(str10, str11, 6));

    printf("\n\n");

    printf("= %d =========\n", 2);
    str_base = "Hello";
    src = " World";
    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : %s$\n", strcat(dest, src));
    printf("ft : %s$\n", ft_strcat(dest2, src));

    printf("\n\n");

    printf("= %d =========\n", 3);
    str_base = "Hello";
    src = " World";
    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : %s$\n", strncat(dest, src, 4));
    printf("ft : %s$\n", ft_strncat(dest2, src, 4));

    printf("\n\n");

    printf("= %d =========\n", 4);
    haystack = "Foo Bar Baz";
    needle = "Bar";
    result_c = strstr(haystack, needle);
    result_ft = ft_strstr(haystack, needle);
    printf("%p / %p\n", result_c, result_ft);
    printf("c  : %s$\n", result_c);
    printf("ft : %s$\n", result_ft);

    printf("\n\n");

    printf("= %d =========\n", 5);
    str_base = "hello";
    src = " good morning";
    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 0), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 0), dest2);

    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 5), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 5), dest2);

    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 7), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 7), dest2);

    index = 0;
    while (index < 6)
    {
        dest[index] = str_base[index];
        dest2[index] = str_base[index];
        index++;
    }
    printf("c  : (%lu) $%s$\n", strlcat(dest, src, 100), dest);
    printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 100), dest2);

    printf("\n\n");
    return (0);
}
