#ifndef _MY_H_
# define _MY_H_

typedef enum e_bool
{
    false,
    true
} t_bool;

int		my_getnbr(const char *str);
unsigned int	my_isalnum(char c);
char my_lowcase(char c);
void		my_putchar(char c);
void		my_putnbr(int n);
void		my_putstr(const char *str);
void my_sort_str_tab(char **tab, unsigned int size);
void my_sort_rev_str_tab(char **tab, unsigned int size);
char		*my_strcat(char *dest, const char *src);
int		my_strcmp(const char *s1, const char *s2);
char *my_strdup(const char *src);
unsigned int	my_strlen(const char *str);
char *my_strcpy(char *dest, const char *src);
char		*my_trim(const char *str);

#endif /* _MY_H */
  
  




  

  
