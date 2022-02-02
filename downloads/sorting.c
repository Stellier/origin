//#include"storage/emulated/0/Download/CodindC/pass.c"
#include<unistd.h>
#include<stdio.h>
#include<string.h>

void    	ft_sort_int_tab(int *tab, int size)
{	
int		i;	
int		j;
int		swap;

i = 0;	
    while (i < size)
    {
        j = 0;	
        while (j < size)
	       {		
	           if (tab[i] < tab[j])		
	           {			
	               swap = tab[i];			
	               tab[i] = tab[j];		
	               tab[j] = swap;		
	           }		
            j++;		
        }
        i++;	
    }
}
int main(void)
{
	int i;
    int tab[5];
    tab[0] = 61;
    tab[1] = 34;
    tab[2] = 5;
    tab[3] = 69;
    tab[4] = 50;

    ft_sort_int_tab(tab, 5);
    i = 0;
	while(i < 5)
	{
   	 printf("[%d], ", tab[i]);
	 i++;
	}
	printf("\n");
}
