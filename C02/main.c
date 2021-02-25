#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);

int main(void)
{
	printf("========= %d =========\n", 0);
	char *src;
	char dest[10];

	src = "Hello";
	printf("src : %s\n", src);
	ft_strcpy(dest, src);
	printf("dest : %s\n", dest);
	printf("\n\n");

	printf("========= %d =========\n", 1);
	char dest2[6] = "abcde";
	char dest3[64] = "efghaskdfkjasdjfalksdjrlasjdrlkj";
	char dest4[6];
	printf("src : %s\n", src);
	ft_strncpy(dest2, src, 4);
	ft_strncpy(dest3, src, 4);
	strncpy(dest4, src, 4);
	printf("dest2[10] : %s\ndest3[16] : %s\n", dest2, dest3);
	printf("dest4[16] : %s", dest4);
	printf("\n\n");

	printf("========= %d =========\n", 2);
	char *str1 = "File 1";
	char *str2 = "2 file 2";
	char *str3 = "Q1";
	char str4[5];
	char *str5 = "01234";
	char *str6 = "asdf";
	char *str7 = "AbCd";
	char *str8 = "ABCD";
	char *str9 = " ab";
	char str10[5] = "ABCD";

	printf("str1 : %d\n", ft_str_is_alpha(str1));
	printf("str2 : %d\n", ft_str_is_alpha(str2));
	printf("str3 : %d\n", ft_str_is_alpha(str3));
	printf("str4 : %d\n", ft_str_is_alpha(str4));
	printf("str5 : %d\n", ft_str_is_alpha(str5));
	printf("str6 : %d\n", ft_str_is_alpha(str6));
	printf("str7 : %d\n", ft_str_is_alpha(str7));
	printf("str8 : %d\n", ft_str_is_alpha(str8));
	printf("str9 : %d\n", ft_str_is_alpha(str9));
	printf("str10 : %d\n", ft_str_is_alpha(str10));

	printf("\n\n");

	printf("========= %d =========\n", 3);

	char *in1 = "01234";
	char *in2 = " 01";
	char *in3 = "f01";
	char *in4 = "0 4";
	char *in5 = "9file";
	char *in6 = "0#0#";
	char *in7 = "$$";
	char *in8 = "\0";
	char *in9 = "";

	printf("in1 : %d\n", ft_str_is_numeric(in1));
	printf("in2 : %d\n", ft_str_is_numeric(in2));
	printf("in3 : %d\n", ft_str_is_numeric(in3));
	printf("in4 : %d\n", ft_str_is_numeric(in4));
	printf("in5 : %d\n", ft_str_is_numeric(in5));
	printf("in6 : %d\n", ft_str_is_numeric(in6));
	printf("in7 : %d\n", ft_str_is_numeric(in7));
	printf("in8 : %d\n", ft_str_is_numeric(in8));
	printf("in9 : %d\n", ft_str_is_numeric(in9));

	printf("\n\n");

	printf("========= %d =========\n", 4);

	char *lo1 = "01234";
	char *lo2 = "a 91";
	char *lo3 = "a#01b";
	char *lo4 = "\n42";
	char *lo5 = "0a1b";
	char *lo6 = "Z ";
	char *lo7 = "abcdefG";
	char *lo8 = "abcd";
	char *lo9 = "zyx";

	printf("lo1 : %s = %d \n", lo1, ft_str_is_lowercase(lo1));
	printf("lo2 : %s = %d \n", lo2, ft_str_is_lowercase(lo2));
	printf("lo3 : %s = %d \n", lo3, ft_str_is_lowercase(lo3));
	printf("lo4 : %s = %d \n", lo4, ft_str_is_lowercase(lo4));
	printf("lo5 : %s = %d \n", lo5, ft_str_is_lowercase(lo5));
	printf("lo6 : %s = %d \n", lo6, ft_str_is_lowercase(lo6));
	printf("lo7 : %s = %d \n", lo7, ft_str_is_lowercase(lo7));
	printf("lo8 : %s = %d \n", lo8, ft_str_is_lowercase(lo8));
	printf("lo9 : %s = %d \n", lo9, ft_str_is_lowercase(lo9));

	printf("\n\n");

	printf("========= %d =========\n", 5);
	char *up1 = "01234";
	char *up2 = "a 91";
	char *up3 = "a#01b";
	char *up4 = "\n42";
	char *up5 = "0a1b";
	char *up6 = "Z ";
	char *up7 = "abcdefG";
	char *up8 = "ABCD";
	char *up9 = "ZYX";

	printf("up1 : %s = %d \n", up1, ft_str_is_uppercase(up1));
	printf("up2 : %s = %d \n", up2, ft_str_is_uppercase(up2));
	printf("up3 : %s = %d \n", up3, ft_str_is_uppercase(up3));
	printf("up4 : %s = %d \n", up4, ft_str_is_uppercase(up4));
	printf("up5 : %s = %d \n", up5, ft_str_is_uppercase(up5));
	printf("up6 : %s = %d \n", up6, ft_str_is_uppercase(up6));
	printf("up7 : %s = %d \n", up7, ft_str_is_uppercase(up7));
	printf("up8 : %s = %d \n", up8, ft_str_is_uppercase(up8));
	printf("up9 : %s = %d \n", up9, ft_str_is_uppercase(up9));

	printf("\n\n");

	printf("========= %d =========\n", 6);

	char *str_printable;
	char *str_non_printable;
	char *str_non_printable2;

	str_printable = "Hell0#";
	str_non_printable = "hello\7F";
	str_non_printable2 = "\xff";
	printf("Hell0# : %d\n", ft_str_is_printable(str_printable));
	printf("hello\7F : %d\n", ft_str_is_printable(str_non_printable));
	printf("\\xff : %d\n", ft_str_is_printable(str_non_printable2));

	printf("\n\n");

	printf("========= %d =========\n", 7);
	char toup1[10] = "asdf";
	char toup2[10] = "aBcD";
	char toup3[10] = "3f2#";
	char toup4[10] = "!@#abC";

	printf("before toup1 : %s\n", toup1);
	ft_strupcase(toup1);
	printf("after toup1 : %s\n", toup1);

	printf("before toup2 : %s\n", toup2);
	ft_strupcase(toup2);
	printf("after toup2 : %s\n", toup2);

	printf("before toup3 : %s\n", toup3);
	ft_strupcase(toup3);
	printf("after toup3 : %s\n", toup3);

	printf("before toup4 : %s\n", toup4);
	ft_strupcase(toup4);
	printf("after toup4 : %s\n", toup4);

	printf("\n\n");

	printf("========= %d =========\n", 8);
	char tolo1[10] = "ASDF";
	char tolo2[10] = "aBcD";
	char tolo3[10] = "3F2#";
	char tolo4[10] = "!@#abC";

	printf("before tolo1 : %s\n", tolo1);
	ft_strlowcase(tolo1);
	printf("after tolo1 : %s\n", tolo1);

	printf("before tolo2 : %s\n", tolo2);
	ft_strlowcase(tolo2);
	printf("after tolo2 : %s\n", tolo2);

	printf("before tolo3 : %s\n", tolo3);
	ft_strlowcase(tolo3);
	printf("after tolo3 : %s\n", tolo3);

	printf("before tolo4 : %s\n", tolo4);
	ft_strlowcase(tolo4);
	printf("after tolo4 : %s\n", tolo4);
	printf("\n\n");

	printf("========= %d =========\n", 9);
	char c[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquate+et+un";
	char c2[100] = "sAlut, comment tu vas ? 42MOts quarAnte-deUx; ciNquate+eT+un";

	printf("before \n%s\nafter\n",c);
	printf("%s\n\n", ft_strcapitalize(c));
	printf("before \n%s\nafter\n", c2);
	printf("%s\n", ft_strcapitalize(c2));
	printf("\n\n");

	printf("========= %d =========\n", 10);
	char c10[20] = "c10 strlcpy to c20";
	char c20[20] = "c20";
	char c30[20] = "";
	char c40[20];
	printf("before\nc10 : %s\nc20 : %s\nc30 : %s\nc40 : %s\n", c10, c20, c30, c40);
	unsigned int ui = ft_strlcpy(c20, c10, 20);
	unsigned int ui2 = ft_strlcpy(c30, c10, 16);
	unsigned int ui3 = strlcpy(c40, c10, 17);
	printf("after\nc10 : %s\nc20 : %s\nc30 : %s\nc40 : %s\nc20 size is : %d\nc30 size is : %d\nc40 size is : %d\n", c10, c20, c30, c40, ui, ui2, ui3);

	printf("\n\n");

	printf("========= %d =========\n", 11);
	char nonP[25] = "Coucou\ntu vas bien ?";
	printf("before nonP\n%s\nafter\n", nonP);
	ft_putstr_non_printable(nonP);

	printf("\n\n");

	printf("========= %d =========\n", 12);

	printf("\n\n");
	return (0);
}
