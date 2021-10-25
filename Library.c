#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char username[20],bkname[20],elib[20],welcome[20],borrow[5],New[10],exist[5];
	
printf("\t \t County Library System \n");
printf("enter username: \n");
scanf("%s",&username);
printf("enter yes or No for option 1 & 2 \n");

printf("1.add new user: \n");
scanf("%s",&New);
  
printf("2.continue as existing user: \n");
scanf("%s",&exist);


printf("Borrow book(yes or no) \n");
scanf("%s",&borrow);

printf("Which book do you need: \n");
scanf("%s",&bkname);

printf("do you want to access elibrary? \n");
scanf("%s",&elib);

printf("The username is :%s \n",username);

printf("Book Borrowing status: %s \n",borrow);

printf("The bookname is: %s \n",bkname);

printf("Elibrary access status is:%s \n",elib);
	return 0;
}
