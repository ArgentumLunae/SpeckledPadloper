/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 12:12:03 by mteerlin      #+#    #+#                 */
/*   Updated: 2022/08/02 12:31:58 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	b_printf(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	write(1, str, cnt);
	return (cnt);
}

int	main(void)
{
	b_printf("Hello World!\n");
	return (0);
}
