#include "libft.h"

void        ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
    t_list *first;

    if (!(alst && *alst && del))
        return ;
    first = *alst;
    while (first)
    {
        del(first->content, first->content_size);
        free(first);
        first = first->next;   
    }
    *alst = NULL;
}