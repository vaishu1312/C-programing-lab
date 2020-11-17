#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//function to display stock
//function to update existing stock by name and barcode
//fn to alert
//fn to input
typedef struct date
{
 int dt;
 int mth;
 int yr;
}date;

typedef struct product
{
 int code;
 char pdt_name[50];
 char category[50];
 char sub_category[50];
 float MRP;
 date mfg;
 date exp;
 int initial_qty; //will not be changed while pdt is sold  //new edit
 int qty; //current availability
 int qty_sold;
}product;
product item;


void readnstore()  //fn to read the file and store in an array of structures
{
 int i=0;
 product arr[100];  //array of structures //arr is an array of type product //product is a strucure
 fp=fopen("product.bin","rb+");
 while(!(feof(fp))) //feof returns non-zero if end of file has been reached,else zero
 {                  //read the data from file and cpy it to to an array
  fread(arr[i],sizeof(item),1,fp);
  i++; //sort the array in alpha order based on pdt-name //i gives the no of elements in the array
 }  
 fwrite(arr,sizeof(item),i,fp);
}

void display()
{ int i=0;
  printf("S.No  BARCODE  NAME\tINITIAL QUANTITY  QUANTITY AVAILABLE");
  while(fread(&item,sizeof(item),1,fp)
  {
   printf("%d  %d\t%s\t%d\t%d\t",i++,item.code,item.pdt_name,item.initial_qty,item.qty); 
  }  
}

void displaybycategory()
{ int i=0;
  char categ[50];
  printf("Enter the category: ");
  gets(categ);
  printf("S.No  BARCODE  NAME\tINITIAL QUANTITY  QUANTITY AVAILABLE");
  while(fread(&item,sizeof(item),1,fp)
  {
   if(strcmp(item.category,categ)==0)
   {
    printf("%d  %d\t%s\t%d\t%d\t",i++,item.code,item.pdt_name,item.initial_qty,item.qty); 
   }
  }  
}

void qtysort(product arr[], int n) // Sorting strings using bubble sort
{   product temp;  //a temporary variable of type product --structure 
    for (int j=0; j<n-1; j++)
    {
        for (int k=j+1; k<n; i++)
        {
            if (arr[j].qty_sold>arr[i].qty_sold) 
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
}

void alphasort(product arr[], int n) // Sorting strings using bubble sort
{   product temp;  //a temporary variable of type product --structure 
    for (int j=0; j<n-1; j++)
    {
        for (int k=j+1; k<n; i++)
        {
            if (strcmp(arr[j].pdt_name,arr[i].pdt_name) > 0)
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
}


/*void stock_display()
{
 printf("Enter your choice: ");
 printf("1.Display entire stock\n2.Display stock in a category\n");
 printf("3.Display stocks in a sub category\n");
 printf("4.Display stocks by alphabetical order\n")
 printf("5.Display stocks by descending order\n") 
}*/


//function to update existing stock by name and barcode(only admin can call fn)
void update_stock() 
{
 int n,c,q,i=0;
 char x,name[20];
 printf("Enter no of items: ");
 scanf("%d",&n);
 FILE *fp;
 fp=fopen("product.bin","rb+");
 while (i<n)
 {   printf("Press P to enter barcode/Press N to enter product name: ");
     getchar();
     scanf("%c",&x);
     if(x=='P')
     { 
       printf("Enter barcode for product %d: ",i+1);
       scanf("%d",&c);
       while(fread(&item,sizeof(item),1,fp))
       {   if(c==item.code)
           {  fseek(fp,-sizeof(item),SEEK_CUR);
              printf("Enter the quantity: "); 
              scanf("%d",&q);
              item.qty+=q;
              item.initial_qty+=q;  //new edit
              fwrite(&item,sizeof(item),1,fp);
              break;
           }
       }//end while read
     i++;
     }//end if x==p
     else if(x=='N')
     { 
       printf("Enter name of the product %d: ",i+1);
       scanf("%s",name);
       while(fread(&item,sizeof(item),1,fp))
       { if(strcmp(name,item.pdt_name)==0)               
           {  fseek(fp,-sizeof(item),SEEK_CUR);
              printf("Enter the quantity: "); 
              scanf("%d",&q);
              item.qty+=q;
              item.initial_qty+=q;  //new edit
              fwrite(&item,sizeof(item),1,fp);
              break;
           }
       }//end while read
       i++;  //INVALID CHOICE TAKEN CARE //will be incremented only if the choice is correct
     }//end if x==n
     else
         printf("You have entered an invalid choice\nPlease enter again\n");      
  } //end while i<n
  fclose(fp);
}

//function to alert(will be triggered only if login is admin)
// check if the stock is below the level
void alert()
{
 int level=11;
 FILE *fp;
 fp=fopen("product.bin","rb");
 while(fread(&item,sizeof(item),1,fp))
 { 
 if(item.qty<level)
   printf("Only %d nos of %s is left\n",item.qty,item.pdt_name);
 }    
}

//input function to store pdt details or to add new pdt to supermarket(only admin can call fn)
void input()
{
 int n;
 printf("Enter no of items: ");
 scanf("%d",&n);
 FILE *fp;
 fp=fopen("product.bin","ab");
 for(int i=0;i<n;i++)
	{	printf("Enter details for product %d-\n",i+1);
                printf("Enter barcode: "); 
		scanf("%d",&item.code);
		printf("Enter product category: ");
                getchar();
		gets(item.category);
		printf("Enter product sub-category: ");
		gets(item.sub_category);
		printf("Enter product name: "); 
		gets(item.pdt_name);
		printf("Enter MRP: ");
		scanf("%f",&item.MRP);
		printf("Enter manufacturing date: ");
		scanf("%d-%d-%d",&item.mfg.dt,&item.mfg.mth,&item.mfg.yr);
		printf("Enter expiry date: ");
		scanf("%d-%d-%d",&item.exp.dt,&item.exp.mth,&item.exp.yr);
		printf("Enter qty: ");
		scanf("%d",&item.qty);
                item.initial_qty=item.qty;
		fwrite(&item,sizeof(item),1,fp);
	}
 readnstore();
 alphasort();
 fclose(fp);
}

void main()
{
//input();
//update_stock();
alert();
}
