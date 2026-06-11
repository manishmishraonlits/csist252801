#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{ 
            int number;
            struct linked_list *next;

};
typedef struct linked_list node;

int main(void)
{
       int n;
       node *head = NULL;
       void print(node *p);
       node *insert_Sort(node *p, int n);

       printf("Input the list of numbers.\n");
       printf("At end, type -999.\n");
       scanf("%d",&n);

       while(n != -999)
       {
        if(head ==NULL)
        {
            head = (node *)malloc(sizeof(node));
            head ->number =n;
            head->next = NULL;
        }
        else
        {
            head = insert_Sort(head,n);
        }
        scanf("%d", &n);
       }
       printf("\n");
       print(head);
       print("\n");
}
node *insert_sort(node *list, int x)
{
        node *p1, *p2, *p;
        p1 = NULL;
        p2 = list;

        for( ; p2->number < x ; p2 = p2->next)
        {
            p1=p2;

            if(p2->next == NULL)
            {
                p2 = p2->next;
                break;
            }
        }
    p = (node *)malloc(sizeof(node));
    p->number = x;
    p->next = p2;
    if(p1 == NULL)    
          list=p;
    return (list);    
}

void print(node *list)
{
     if(list == NULL)
      printf("NULL");
    else{
        printf("%d-->",list->number);
        print(list->next);
    }
    return;
}
