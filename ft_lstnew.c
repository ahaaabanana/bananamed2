#include "libft.h"

t_list    *ft_lstnew(void const *content, size_t content_size)
{
    t_list *link;

    link = (t_list*)malloc(sizeof(*link));
    if (link)
    {
        if (!content)
        {
            link->content = NULL;
            link->content_size = 0;
        }
        else
        {
            link->content = ft_memalloc(content_size);
            if (!link->content)
            {
                free(link);
                return (NULL);
            }
            link->content = ft_memcpy(link->content, content, content_size);
            link->content_size = content_size;
        }
        link->next = NULL;
    }
    return (link);
} //check for null