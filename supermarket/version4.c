#include<stdio.h>
#include<stdlib.h>
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
 char pdt_name[25];
 char category[15];
 char sub_category[15];
 float MRP;
 date mfg;
 date exp;
 int initial_qty; //will not be changed while pdt is sold  //new edit
 int qty; //current availability
}product;
product item;

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
     if(x=='P' || x=='p') //new change
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
     else if(x=='N' || x='n')
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
 }
void main()
{
//input();
update_stock();
alert();
}

