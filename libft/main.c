#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "libft.h"

void	myprint(t_list *elem)
{
	//printf("%s ", (char *)elem->content);
	write(1, elem->content, elem->content_size);
	write(1, " ", 1);
}

t_list	*rot13(t_list *elem)
{
	char	*s;

	s = (char*)elem->content;
	while (*s)
	{
		if ((*s >= 110 && *s <= 122) || (*s >= 78 && *s <= 90))
			(*s) -= 13;
		else if ((*s >= 97 && *s <= 109) || (*s >= 65 && *s <= 77))
			(*s) += 13;
		s++;
	}
	return (ft_lstnew(elem->content, elem->content_size));
}

int main()
{
	char s[50] = "random string";
	printf("%s\n", ft_memmove(s, s + 2));

	t_list **l;
	l = malloc(sizeof(t_list*) * 50);
	char s1[5] = "lmao", s2[3] = "xd", s3[2] = "?";
	ft_lstpush(l, ft_lstnew(s1, 5));
	ft_lstpush(l, ft_lstnew(s2, 3));
	ft_lstpush(l, ft_lstnew(s3, 2));
	ft_putlst(*l);
	ft_putlst(ft_lstmap(*l, rot13));
	return 0;
}
