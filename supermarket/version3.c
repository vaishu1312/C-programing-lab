#include<stdio.h>
#include<stdlib.h>
//function to update existing stock by barcode
typedef struct product
{
 int code;
 char pdt_name[25];
 char category[15];
 char sub_category[15];
 float MRP;
 date mfg;
 date exp;
 int qty;
}product;
product item;

typedef struct date
{
 int dt;
 int mth;
 int yr;
}date;


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
   printf("Only %d nos of %s is left\n",item.qty,item.name);
 }    
}

//function to update existing stock by barcode(only admin can call fn)
void update_stock()
{
 int n,c,q;
 printf("Enter no of items: ");
 scanf("%d",&n);
 FILE *fp;
 fp=fopen("product.bin","rb+");
 for(int i=0;i<n;i++)
 {     printf("Enter barcode for product %d: ",i+1);
       scanf("%d",&c);
       while(fread(&item,sizeof(item),1,fp))
       {   if(c==item.code)
           {  fseek(fp,0,SEEK_CUR)
              printf("Enter the quantity: "); 
              scanf("%d",&q);
              item.qty+=q;
              fwrite(&item,sizeof(item),1,fp);
           }
       }
  }
  fclose(fp);
}

//input function to store pdt details or to add new pdt to supermarket(only admin can call fn)
void input()
{
 int n;
 printf("Enter no of items: ");
 scanf("%d",&n);
 FILE *fp;
 fp=fopen("product.bin","a");
 for(int i=0;i<n;i++)
	{	printf("Enter details for product %d-\n",i+1);
                printf("Enter barcode: "); 
		scanf("%d",&item.code);
		printf("Enter product name: "); 
		scanf("%s",item.pdt_name);
		printf("Enter product category: ");
		scanf("%s",&item.category);
		printf("Enter product category: ");
		scanf("%s",&item.category);
		printf("Enter product sub-category: ");
		scanf("%s",&item.sub_category);
		printf("Enter MRP: ");
		scanf("%f",&item.MRP);
		printf("Enter manufacturing date: ");
		scanf("%d %d %d",&item.mfg.dt,&item.mfg.mth,&item.mfg.yr);
		printf("Enter expiry date: ");
		scanf("%d %d %d",&item.exp.dt,&item.exp.mth,&item.exp.yr);
		printf("Enter qty: ");
		scanf("%f",&item.qty);
		fwrite(&item,sizeof(item),1,fp);
	}
 fclose(fp);
}
