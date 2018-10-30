#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXBOOK 1000
#define MAXROW 1001 
#define MAXCOL 101
char fname[20]={"Librarybook.txt"};
char bookinfo[MAXROW][MAXCOL];
	int i=0;
	int acc;
	int j=0;
	int k=0;
	int o=0;
	int choose;
	char opt,opt2,ch;
	struct info
	{char title[MAXROW];
	char callnum[MAXROW];
	char subject[MAXROW];
	char author[MAXROW];
	char dateop[MAXROW];
	char status[MAXROW];
	}book[MAXBOOK];
	
	struct info2
	{
	char loginname[10];
	char loginpassword[10];
          }account[100];
    int numofacc;    
	int numofbook;
void option1();
void option2();
void option3();
void option4();
void option5();
void visitor();
void borrow();
int login();
void CreateAccount();
void reserve();
int main()
{
	
	char option,ch;
	int i=0;
	int h;
	printf("*** College Library Record System 201516 ***\n\n");
	printf("***This system is developed by CCIT4020 Class No.CL-01 Group No.04***");
	
	do
		{
			printf("\n\n*****<Main Menu>*****");
			printf("\nPlease select 1)login as user, 2)login as vistor or (Q/q) to quit the program\n");
			scanf("%c%c",&option,&ch);
			switch(option)
		{
			case('1'):
			{
			
			i=login();
			break;
			}
			
			case('2'):
			{
				visitor();	
				break;
			}
			
			case('Q'):
			case('q'):
			{
			printf("quit,goodbye");
			return 0;	
			}
						
			default:
			printf("Wrong input, please input <1> <2> or <Q/q> only\n");			
		}
		}while(!i);
	
	
	
	
	
	
	printf("\n\n\n--<Advance funtions for User>--");
	printf("\n\n1. Add New Book Record<s>:");
	printf("\n\n2. Display Book Record<s>:");
	printf("\n\n3. Modify Book Record<s>:");
	printf("\n\n4. Delete Book Record<s>:");
	printf("\n\n5. Search Book Information:");
	printf("\n\n6. Reserve Book:");
	printf("\n\n7. Change the status of Book:");
	printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");

	FILE*inFile=fopen(fname,"r+");
	numofbook=0;
	char copy[MAXROW];
	i=0;
	int a=2;                                   
	while(fscanf(inFile,"%s",&book[numofbook].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[numofbook].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[numofbook].title);
	fscanf(inFile,"%s\n",book[numofbook].callnum);
	fscanf(inFile,"%s\n",book[numofbook].subject);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].author);
	fscanf(inFile,"%s\n",book[numofbook].dateop);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].status);

	if(a==1)
		{
		strcat(copy,book[numofbook].title);
		strcpy(book[numofbook].title,copy);
		a--;
		}   
	a=2;
	numofbook++;
	}
	fclose(inFile);
	do
		{
		scanf("%c%c",&option,&ch);
		switch(option)
		{
			case('1'):
			{
			option1();
			printf("\n\n1. Add New Book Record<s>:");
			printf("\n\n2. Display Book Record<s>:");
			printf("\n\n3. Modify Book Record<s>:");
			printf("\n\n4. Delete Book Record<s>:");				
			printf("\n\n5. Search Book Information:");
			printf("\n\n6. Reserve Book:");
			printf("\n\n7. Change the status of Book:");
			printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
			break;
			}
			
			case('2'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						option2();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
			
				break;
			}
			
			case('3'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						option3();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
			
				break;
			} 

			case('4'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\nWhat is your option <1-6>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						option4();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
			
				break;
			}
			
			case('5'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						option5();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
		
				break;
			} 
			
			case('6'):
				{
					if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						reserve();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
		
				break;
					
				}
				case('7'):
				{
					if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
				else
					{
						borrow();
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Modify Book Record<s>:");
						printf("\n\n4. Delete Book Record<s>:");
						printf("\n\n5. Search Book Information:");
						printf("\n\n6. Reserve Book:");
						printf("\n\n7. Change the status of Book:");
						printf("\n\nWhat is your option <1-7>? Or you can press [q]or[Q] to quit the programme\n");
					}
		
				break;
					
				}
			case('Q'):
			case('q'):
			{
			printf("quit,goodbye");
			return 0;	
			}
						
			default:
			printf("Wrong input, please input <1> <2> <3> <4> <5> <6> or <Q/q>\n");			
		}
		}while(!i);
	return 0;

}

void option1()
{
	char check;
	FILE*outFile;
	outFile=fopen(fname,"a+");
	do
	{
	numofbook++;
	printf("Please enter\n1)Title of book:");
	gets(book[numofbook].title);
	printf("2)Call number:");
	gets(book[numofbook].callnum);
	printf("3)Subject of book:");
	gets(book[numofbook].subject);
	printf("4)Author(s):");
	gets(book[numofbook].author);
	printf("5)Year of pulication:");
	gets(book[numofbook].dateop);
	printf("6)Status:");
	gets(book[numofbook].status);
	i=0;
	
	while(check=book[numofbook].subject[i]!='\0')
	{
		check=book[numofbook].subject[i];
		if(check==' ')
			book[numofbook].subject[i]='_';
		i++;
	}
	
	
	fprintf(outFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[numofbook].title,book[numofbook].callnum,book[numofbook].subject,book[numofbook].author,book[numofbook].dateop,book[numofbook].status);
	do
	{
	printf("Input successfully!!");
	printf("Add another book record(y/n)?");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('y'):
		case('Y'):
		{
		i=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		i=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	
	}while(!i);
	
	fclose(outFile);
	
	do
	{
		printf("Do you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);

	
}
void option2()
{
	FILE*inFile;
	inFile=fopen(fname,"r+");
	printf("All books in the library system are:\n\n\n");
	char ch;
	char copy[MAXROW];
	int i=0;
	int a=2;
	while(fscanf(inFile,"%s",&book[i].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[i].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[i].title);
	fscanf(inFile,"%s\n",book[i].callnum);
	fscanf(inFile,"%s\n",book[i].subject);
	fscanf(inFile,"%[^\n]s\n",book[i].author);
	fscanf(inFile,"%s\n",book[i].dateop);
	fscanf(inFile,"%[^\n]s\n",book[i].status);
	if(a==1)
		{
		strcat(copy,book[i].title);
		strcpy(book[i].title,copy);
		a--;
		}
	
	printf("Title of book[%d]:          %s\n",i+1,book[i].title);
	printf("Call number[%d]:            %s\n",i+1,book[i].callnum);
	printf("Subject[%d]:                %s\n",i+1,book[i].subject);
	printf("Author[%d]:                 %s\n",i+1,book[i].author);
	printf("Date of publication[%d]:    %s\n",i+1,book[i].dateop);
	printf("Status[%d]:                 %s\n\n",i+1,book[i].status);
	a=2;
	i++;
	}
	
	fclose(inFile);
	
	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);	
	
}
void option3()
{
	
	
	int num; 
	do
	{
	FILE*inFile=fopen(fname,"r"); 
	i=0;                                       
	char copy[MAXROW];
	int a=2;
	while(fscanf(inFile,"%s",&book[i].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[i].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[i].title);
	fscanf(inFile,"%s\n",book[i].callnum);
	fscanf(inFile,"%s\n",book[i].subject);
	fscanf(inFile,"%[^\n]s\n",book[i].author);
	fscanf(inFile,"%s\n",book[i].dateop);
	fscanf(inFile,"%[^\n]s\n",book[i].status);
	if(a==1)
		{
		strcat(copy,book[i].title);
		strcpy(book[i].title,copy);
		a--;
		}
	
	printf("Title of book[%d]:          %s\n",i+1,book[i].title);
	printf("Call number[%d]:            %s\n",i+1,book[i].callnum);
	printf("Subject[%d]:                %s\n",i+1,book[i].subject);
	printf("Author[%d]:                 %s\n",i+1,book[i].author);
	printf("Date of publication[%d]:    %s\n",i+1,book[i].dateop);
	printf("Status[%d]:                 %s\n\n",i+1,book[i].status);
	a=2;
	i++;
	}
	fclose(inFile);
    do
    {
    
	printf("\nPlease Enter the number of record:");
	scanf("%d",&num);
    if(num>0&&num<=numofbook)
    	k=1;
    else
    	printf("Wrong input!Please enter number in the range <1 to %d> only",numofbook);
    	
	}while(!k);
	
	
	num--;
	k=0;
	printf("\nTitle of book is %s,please Enter new Title of book:",book[num].title);
	fflush(stdin);
	gets(book[num].title);
	
	printf("\nCall number is %s,please Enter new Call number:",book[num].callnum);
	gets(book[num].callnum);
	
	printf("\nSubject is %s,Please Enter new Subject:",book[num].subject);
	gets(book[num].subject);
	
	printf("\nAuthor is %s,Please Enter new Author:",book[num].author);
	gets(book[num].author);
	
	printf("\nDate of publication is %s,Please Enter new Date of publication:",book[num].dateop);
	gets(book[num].dateop);
	
	printf("\nStatus is %s,Please Enter new Status:",book[num].status);
	gets(book[num].status);
	
	
   	FILE*oFile=fopen(fname,"w");                                          //writefile
   	for(i=0;i<MAXBOOK;i++){
    fprintf(oFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[i].title,book[i].callnum,book[i].subject,book[i].author,book[i].dateop,book[i].status);}
    fclose(oFile);
	
		do
	{
	printf("Modify another book record(y/n)?");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('y'):
		case('Y'):
		{
		k=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		k=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	
	}while(!k);
	
	
	
	
	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);
	

}
void option4()
{
	int num;
	int j=0;
	int k=0;
	do
	{
	FILE*inFile=fopen(fname,"r"); 
	i=0;                                         //writefile
	char copy[MAXROW];
	int i=0;
	int a=2;
	while(fscanf(inFile,"%s",&book[i].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[i].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[i].title);
	fscanf(inFile,"%s\n",book[i].callnum);
	fscanf(inFile,"%s\n",book[i].subject);
	fscanf(inFile,"%[^\n]s\n",book[i].author);
	fscanf(inFile,"%s\n",book[i].dateop);
	fscanf(inFile,"%[^\n]s\n",book[i].status);
	if(a==1)
		{
		strcat(copy,book[i].title);
		strcpy(book[i].title,copy);
		a--;
		}
	
	printf("Title of book[%d]:          %s\n",i+1,book[i].title);
	printf("Call number[%d]:            %s\n",i+1,book[i].callnum);
	printf("Subject[%d]:                %s\n",i+1,book[i].subject);
	printf("Author[%d]:                 %s\n",i+1,book[i].author);
	printf("Date of publication[%d]:    %s\n",i+1,book[i].dateop);
	printf("Status[%d]:                 %s\n\n",i+1,book[i].status);
	a=2;
	i++;
	}
	fclose(inFile);
    do
    {
    
	printf("\nPlease Enter the number of record:");
	scanf("%d%c",&num,&ch);
    if(num>0&&num<=numofbook)
    	k=1;
    else
    	printf("Wrong input!Please enter number in the range <1 to %d> only",numofbook);
    	
	}while(!k);
	
	
	num--;
	k=0;

	do
	{
	printf("\n\nDo you really want to delete book record[%d](y/n)?",num+1);
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('y'):
		case('Y'):
		{
		k=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		k=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	if(k==0)
   	{FILE*oFile=fopen(fname,"w"); 

   	for(i=0;i<numofbook;i++)
	{
	if (i==num)
		i++;
    fprintf(oFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[i].title,book[i].callnum,book[i].subject,book[i].author,book[i].dateop,book[i].status);
	}
    fclose(oFile);
	printf("\n\nThe book record is deleted successfully.\n\n");
	do
	{
	printf("Delete another book record(y/n)?");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('y'):
		case('Y'):
		{
		k=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		k=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	}
	}while(!k);
	
	
	
	
	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);
	
	
	
}
void option5()
{
	char opt,opt2;
	int i=0;
	int j=0;
	int k=0;
	int o=0;
	int a=0;
	int si=0;
	int srt=0;
	char input[MAXROW];
	
	FILE*inFile=fopen(fname,"r"); 
	numofbook=0;
	char copy[MAXROW];
	i=0;
	a=2;                                   //writefile
	while(fscanf(inFile,"%s",&book[numofbook].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[numofbook].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[numofbook].title);
	fscanf(inFile,"%s\n",book[numofbook].callnum);
	fscanf(inFile,"%s\n",book[numofbook].subject);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].author);
	fscanf(inFile,"%s\n",book[numofbook].dateop);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].status);

	if(a==1)
		{
		strcat(copy,book[numofbook].title);
		strcpy(book[numofbook].title,copy);
		a--;
		}   
		a=2;
	numofbook++;
	}
	fclose(inFile);
	a=0;
	do{
		do{
			printf("Which one do you want to search?\n");
		printf("1)Title of book, 2)Call number, 3)Subject of book,\n");
		printf("4)Author(s), 5)Year of pulication, 6)Status and (Q/q)for back to menu:\n");
		scanf("%c%c",&opt,&opt2);
	
	switch(opt)
	{
		case('1'):
		{
		printf("Please enter the Title of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].title)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
		
		case('2'):
		{
		printf("Please enter the Call number of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].callnum)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
	
		case('3'):
		{
		printf("Please enter the Subject of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].subject)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
	
		case('4'):
		{
		printf("Please enter the Author of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].author)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
		
		case('5'):
		{
		printf("Please enter the Date of publication of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].dateop)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
		
		case('6'):
		{
		printf("Please enter the Status of book:");
		gets(input);
		for(si=0;si<numofbook;si++)
		{	
			if(strcmp(input,book[si].status)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
		}
		if(srt==0)
			printf("The book is not found.Please try again!\n");
		break;
		}
		
		case('Q'):
		case('q'):
		{
			i=1;
			a=0;
			break;
		}
		
		
		default:
		printf("Wrong input!!!Please enter <1-5> only!!!\n");		
	}
		}while(!i);
	
	if(a==1)
	{
	do
	{
	printf("search another book record(y/n)?");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('y'):
		case('Y'):
		{
		k=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		k=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	
	

	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);
}
}while(!i);
}
int login()
{
 	int a,w,loop;
 	char opt,ch;
 	char loginname[10];
 	char loginpw[10];
 	char pw[10];
 	FILE*inFile;
 	inFile=fopen("librarylogin.txt","r");
 	for(loop=0;loop<100;loop++)
 	 { 
		fscanf(inFile,"%s\n",account[numofacc].loginname);
		fscanf(inFile,"%s\n",account[numofacc].loginpassword);
		numofacc++;
		}
	printf("<CATION:You can only try to input your account and password 10 times>\n");
	for(j=0;j<10;j++)
	{
	if(j>=1)
		{
		do
		{
		printf("\nDo you want to back to the main menu(y/n)?");
		scanf("%c%c",&opt,&ch);
		switch(opt)
		{
			case('y'):
			case('Y'):
			i=1;
			w=1;
			break;
			case('n'):
			case('N'):
			{
			i=1;
			w=0;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
		}while(!i);
		 } 
	if(w!=1)
	{
	printf("Please login your account.\n");
 	printf("Enter your account: ");
 	gets(loginname);
 	printf("Enter your password: ");
 	gets(loginpw);
 	
 	for(i=0;i<numofacc;i++)
 	{
	if(strcmp(account[i].loginname,loginname)==0 && strcmp(account[i].loginpassword,loginpw)==0)
 		{
 			a=1;
			j=10;	
		 }
	}
 	if(j<9)
 		{
 			printf("\nWrong input account and(or) password!\n\nyou have %d times of try left\n",9-j);
		 }
	else
		if(a==0)
		{
			printf("NO MORE CHANCE,QUIT THE PROGRAME");
			exit (1); 
		}
		else 
			{
			i=acc;
			return (1);
			}
	}
    else
    	return(0);
	}
	
    
	}
 

void visitor()
{
	char option,ch;
	int i=0;
	int h;
	printf("\n\n\n--<Basic funtions for visitor>--");
	printf("\n\n1. Add New Book Record<s>:");
	printf("\n\n2. Display Book Record<s>:");
	printf("\n\n3. Search Book Information:");
	printf("\n\n4. Sign Up A Accout:");	
	printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
	
	FILE*inFile=fopen(fname,"r+");
	numofbook=0;
	char copy[MAXROW];
	i=0;
	int a=2;                                   
	while(fscanf(inFile,"%s",&book[numofbook].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[numofbook].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[numofbook].title);
	fscanf(inFile,"%s\n",book[numofbook].callnum);
	fscanf(inFile,"%s\n",book[numofbook].subject);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].author);
	fscanf(inFile,"%s\n",book[numofbook].dateop);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].status);

	if(a==1)
		{
		strcat(copy,book[numofbook].title);
		strcpy(book[numofbook].title,copy);
		a--;
		}   
	a=2;
	numofbook++;
	}
	fclose(inFile);
	do
		{
		scanf("%c%c",&option,&ch);
		switch(option)
		{
			case('1'):
			{
			option1();
			printf("\n\n\n--<Basic funtions for visitor>--");
			printf("\n\n1. Add New Book Record<s>:");
			printf("\n\n2. Display Book Record<s>:");
			printf("\n\n3. Search Book Information:");
			printf("\n\n4. Sign Up A Accout:");	
			printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
			break;
			}
			
			case('2'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n\n--<Basic funtions for visitor>--");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Search Book Information:");
						printf("\n\n4. Sign Up A Accout:");	
						printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
					}
				else
					{
						option2();
						printf("\n\n\n--<Basic funtions for visitor>--");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Search Book Information:");
						printf("\n\n4. Sign Up A Accout:");	
						printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
					}
			
				break;
			}
			
			
			case('3'):
			{
				if(numofbook==0)
					{
						printf("There is no book in the file, please choose <1> to enter a book record first!!\n\n");
						printf("\n\n\n--<Basic funtions for visitor>--");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Search Book Information:");
						printf("\n\n4. Sign Up A Accout:");	
						printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
					}
				else
					{
						option5();
						printf("\n\n\n--<Basic funtions for visitor>--");
						printf("\n\n1. Add New Book Record<s>:");
						printf("\n\n2. Display Book Record<s>:");
						printf("\n\n3. Search Book Information:");
						printf("\n\n4. Sign Up A Accout:");	
						printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
					}
		
				break;
			} 
			
			case('4'):
				{
					CreateAccount();
					printf("\n\n\n--<Basic funtions for visitor>--");				
					printf("\n\n1. Add New Book Record<s>:");
					printf("\n\n2. Display Book Record<s>:");
					printf("\n\n3. Search Book Information:");
					printf("\n\n4. Sign Up A Accout:");	
					printf("\n\nWhat is your option <1-4>? Or you can press [q]or[Q] to back to the main menu\n");
					break;
				}
		
						
			case('Q'):
			case('q'):
			{
			printf("back to main menu");
			i=1;
			break;	
			}
						
			default:
			printf("Wrong input, please input <1> <2> <3> <4> <5> or <Q/q>\n");			
		}
		}while(!i);
}
void CreateAccount()
{
	int i=0;
	char ans,ch,opt;
	FILE*outFile;
	outFile=fopen("librarylogin.txt","a");
	do{
	printf("Please create your new account(Within 10 words and without spacebar): ");
	gets(account[i].loginname);
	printf("\nPlease create your new password(Within 10 words): ");
	gets(account[i].loginpassword);
	fprintf(outFile,"%s\n%s\n\n",account[i].loginname,account[i].loginpassword);
	fclose(outFile);
	printf("Create account successfully!");
	do{
    printf("\nDo you want to create a new account again<y/n>?");
    scanf("%c%c",&ans,&ch);
   switch(ans)
	{
		case('y'):
		case('Y'):
		{
		i=0;
		j=1;
		break;
		}
		
		case('n'):
		case('N'):
		{
		i=1;
		j=1;
		break;
		}
		
		default:
		printf("WRONG INPUT!!!!! Please try again.....");
	}
	}while(!j);
	}while(!i);

	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&ch);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);
}

void reserve()
{
	char opt,opt2;
	int i=0;
	int num;
	int j=0;
	int k=0;
	int o=0;
	int a=0;
	int si=0;
	int srt=0;
	char ch;
	char reserve[50]="(The book is reserved by ";
	char bookname[MAXROW]; 

	FILE*inFile=fopen(fname,"r"); 
	i=0;                                       
	char copy[MAXROW];
	a=2;
	while(fscanf(inFile,"%s",&book[i].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[i].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[i].title);
	fscanf(inFile,"%s\n",book[i].callnum);
	fscanf(inFile,"%s\n",book[i].subject);
	fscanf(inFile,"%[^\n]s\n",book[i].author);
	fscanf(inFile,"%s\n",book[i].dateop);
	fscanf(inFile,"%[^\n]s\n",book[i].status);
	if(a==1)
		{
		strcat(copy,book[i].title);
		strcpy(book[i].title,copy);
		a--;
		}
	
	printf("Title of book[%d]:          %s\n",i+1,book[i].title);
	printf("Call number[%d]:            %s\n",i+1,book[i].callnum);
	printf("Subject[%d]:                %s\n",i+1,book[i].subject);
	printf("Author[%d]:                 %s\n",i+1,book[i].author);
	printf("Date of publication[%d]:    %s\n",i+1,book[i].dateop);
	printf("Status[%d]:                 %s\n\n",i+1,book[i].status);
	a=2;
	i++;
	}
	fclose(inFile);
	a=0;
	
	do{
		 do
    {
    printf("Which book would you reserve?");
	printf("\nPlease Enter the number of record:");
	scanf("%d%c",&num,&ch);
    if(num>0&&num<=numofbook)
    	k=1;
    else
    	printf("Wrong input!Please enter number in the range <1 to %d> only",numofbook);
    	
	}while(!k);
	
	
	num--;

				FILE*oFile=fopen(fname,"w");                                          //writefile
				strcat(reserve,account[acc].loginname);
				strcat(reserve,")");
				strcat(book[num].status,reserve);	
				for(i=0;i<MAXBOOK;i++){
 				fprintf(oFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[i].title,book[i].callnum,book[i].subject,book[i].author,book[i].dateop,book[i].status);}
  				fclose(oFile); 
				srt++;
				printf("This book is reserved successfully!");
				
			
		
		if(srt==0)
			printf("No any record about this book.Please try again!");
	
	
	
	}while(!k);
	
	do
	{
		printf("\nDo you want to leave the programme(y/n)?");
		scanf("%c%c",&opt,&opt2);
		switch(opt)
		{
			case('y'):
			case('Y'):
			exit (0);
			case('n'):
			case('N'):
			{
			i=1;
			break;
			}
			default:
			printf("Please enter <y/Y> or <n/N> only\n");
		}
		
	}while(!i);

}
void borrow()
{
	char opt,ch;
	int opt2;
	int y=0,z=0;
	int si=0;
	int srt=0;
	int i,a;
	FILE*inFile=fopen(fname,"r"); 
	numofbook=0;
	char copy[MAXROW];
	i=0;
	a=2;                                   //writefile
	while(fscanf(inFile,"%s",&book[numofbook].status)!=EOF)
	{
	if(a==2)
		{
		strcpy(copy,book[numofbook].status);
		a--;
		}
	fscanf(inFile,"%[^\n]s\n",book[numofbook].title);
	fscanf(inFile,"%s\n",book[numofbook].callnum);
	fscanf(inFile,"%s\n",book[numofbook].subject);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].author);
	fscanf(inFile,"%s\n",book[numofbook].dateop);
	fscanf(inFile,"%[^\n]s\n",book[numofbook].status);

	if(a==1)
		{
		strcat(copy,book[numofbook].title);
		strcpy(book[numofbook].title,copy);
		a--;
		}   
		a=2;
	numofbook++;
	}
	fclose(inFile);
	
	
	
do{	printf("1. Borrow books\n");
	printf("2. Return books\n");
	printf("What is your option <1-2>?");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case('1'):
		{
			for(si=0;si<numofbook;si++)
		{	
			if(strcmp("available",book[si].status)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
			i++; 
		}
		if(srt==0)
			{printf("No book is available now!!!\n\n");
			i=0;
			continue;}
			
		
		printf("Which book do you want to borrow. Please enter the number of that book.");
		scanf("%d%c",&opt2,&ch);
		strcpy(book[opt2-1].status,"borrowed");
		srt--;
		FILE*inFile;
		inFile=fopen(fname,"w");                                          //writefile
   		for(i=0;i<numofbook;i++){
   		fprintf(inFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[i].title,book[i].callnum,book[i].subject,book[i].author,book[i].dateop,book[i].status);}
   		fclose(inFile);
   		i=0;
		z=1;
		break;
		}
		case ('2'):
		{
			for(si=0;si<numofbook;si++)
		{	
			if(strcmp("borrowed",book[si].status)==0)
			{
				printf("\nTitle of book[%d]:          %s\n",i+1,book[si].title);
				printf("Call number[%d]:            %s\n",i+1,book[si].callnum);
				printf("Subject[%d]:                %s\n",i+1,book[si].subject);
				printf("Author[%d]:                 %s\n",i+1,book[si].author);
				printf("Date of publication[%d]:    %s\n",i+1,book[si].dateop);
				printf("Status[%d]:                 %s\n\n",i+1,book[si].status);
				srt++;
			}
			i++; 
		}
		if(srt==0)
			{printf("No book is borrowed now!!!\n\n");
			i=0;
			continue;}
			
		
		printf("Which book do you want to return. Please enter the number of that book.");
		scanf("%d%c",&opt2,&ch);
		strcpy(book[opt2-1].status,"available");
		srt--;
		FILE*inFile;
		inFile=fopen(fname,"w");                                          //writefile
   		for(i=0;i<numofbook;i++){
   		fprintf(inFile,"%s\n%s\n%s\n%s\n%s\n%s\n\n",book[i].title,book[i].callnum,book[i].subject,book[i].author,book[i].dateop,book[i].status);}
   		fclose(inFile);
   		i=0;
		z=1;
		break;
		}		
		default:
			printf("Please enter <1> or <2> only\n");
	}
	
	if(z==1)
{
	printf("\nBorrow/Return another book?<y/Y>/<n/N>");
	scanf("%c%c",&opt,&ch);
	switch(opt)
	{
		case'y':
		case'Y':
			z=0;
			break;
		case'N':
		case'n':
			z=1;
			break;
		default:
			printf("Wrong input!!! Try again."); 
	}
}
	
	
}while(!z);
}
