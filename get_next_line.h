#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h> 
# include <unistd.h> 

# if BUFFER_SIZE < 0
#  define SIZE 0
# else
#  define SIZE BUFFER_SIZE
# endif

char	*get_next_line(int fd);

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(const char *str, int s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *str);

#endif