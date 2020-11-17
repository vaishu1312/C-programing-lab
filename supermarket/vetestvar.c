#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//function to display stock
//function to update existing stock by name and barcode

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
}product;
product item;

/*void stock_display()
{
 printf("Enter your choice: ");
 printf("1.Display entire stock\n2.Display stock in a category\n");
 printf("3.Display stocks in a sub category\n");
 printf("4.Display stocks by alphabetical order\n")
 printf("5.Display stocks by descending order\n") 
}*/

//function to alert(will be triggered only if login is admin)
// check if the stock is below the level
void alert()
{
 int level=500;
 FILE *fp;
 fp=fopen("product.bin","rb");
 while(fread(&item,sizeof(item),1,fp))
 { 
 if(item.qty<level)
   printf("Only %d nos of %s is left\n",item.qty,item.pdt_name);
 }    
}

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
 fclose(fp);
}
//to remove a product from the file
void delete()
{
char ch;
FILE *rfp,*wfp;
int pcode;
char pname[50];
printf("%s","do you want to delete an existing product in the list? (Y/N) : ");
getchar();
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{ do
  {
   int opt;
   do
   {
    puts("enter \n1 : to delete using product code \n2 : to delete using product name \n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1 :
    printf("enter the code of the product to be deleted : ");
    scanf("%d",&pcode);
    wfp=fopen("new.bin","ab+");//create and append the data
    rfp=fopen("product.bin","rb+");//open in read and write mode with file ptr at the beginning
    if(!rfp||!wfp) puts("\nerror!!file can't be opened!\n");
    else 
    {
     int flag=0;
     while(fread(&item,sizeof(item),1,rfp))
     {
      if(item.code==pcode)  flag=1;
     else  fwrite(&item,sizeof(item),1,wfp);
     }//while close
     if(flag==1) {
             remove("product.bin"); 
	     rename("new.bin","product.bin");
            }//new file with product deleted is renamed with old file only if there is a difference in data between the two files
     else puts("OOPS!THERE IS NO PRODUCT WITH THE ENTERED CODE :(");
    }//else close
    fclose(rfp);
    fclose(wfp);
    break;
    case 2 : 
    printf("enter the name of the product to be deleted : ");
    scanf("%s",pname);
    wfp=fopen("new.bin","wb+");//create and append the data
    rfp=fopen("product.bin","rb+");//open in read and write mode with file ptr at the beginning
    if(!rfp||!wfp) puts("\nerror!!file can't be opened!\n");
    else 
    {
     int flag=0;
     while(fread(&item,sizeof(item),1,rfp))
     {
      if(strcmp(pname,item.pdt_name)==0) flag=1;
      else  fwrite(&item,sizeof(item),1,wfp);
     }//while close
     if(flag==1) {
             remove("product.bin"); 
	     rename("new.bin","product.bin");
            }//new file with product deleted is renamed with old file only if there is a difference in data between the two files
    else puts("\nOOPS!!THERE IS NO PRODUCT WITH THE GIVEN NAME!");
    }//else close
    fclose(rfp);
    fclose(wfp);
    break;
    default : puts("invalid choice!! re enter the choice ");
    }//switch close
  }while(opt!=1&&opt!=2);
  printf("do you want to delete another product from the existing list (y/n) : ");
  getchar();
  scanf("%c",&ch);
 }while(ch=='y'||ch=='Y');
 }//if ch=y or Y close
}//delete close
void main()
{
input();
delete();
//display();
//alert();
}
