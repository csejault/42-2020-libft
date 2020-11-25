#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *ret;
	int		s;
	ret = NULL;
	while(lst)
	{
		s = ft_lstsize(ret);
		ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
		lst = lst->next;
		if (ft_lstsize(ret) == s)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
	}
	return (ret);
}
