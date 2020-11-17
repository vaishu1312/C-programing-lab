#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct phone
{
 char name[20];
 char no[10];
}phone;
phone phonebook;

void insert( );
void delete ( );
void display( );
int count=0;

int main()
{
int ch;
do
 {
 printf("\n\t\tMenu\n\n\t(1)\tAdd contact"); 
 printf("\n\t(2)\tDelete contact\n\t(3)\tDisplay contacts"); 
 printf("\n\t(4)\tExit"); 
 printf("\n\nEnter your choice: "); 
 scanf("%d", &ch);

 if (ch == 1)
  insert();
 else if (ch == 2)
  delete();
 else if (ch == 3)
  display();
 else if (ch == 4)
  return 0;
 } while (ch>0 && ch < 4);
}

void insert ()
{
 FILE *fp;
 fp = fopen("contacts.bin", "ab");
 int n;
 printf("Enter no of contacts: ");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 printf("Name: ");
 getchar();
 gets(phonebook.name); 
 printf("Phone Number: "); 
 scanf("%s",phonebook.no); 
 printf("\n\tContact added.\n");
 fwrite(&phonebook,sizeof(phone),1,fp);
 count++;
 }
fclose(fp);
}

void delete ()
{
 char deletename[20]; 
 printf("\nEnter name to be deleted: ");
 scanf("%s", deletename);
 FILE *fp;
 FILE *temp;
 fp = fopen("contacts.bin", "rb");
 temp = fopen("tempo.bin", "wb");
 fread(&phonebook,sizeof(phone),1,fp);
 while(!feof(fp))
{
 if(strcmp(deletename,phonebook.name) !=0)
 {
   fwrite(&phonebook,sizeof(phone),1,temp);
 }
 fread(&phonebook,sizeof(phone),1,fp);
}
 fclose(fp); 
 fclose(temp); 
 remove("contacts.bin");
 rename("tempo.bin","contacts.bin");
printf("Contact deleted");
}

void display ()
{
int x = 0;
printf("\nThe contacts in the directory are: \n ");
FILE *fp;
fp = fopen("contacts.bin", "rb");
fread(&phonebook,sizeof(phone),1,fp);
while(!(feof(fp)))
{ printf("\n(%d)\n", ++x);
  printf("Name\t      : %s\n", phonebook.name);
  printf("Phone Number: %s\n", phonebook.no);
 fread(&phonebook,sizeof(phone),1,fp);
}
fclose(fp);
}
