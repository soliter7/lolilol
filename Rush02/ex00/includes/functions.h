#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# define BUFSIZE (256)
# define COLLE00 (1)
# define COLLE01 (2)
# define COLLE02 (4)
# define COLLE03 (8)
# define COLLE04 (16)
# define COLLE_SQUARE (32)
# define COLLE_RECTANGLE (64)
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_tab
{
	int		max_width;
	int		length;
	char	**input;
}				t_tab;

static const char g_names[][64] = {
	"colle-00",
	"colle-01",
	"colle-02",
	"colle-03",
	"colle-04",
	"carre",
	"rectangle"
};

int				find_character(char *str, char c, int end);
int				ft_strcmp(char *s1, char *s2);
int				identify_colle(t_tab file);
int				count_bits(int colle);
int				get_colle(t_tab file, char *charset);
int				match_strings(char *s1, char *s2);
char			**split(char *str);
char			*read_file(int fd);
char			*ft_strncpy(char *dest, char *src, int dest_len);
void			print(char *str);
void			print_colle(t_tab file, int colle);
void			concat_strings(char **dest, char *src, int amount);

#endif
