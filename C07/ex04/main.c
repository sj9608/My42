#include <stdio.h>

int				ft_strlen(char *str);
int				is_space(char c);
int				is_base_valid(char *base);
char			*ft_nbr_to_base(int nbr, char *base);
int				ft_nbr_atoi(char *str, char *base);
char			*ft_convert_base(char *nbr, char *base_from, char *base_to);
int				ft_check_strnum(char str, char *base);

int		main(void)
{
	char str[10]= "123";
	printf("%s", ft_convert_base(str, "01", "0123456789"));
	return (0);
}
