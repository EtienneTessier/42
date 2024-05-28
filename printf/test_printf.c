#include <stdio.h>
#include "printf.h"
#include <limits.h>

int	main()
{
	int	result;
	char str[20] = "pourquoi pas";

	result = ft_printf("test 1 %%\n");
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 2 %c\n", 'a');
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 3 %s\n", "j espere que ca marche");
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 4 %s\n", str);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 5 %p\n", str);
	ft_printf(" taille = %d\n", result);

	result = printf("test 6 %p\n", str);
	printf(" taille = %d\n", result);

	result = ft_printf("test 7 %x\n", 127);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 8 %X\n", 127);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 9 %d\n", 50);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 10 %d\n", -50);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 11 %s %d\n", "Mission", 44);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 12 %s %d%d%d\n", "Mission");
	ft_printf(" taille = %d\n", result);

	result = printf("test 12b %s %d%d%d\n", "Mission");
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 13 %d\n", INT_MIN);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 14 %d\n", INT_MAX);
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 15 %s\n", "");
	ft_printf(" taille = %d\n", result);

	result = ft_printf("test 16 %s\n", NULL);
	ft_printf(" taille = %d\n", result);

	result = printf("test 16b %s\n", NULL);
	ft_printf(" taille = %d\n", result);
}
