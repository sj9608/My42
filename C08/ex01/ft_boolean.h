#ifndef __FT_BOOLEAN_H__
#define __FT_BOOLEAN_H__
typedef enum
{
	false = 0,
	true = 1
} t_bool;

#define FALSE false
#define TRUE true

#define EVEN(nbr) (nbr % 2 == 0)

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

#define SUCCESS 0
#endif
