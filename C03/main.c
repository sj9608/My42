#include <stdio.h>
#include <string.h>

int 	ft_strcmp(char *s1, char *s2);



int main(void)
{
	printf("========= %d =========\n", 0);

	char s01[] = "hello";
	char s02[] = "hello";
	char s03[] = "h\xa0llo";
	char s04[] = "";

	printf("strcmp s01 = s02 ? : %d\n", strcmp(s01, s02));
	printf("ft_strcmp s01 = s02 ? : %d\n", ft_strcmp(s01, s02));
	printf("strcmp s01 = s03 ? : %d\n", strcmp(s01, s03));
	printf("ft_strcmp s01 = s03 ? : %d\n", ft_strcmp(s01, s03));
	printf("strcmp s01 = s04 ? : %d\n", strcmp(s01, s04));
	printf("ft_strcmp s01 = s04 ? : %d\n", ft_strcmp(s01, s04));
	printf("\n\n");

	printf("========= %d =========\n", 1);

	char ss01[] = "h\x58llo";
	char ss02[] = "h\x58lloa";
	char ss03[] = "h\x5allo";
	char ss04[] = "";

	printf("strncmp ss01 = ss02 ? : %d\n", strncmp(ss01, ss02, 6));
	printf("ft_strncmp ss01 = ss02 ? : %d\n", ft_strncmp(ss01, ss02, 6));
	printf("strncmp ss01 = ss03 ? : %d\n", strncmp(ss01, ss03, 3));
	printf("ft_strncmp ss01 = ss03 ? : %d\n", ft_strncmp(ss01, ss03, 3));
	printf("strncmp ss01 = ss04 ? : %d\n", strncmp(ss01, ss04,0));
	printf("ft_strncmp ss01 = ss04 ? : %d\n", ft_strncmp(ss01, ss04,0));
	printf("\n\n");

	printf("========= %d =========\n", 2);

	char sss01[20] = "hello";
	char sss02[20] = "world";
	char sss03[20] = "";

	printf("sss01 : %s\n", sss01);
	printf("sss02 : %s\n", sss02);
	printf("sss03 : %s\n", sss03);
	ft_strcat(sss03, sss01);
	strcat(sss01, sss02);
	printf("ft_strcat(sss03, sss01) = %s\n", sss03);
	printf("strcat(sss01, sss02) = %s\n", sss01);

	printf("\n\n");

	printf("========= %d =========\n", 3);

	char c001[100] = "hello";
	char c002[100] = " world";
	char c003[100] = "";
	char c004[100];

	printf("c001 : %s\n", c001);
	printf("c002 : %s\n", c002);
	printf("c003 : %s\n", c003);
	ft_strncat(c003, c001, 4);
	strncat(c004, c001, 4);
	printf("ft_strcat(c003, c001) = %s\n", c003);
	printf("strcat(c001, c002) = %s\n", c004);
	printf("\n\n");

	printf("========= %d =========\n", 4);

	printf("\n\n");

	printf("========= %d =========\n", 5);

	printf("\n\n");
	return (0);
}
