#include <stdio.h> 

int	main(void)
{
	int	ret1, ret2;

	// 1. Test avec %c (caractères simples)
	printf("\n=== Test %%c ===\n");
	ret1 = ft_printf("ft_printf : [%c]\n", 'A');
	ret2 = printf("printf    : [%c]\n", 'A');
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 2. Test avec %s (chaînes de caractères)
	printf("\n=== Test %%s ===\n");
	ret1 = ft_printf("ft_printf : [%s]\n", "Hello, 42!");
	ret2 = printf("printf    : [%s]\n", "Hello, 42!");
	printf("Retours   : ft_printf = %d, printf = %d\n", ret1, ret2);

	// 3. Test avec %p (pointeurs)
	printf("\n=== Test %%p ===\n");
	int	num = 42;
	ret1 = ft_printf("ft_printf : [%p]\n", &num);
	ret2 = printf("printf    : [%p]\n", &num);
	printf("Retours   : ft_printf = %d, printf = %d\n", ret1, ret2);

	ret1 = ft_printf("ft_printf : [%p]\n", NULL);
	ret2 = printf("printf    : [%p]\n", NULL);
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 4. Test avec %d et %i (entiers signés)
	printf("\n=== Test %%d / %%i ===\n");
	ret1 = ft_printf("ft_printf : [%d]\n", 42);
	ret2 = printf("printf    : [%d]\n", 42);
	printf("Retours   : ft_printf = %d, printf = %d\n", ret1, ret2);

	ret1 = ft_printf("ft_printf : [%i]\n", -42);
	ret2 = printf("printf    : [%i]\n", -42);
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 5. Test avec %u (entiers non signés)
	printf("\n=== Test %%u ===\n");
	ret1 = ft_printf("ft_printf : [%u]\n", 3000000000);
	ret2 = printf("printf    : [%u]\n", 3000000000U);
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 6. Test avec %x et %X (hexadécimaux)
	printf("\n=== Test %%x / %%X ===\n");
	ret1 = ft_printf("ft_printf : [%x]\n", 255);
	ret2 = printf("printf    : [%x]\n", 255);
	printf("Retours   : ft_printf = %d, printf = %d\n", ret1, ret2);

	ret1 = ft_printf("ft_printf : [%X]\n", 255);
	ret2 = printf("printf    : [%X]\n", 255);
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 7. Test avec %%
	printf("\n=== Test %% ===\n");
	ret1 = ft_printf("ft_printf : [%%]\n");
	ret2 = printf("printf    : [%%]\n");
	printf("Retours   : ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// 8. Cas combinés et chaînes complexes
	printf("\n=== Cas combinés ===\n");
	ret1 = ft_printf("ft_printf : [%c %s %p %d %u %x %%]\n", 'A', "Hello", &num, -42, 3000000000, 255);
	ret2 = printf("printf    : [%c %s %p %d %u %x %%]\n", 'A', "Hello", &num, -42, 3000000000U, 255);
	printf("Retours   : ft_printf = %d, printf = %d\n", ret1, ret2);

	return (0);
}
