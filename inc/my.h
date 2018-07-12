/*
** my.h for libmy in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Thu Jul 12 14:28:06 2018 HABI Açal
** Last update Thu Jul 12 14:28:18 2018 HABI Açal
*/
#ifndef		_MY_H_
# define	_MY_H_

typedef enum	e_bool
{
		false,
		true
}		t_bool;

int		my_getnbr(const char *str);
unsigned int	my_isalnum(char c);
char		my_lowcase(char c);
void		my_putchar(char c);
void		my_putnbr(int n);
void		my_putstr(const char *str);
void		my_revert_tab(char **tab, unsigned n);
void		my_sort_str_tab(char **tab, unsigned int size);
void		my_sort_rev_str_tab(char **tab, unsigned int size);
char		*my_strcat(char *dest, const char *src);
int		my_strcmp(const char *s1, const char *s2);
char		*my_strncpy(char *dest, const char *src, unsigned int n);
char		*my_strrcpy(char *dest, const char *src, unsigned int r);
char		*my_strdup(const char *src);
char		*my_strndup(char *str, unsigned int n);
char		*my_strrdup(char *str, unsigned int r);
unsigned int	my_strlen(const char *str);
char		*my_strcpy(char *dest, const char *src);
char		*my_trim(const char *str);

#endif		/* _MY_H */
  
  




  

  
