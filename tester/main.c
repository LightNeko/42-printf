/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znicola <znicola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:00:54 by znicola           #+#    #+#             */
/*   Updated: 2024/11/01 22:32:23 by znicola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	char *str = "abc";
	printf("\033[35mc FLAG\033[0m\n");
	int len = printf("printf:        \033[32m%c\033[0m\n", 'A');
	int check = ft_printf("ft_printf:     \033[32m%c\033[0m\n", 'A');
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35ms FLAG\033[0m\n");
	len = printf("printf:        \033[32m%s\033[0m\n", "abc");
	check = ft_printf("ft_printf:     \033[32m%s\033[0m\n", "abc");
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35mp FLAG\033[0m\n");
	len = printf("printf:        \033[32m%p\033[0m\n", str);
	check = ft_printf("ft_printf:     \033[32m%p\033[0m\n", str);
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35md and i FLAG\033[0m\n");
	len = printf("printf:        \033[32m%d and %i\033[0m\n", 21474836500, -21474836483);
	check = ft_printf("ft_printf:     \033[32m%d and %i\033[0m\n", 21474836500, -21474836483);
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35mu FLAG\033[0m\n");
	len = printf("printf:        \033[32m%u\033[0m\n", 4294967295);
	check = ft_printf("ft_printf:     \033[32m%u\033[0m\n", 4294967295);
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35mx FLAG\033[0m\n");
	len = printf("printf:        \033[32m%x\033[0m\n", 255);
	check = ft_printf("ft_printf:     \033[32m%x\033[0m\n", 255);
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35mX FLAG\033[0m\n");
	len = printf("printf:        \033[32m%X\033[0m\n", 255);
	check = ft_printf("ft_printf:     \033[32m%X\033[0m\n", 255);
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35m%% FLAG\033[0m\n");
	len = printf("printf:        \033[32m%%\033[0m\n");
	check = ft_printf("ft_printf:     \033[32m%%\033[0m\n");
	printf("printf_len:    \033[32m%d\033[0m\n", len);
	printf("ft_printf_len: \033[32m%d\033[0m\n", check);
	printf("\033[35m- FLAG\033[0m\n");
	printf("\n");
	printf("\033[35m0 FLAG\033[0m\n");
	printf("\n");
	printf("\033[35m. FLAG\033[0m\n");
	printf("\n");
	printf("\033[35m# FLAG\033[0m\n");
	printf("\n");
	printf("\033[35m[SPACE] FLAG\033[0m\n");
	printf("\n");
	printf("\033[35m+ FLAG\033[0m\n");
	printf("\n");
	printf("\033[35mMIXED FLAGS\033[0m\n");
	printf("");
	printf("");
	printf("");
	printf("");
	printf("");
	printf("");
	printf("");


}
