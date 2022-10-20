//question_1
/*#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the month number:-");
	scanf("%d",&a);
	switch(a)
	{
	  case 1:
		printf("%d",31);
		break;
	case 2:
	    printf("%d",28);
	    break;
	case 3:
	    printf("%d",31);
	    break;
	case 4:
	    printf("%d",30);
	    break;
	case 5:
	    printf("%d",31);
	    break;
	case 6:
	    printf("%d",30);
	    break;
	case 7:
		printf("%d",31);
		break;
	case 8:
	    printf("%d",31);
	    break;
	case 9:
	    printf("%d",30);
	    break;
	case 10:
	    printf("%d",31);
	    break;
	case 11:
	    printf("%d",30);
	    break;
	case 12:
	    printf("%d",31);
		break;	
	}
	 getch();
	 return 0;						
}*/
//question_2
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int A;
	printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%d",&A);
    switch(A)
    {
    	case 1:
    		int a,b;
    		printf("Enter First Number:-");
    		scanf("%d",&a);
    		printf("Enter Second Number:-");
    		scanf("%d",&b);
    		printf("%d",a+b);
    		break;
		case 2:
		    int c,d;
			printf("Enter First Number:-");
			scanf("%d",&c);
			printf("Enter Second Number:-");
			scanf("%d",&d);
			printf("%d",c-d);
			break;
		case 3:
		    int e,f;
			printf("Enter the first number:-");
			scanf("%d",&e);
			printf("Enter the second number:-");
			scanf("%d",&f);
			printf("%d",e*f);
			break;
        case 4:
		    int g,h;
			printf("Enter the first number:-");
			scanf("%d",&g);
			printf("Enter the second number:-");
			scanf("%d",&h);
			printf("%d",g/h);
			break;
		case 5:
		    exit(0);			  		
	}
	getch();
	return 0;
}*/
//question_3
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("Enter the day of the week:-");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Monday for fresh start");
			break;
		case 2:
		    printf("Tuesday worry less live more");
		    break;
		case 3:
		    printf("Wednesday beautiful minds inspires others ");
			break;
		case 4:
		    printf("So it's Happy Thursday'");
			break;
		case 5:
			printf("Friday I'm in Love");
			break;
		case 6:
			printf("Saturday for adventure");
			break;
		case 7:
			printf("Hey hey Sunday");
			break;			
		default:
			exit(0);
	}
	getch();
	return 0;
}*/
//question_4
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{   
    while(3<4)
	{
	int a;
	printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4. Exit\n");
    scanf("%d",&a);
    switch(a)
    {
    	case 1:
    		int a,b,c;
    		printf("Enter the first number:-");
    		scanf("%d",&a);
    		printf("Enter the second number:-");
    		scanf("%d",&b);
    		printf("Enter the third number:-");
    		scanf("%d",&c);
    		if(a==b || b==c || c==a)
    		{
    			if(a+b>c || b+c>a || c+a>b)
    			printf("Entered numbers are the lengths of an isosceles triangle\n");
			}
			else printf("Entered numbers are not the lenghts of an isosceles triangle\n");
			break;
	    case 2:
	    	int d,e,f;
    		printf("Enter the first number:-");
    		scanf("%d",&d);
    		printf("Enter the second number:-");
    		scanf("%d",&e);
    		printf("Enter the third number:-");
    		scanf("%d",&f);
    		if(d*d+f*f==e*e || e*e+f*f==d*d || e*e+d*d==f*f)
    		{
    			printf("Entered numbers are the lenghts of the side of the right angled triangle\n");
			}
			else printf("Entered numbers are not the lengths of the side of the right angled triangle\n");
			break;
		case 3:
			int g,h,i;
    		printf("Enter the first number:-");
    		scanf("%d",&g);
    		printf("Enter the second number:-");
    		scanf("%d",&h);
    		printf("Enter the third number:-");
    		scanf("%d",&i);
    		if(a=b=c)
    		{
    			printf("Entered numbers are the lengths of the side of a equilateral triangle\n");
			}
	    	else printf("Entered numbers are not the lengths of the side of a equilateral triangle\n");
	    	break;
	    case 4:
			exit(0);
		default:
			printf("Choose a valid option");
	}
	getch();
   }
   return 0;
}