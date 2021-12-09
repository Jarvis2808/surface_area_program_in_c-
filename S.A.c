#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int r, l, s;
	float d, a, b, c;

	printf("wellcome\n");
	printf("Which shape's s.a. do you want to find?\n");
	printf("1- square\n2-triangle\n3-circle\n4-rectangle\n");
	scanf("%d", &s);
	if(s == 1)
	{
		printf("What do you have to find S.A.?\n");
		printf("1-Length\n2-sales:\n");
		scanf("%d", &l);
		if(l == 1)
		{
			printf("Enter the value of Length;\n");
			scanf("%f", &a);
			printf("S.A. of square is %f.", a*a);
		}
		else if(l == 2)
		{
			printf("Enter the value of sales:\n");
			scanf("%f", &b);
			a = (b*1.5);
			printf("S.A. of square is %f.", a*a);
		}
		else
		{
			printf("Your input is wrong.");
		}
	}
	else if(s == 2)
	{
		printf("You must have base and hieght to find S.A. of triangle.\n");
		printf("Enter the value of Base & Hieght one by one:\n");
		scanf("%f %f", &a, &b);
		printf("S.A. of triangle is %f.", ((a*b)/2));
	}
	else if(s == 3)
	{
		printf("What do you have to find S.A. of circle?\n");
		printf("1-Radius\n2-Diameter\n");
		scanf("%d", &r);
		if(r == 1)
		{
			printf("Enter the value of radius:\n");
			scanf("%f", &d);
			printf("S.A. of circle is %f.", (3.14*(d*d)));
		}
		else if(r == 2)
		{
			printf("Enter the value of diemeter:\n");
			scanf("%f", &d);
			printf("S.A. of circle is %f.", (3.14*(d*d))/4);
		}
		else
		{
			printf("Your input is wrong.\n");
		}
	}
	else if(s == 4)
	{
		printf("What do you have to find S.A. of Rectangle?\n");
		printf("   ________________\n");
		printf("  |-               |\n");
		printf("  |   -            |\n");
		printf(" a|       -  c     |\n");
		printf("  |            -   |\n");
		printf("  |_______________-|\n");
		printf("           b        \n");
		printf("1-a & b\n2-a & c\n3-b & c\n");
		scanf("%d", &r);
		if(r == 1)
		{
			printf("Enter the value of a and b one by one:\n");
			scanf("%f %f", &a, &b);
			printf("S.A. of Rectangle is %f.", a*b);
		}
		else if(r == 2)
		{
			printf("Enter the value of a and c one by one:\n");
			scanf("%f %f", &a, &c);
			b = sqrt((c*c)-(a*a));
			printf("b = %f\n", b);
			printf("S.A. of Rectangle is %f.", a*b);
		}
		else if(r == 3)
		{
			printf("Enter the value of b and c one by one:\n");
			scanf("%f %f", &b, &c);
			a = sqrt((c*c)-(b*b));
			printf("a = %f", a);
			printf("S.A. of Rectangle is %f.\n", a*b);
		}
		else 
		{
			printf("Your input is wrong.\n");
		}
	}
	else
	{
		printf("Your input is wrong.\n");
	}
	getch();
}
