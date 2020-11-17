#include<stdio.h>
#include<stdlib.h>
//tried array of structs
//try having an array for each obj;each element of obj will have diff code,mfg,exp date
//everytime a new stock of the object is added,an element will be added to the array
//horlicks array[quantity],complan array
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
product *item;

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

//input function to store pdt details(only admin can call fn)
//function to display update stock

void update_stock()
{
 
}

void input()
{
 int n;
 printf("Enter no of items: ");
 scanf("%d",&n);
 item=(product*)calloc(n,sizeof(product);
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


