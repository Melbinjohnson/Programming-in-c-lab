#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,fact=1,count=0;
	clrscr();
	printf("***MENU***"\n);
	printf("1.Factorial of a number\n2.Prime or not\n3.Odd or Even\n4.Exit\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case1:
		  printf("Factrial of a number\n");
		  printf("Enter a number:");
		  scanf("%d",&n);
		  for(i=n;i>0;i--)
		  {
			fact=fact*i;
		  }
		  printf("Factorial of %d is %d",n,fact);
		  break;
		case2:
		  printf("Prime or Not \n");
		  printf("Enter a number:");
		  scanf("%d",&n);
		  for(i=1;i<=n;i++)
		  {
			if(n%i==0)
			count++;
		  }
		  if(count==2)
		   printf("%d is prime number",n);
		  else
		   printf("%d is not prime number",n);
		  break;
		case3:
		  printf("Odd or Even\n");
		  printf("Enter a Number:");
		  scanf("%d",&n);
		  if(n%2==0)
		    printf("%d is even number",n);
		  else
		    printf("%d is odd number",n);
		  break;
		case4:
		   printf("Exit");
		   break;
	}
	getch();
}
