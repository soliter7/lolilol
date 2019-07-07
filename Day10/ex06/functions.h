#ifndef FUNCTIONS_H
# define FUNCTIONS_H

typedef struct	s_opp
{
	char	*operator;
	void	(*function)(int, int);
}				t_opp;

void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);

int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_strcmp(char *s1, char *s2);

#endif
