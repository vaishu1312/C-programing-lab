#include<stdio.h>
#include<stdlib.h>

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

void alert()
{
// check if the stock is below the level
 
}

//input function to store pdt details or to add new pdt(only admin can call fn)
//function to update existing stock

void update_stock()
{
 int n,c;
 printf("Enter no of items: ");
 scanf("%d",&n);
 FILE *fp;
 fp=fopen("product.bin","rb");
 FILE *f1;
 f1=fopen("product.bin","ab+");
 printf("Enter Product barcode: ");
 scanf("%d",&c);
 while(fread(&item,sizeof(item),1,fp))
 {
  if(c==item.code)
    {     printf("\n\t%ld\t %s\t %s",t.teleno,t.name,t.address);
          getch();
          break;
    }
  }
  fclose(fp);
  getch();
}

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


