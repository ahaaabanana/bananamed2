#include "libft.h"

void        del(void *content, size_t content_size)
{
    free(content);
    (void)content_size;
}

t_list      *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *newlist;
    t_list *toplist;
    t_list *elem;
    
    toplist = newlist = NULL;
    if (lst)
        while (lst)
        {
            if (toplist)
            {
                if ((elem = f(lst)))
                {
                    newlist->next = elem;
                    newlist = elem;
                }
                else
                {
                    ft_lstdel(&toplist, &del);
                    return (NULL);
                }
            }
            else
                toplist = newlist = f(lst);
            lst = lst->next;
        }
    return (toplist);
}
/* 
if (!(lst && f))

        return (NULL);
    if ((elem = f(lst)))
    {
        firstelem = elem;
        newlist = firstelem;
    }
    else
        return (NULL);
    while (lst->next)
    {
        if (!(elem = f(lst)))
        {
            free(firstelem);
            return (NULL);
        }
        newlist->next = elem;
        newlist = elem;
        lst = lst->next;
    } */
    