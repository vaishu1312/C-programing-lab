#include <stdio.h>
void towerOfHanoi(int n,char current,char dest,char aux);
void main()
{  
  int n;
  char current,dest,aux;
  printf("Enter the no of disks: ");
  scanf("%d",&n);
  printf("Enter the current rod: ");
  scanf(" %c",&current);
  printf("Enter the destination rod: ");
  scanf(" %c",&dest);
  printf("Enter the spare rod: ");
  scanf(" %c",&aux);
  towerOfHanoi(n,current,dest,aux);  
  printf("\n");
}

void towerOfHanoi(int n,char current,char dest,char aux)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", current,dest);
        return;
    }
    towerOfHanoi(n-1,current,aux,dest);
    printf("\n Move disk %d from rod %c to rod %c", n,current,dest);
    towerOfHanoi(n-1,aux,dest,current);
}
