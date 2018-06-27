#ifndef _MY_H_
# define _MY_H_

typedef enum e_bool
{
    false,
    true
} t_bool;

char		**malloc2d_char(unsigned int row, unsigned int column);
void		free2d_char(char **array2d, unsigned int row);
int		my_getnbr(const char *str);
unsigned int	my_isalnum(char c);
void		my_putchar(char c);
void		my_putnbr(int n);
void		my_putstr(const char *str);
char		*my_strcat(char *dest, const char *src);
int		my_strcmp(const char *s1, const char *s2);
char *my_strdup(const char *src);
unsigned int	my_strlen(const char *str);
char *my_strcpy(char *dest, const char *src);
char		*my_trim(const char *str);

#endif /* _MY_H */
  
  




  

  
