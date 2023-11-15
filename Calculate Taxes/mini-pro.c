#include <stdio.h>

line(int x,char y)
{
	int i;
	for(i=0;i<=x;i++){
		printf("%c",y);
	}
}
double Progressive_taxes(double income)
{
	int i;
	double rate[][8] = {{5000000,2000000,1000000,750000,500000,300000},{0.35,0.30,0.25,0.20,0.15,0.10,0.05,0.00}};
	double t =0;
	for( i=0; i<8;++i)
	{
		if(income>rate[0][i])
		{
		t += (income - rate[0][i]) * rate[1][i];
		printf("%12.0f %2.0f %12.0f %12.0f\n\n",rate[0][i],rate[1][i]*100,income-rate[0][i],(income-rate[0][i])*rate[1][i]);
		income=(rate[0][i]);
		}				   			
	}
return t;
}
Taxes_are_not_inheritance()
{ 
int year,x,sum,a;
int *m,*o;
double income,tax;
float price,price1,price3,sum1,sum4,sum5,sum6,sum7,sum8,sum9;

	line(100,'=');
	printf("\n\n");
	//Ex1
	printf("Ex1 : ");
	printf("On-hold start date\n\n");
	printf("Year >>>  ");
	scanf("%d",&year);
	line(100,'=');
	printf("\n\n");
	
	printf("*** End Date ***\n\n");
	printf("Year >>>  ");
	scanf("%d",&x);
	printf("\n");
	sum = x-year;
	o=&sum;
	line(100,'=');
	printf("\n");

		if(sum>10)
		{
			printf(">>> If it's more than 10 years, just 10 years <<<\n\n");
			sum = 10;
			printf("Number of years on hand : %d\n",sum);
			line(100,'=');
			printf("\n");
		}
		if(sum<=9)
		{
		
			printf("Number of years on hand : %d \n",sum);
			line(100,'=');
			printf("\n");
		}
	
	//EX2
	printf("\n");
	printf("Ex2 : ");
	printf("The period of time it is listed on the register of the house sold\n");
	printf("*** Available for 1 year or more Press 1 ***\n");
	printf("*** There is less than 1 year Press 2 ***\n");
	printf("*** There is no name in the register Press3 ***\n\n");
	
	
	printf("Please select numbers 1-3 : ");
	scanf("%d",&a);
	m=&a;
	line(100,'=');
	printf("\n\n");
	
	//Ex3
	
	printf("Ex3 : ");
	printf("Real Estate Sales Price(Baht) : ");
	scanf("%f",&price);
	line(100,'=');
	printf("\n\n");
	
	//Ex4
	printf("Ex4 : ");
	printf("Capital appraisal value in the registration of rights and legality(Baht) : ");
	scanf("%f",&price1);
	printf("\n");
	printf("In case the sales price according to 2) is higher than the appraisal value according to 3)\nthe price is held according to 3)\n\n");
	printf("In case the sales price according to 2) does not exceed or is below the appraisal value according to 3)\nthe price shall be held according to 3)\n\n");
	line(100,'=');
	printf("\n\n");
	
	//Ex5
	
	printf("EX5 :  ");
	if(*o==1)
	{
		
		printf("Royal Decree Expenses (No. 165) by : 92%%\n\n");
		price3 = price1*0.92;
		printf("Expenses are subcontracted by the number of years held. : %.2f",price3);
		line(100,'=');
		printf("\n\n");
	}
		if(*o==2)
	{
		printf("Royal Decree Expenses (No. 165) by : 84%%\n\n");
		price3=price1*0.84;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n",price3);
		line(100,'=');

		
	}
		if(*o==3)
	{
		printf("Royal Decree Expenses (No. 165) by : 77%%\n\n");
		price3 = price1*0.77;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n",price3);
		line(100,'=');

		
	}
		if(*o==4)
	{
		printf("Royal Decree Expenses (No. 165) by : 71%%\n\n");
		price3=price1*0.71;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n",price3);
		line(100,'=');

		
	}
		if(*o==5)
	{
		printf("Royal Decree Expenses (No. 165) by : 65%\n\n");
		price3 = price1*0.65;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n",price3);
		line(100,'=');

	}
		if(*o==6)
	{
		printf("Royal Decree Expenses (No. 165) by : 60%%\n\n");
		price3=price1*0.6;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n\n",price3);
		line(100,'=');

	}
		if(*o==7)
	{
		printf("Royal Decree Expenses (No. 165) by : 55%%\n");
		price3=price1*0.55;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n\n",price3);
		line(100,'=');

		
	}
		if(*o>=8)
	{
		printf("Royal Decree Expenses (No. 165) by : 50%%\n");
		price3 = price1*0.5;
		printf("Expenses are subcontracted by the number of years held. : %.2f\n\n",price3);
		line(100,'=');
	}
	printf("\n\n");
	
	//EX6
	printf("EX6 : ");
	sum1=price1-price3;
	printf("Net income : %.2f \n\n",sum1);
	line(100,'=');
	printf("\n\n");
	
	//Ex7
	
	printf("EX7 : ");
	income = sum1/sum;
	printf("Number of years on hand : %.2f \n\n",income);
	line(100,'=');
	printf("\n\n");
	
	//Ex8
	printf("\t   >>> Progressive taxation <<<\n");
	line(100,'=');
	printf("\n\n");
	tax = Progressive_taxes(income);
	line(100,'=');
	printf("\n\n");
	printf("EX8 : ");
	printf("Income tax per year held =%.2f\n\n",tax);
	line(100,'=');
	printf("\n\n");
	
	//Ex9
	printf("EX9 : ");
	sum4=tax*sum;
	printf("Times the number of years on hand : %.2f\n\n",sum4);
	line(100,'=');
	printf("\n\n");
	
	//Ex10
	printf("EX10 : ");
	sum5 = price1*0.2;
	printf(" Appraisal price x 20 percent : %.2f \n\n",sum5);
	line(100,'=');
	printf("\n\n");
	
	//Ex11
	printf("EX11 : ");
	sum6= tax*sum;
	printf("Withholding tax : %.2f\n\n",sum6);
	line(100,'=');
	printf("\n\n");
	
	//Ex12  //Ex13
	printf("EX12 : ");
	if(*m==1)
	{
	printf("Available for 1 year or more\n\n");
	if(price1>price)
		{
		sum7 = price1/200;
		printf("revenue stamp : %.2f\n",sum7);
		}
		if(price>price1)
		{
		sum7 = price/200;
		printf("revenue stamp : %.2f\n\n",sum7);
		}
	line(100,'=');
	printf("\n\n");
	printf("EX13 : ");
	printf("Total payable :%.2f\n",sum7+sum6);
	}
	if(*m==2)
	{
	printf("There is less than 1 year\n");
		if(price>price1)
		{
		sum8 = price/100*3;
		sum9 = sum8/100*10;
		}
		if(price1>price)
		{
		sum8 = price1/100*3;
		sum9 = sum8/100*10;
		}
	printf("Specific business taxes (baht) : %.2f\n\n",sum8+sum9);
	line(100,'=');
	printf("\n\n");
	printf("EX13 : ");
	printf("Total payable :%.2f\n",sum8+sum9+sum6);
	}
	if(*m==3)
	{
		printf("There is no name in the register\n");
		if(price>price1)
		{
		sum8 = price/100*3;
		sum9 = sum8/100*10;
		}
		if(price1>price)
		{
		sum8 = price1/100*3;
		sum9 = sum8/100*10;
		}
		printf("Specific business taxes (baht) : %.2f\n\n",sum8+sum9);
		line(100,'=');
		printf("\n");
		printf("EX13 : ");
		printf("Total payable :%.2f\n\n",sum8+sum9+sum6);
	}
}
Inheritance_tax()
{ 
int year,x,sum,a;
int *y,*z;
double income,tax;
float price,price1,	price2,price3,sum1,sum4,sum5,sum6,sum7;

	//Ex1
	printf("Ex1 : ");
	printf("On-hold start date\n\n");
	printf("Year >>> ");
	scanf("%d",&year);
	line(100,'=');
	printf("\n\n");
	
	printf("***End Date ***\n\n");
	printf("Year >>> ");
	scanf("%d",&x);
	sum = x-year;
	y=&sum;
	line(100,'=');
	printf("\n");
		if(*y>10)
		{
			printf(">>> If it's more than 10 years, just 10 years <<<\n\n");
			sum = 10;
			printf("Number of years on hand : %d\n",sum);
			line(100,'=');
			printf("\n");
		}
		if(*y<=9)
		{
		
			printf("Number of years on hand : %d\n",sum);
			line(100,'=');
			printf("\n");
			
		}
		
	//EX2
	printf("\n");
	printf("Ex2 : ");
	printf("Real Estate Sales Price(Baht) : ");
	scanf("%f",&price);
	printf("\n");
	line(100,'=');
	printf("\n\n");

	//Ex3
	printf("Ex3 : ");
	printf("Capital appraisal value in the registration of rights and legality(Baht) : ");
	scanf("%f",&price1);
	printf("\n");
	printf("In case the sales price according to 2) is higher than the appraisal value according to 3)\nthe price is held according to 3)\n");
	printf("In case the sales price according to 2) does not exceed or is below the appraisal value according to 3)\nthe price shall be held according to 3)\n\n");
	line(100,'=');
	printf("\n\n");
	
	//EX4
	printf("Ex4 : ");
	printf("Deduct exempted income for properties located outside Bangkok, Pattaya City  (Not exceeding 200,000 baht per year If you are in the District, you will not be exempt from the funds.)\n\n");
	printf("Tax Raising Press1 No exclusions, press unless press 2 : ");
	scanf("%d",&a);
	z=&a;
	line(100,'=');
	printf("\n\n");
	
	if(*z==1)
	{ 
		printf("Amount of exclusion rights :");
		scanf("%f",&price2);
		if(price2<=200000)
		{
		price3 = price1- price2;
		}
	}
	if(*z==2)
	{
		price3 = price1;
	}
	
	//Ex5
	printf("\n");
	printf("Ex5 : ");
	printf(" Remaining : %.2f \n",price3);
	line(100,'=');
	printf("\n\n");
	
	//EX6
	printf("Ex6 : ");
	sum1 = price3/100*50;
	printf("Less Expenses in 50 Persen :%.2f \n ",sum1);
	line(100,'=');
	printf("\n\n");
	
	//EX7
	printf("Ex7 : ");
	printf("Net income : %.2f \n",sum1);
	line(100,'=');
	printf("\n");
	
	//Ex8
	printf("Ex8 : ");
	income = sum1/sum;
	printf(" Number of years on hand : %.2f \n",income);
	line(100,'=');
	printf("\n");
	//Ex9
	
	printf("\t   >>> Progressive taxation <<<\n");
	line(100,'=');
	printf("\n\n");
	tax = Progressive_taxes(income);
	line(100,'=');
	printf("\n\n");
	printf("Ex9 : ");
	printf("Income tax on hand =%.2f\n",tax);
	line(100,'=');
	printf("\n\n");
	//Ex10
	
	printf("Ex10 : ");
	sum4=tax*sum;
	printf("Times the number of years on hand : %.2f\n\n",sum4);
	line(100,'=');
	printf("\n\n");
	//Ex11
	
	printf("Ex11 : ");
	sum5 = price1*0.2;
	printf(" Appraisal price x 20 percent : %.2f \n",sum5);
	printf("\n");
	printf("If the withholding tax under 10) is greater than 11), the withholding tax is equal to 11)\n");
	printf("If the withholding tax under 10 ) is less than or equal to 11), the withholding tax is equal to 10)\n\n");
	line(100,'=');
	printf("\n\n");
	//Ex12
	
	printf("Ex12 : ");
	sum6=tax*sum;
	printf("Withholding tax : %.2f\n\n",sum6);
	line(100,'=');
	printf("\n\n");
	//Ex13
	
	printf("Ex13 : ");
	if(price1>price)
	{
	sum7 = price1/200;
	printf("revenue stamp : %.2f\n\n",sum7);
	}
	if(price>price1)
	{
	sum7 = price/200;
	printf("revenue stamp : %.2f\n\n",sum7);
	}
	line(100,'=');
	printf("\n\n");
	
	//Ex14
	printf("Ex14 : ");
	sum7 =sum6+sum7;
	printf("Total payable :%.2f\n",sum7);
	line(100,'=');
	printf("\n\n");
}
Specific_business_taxes()
{
	float x,y,sum,sum1;
	float *sum2;
	line(100,'=');
	printf("\n\n");
	printf("Revenue from real estate sales and giving to others (Baht) :");
	scanf("%f",&x);
	line(100,'=');
	printf("\n\n");
	printf("Capital appraisal value in the registration of rights and legality (Baht) :");
	scanf("%f",&y);
	
	if(x>y)
	{
	sum = x/100*3;
	line(100,'=');
	printf("\n\n");
	printf("Tax business only at the rate of 3% (Baht) :%.2f \n",sum);
	sum1 = sum/100*10;
	}
	if(y>x)
	{
	sum = y/100*3;
	line(100,'=');
	printf("\n\n");
	printf("Tax business only at the rate of 3% (Baht) :%.2f \n",sum);
	sum1 = sum/100*10;
	}
	sum2=&sum1;
	line(100,'=');
	printf("\n\n");
	printf("Local taxes, another 10 percent of a specific business tax (Baht) : %.2f \n",*sum2);
	line(100,'=');
	printf("\n\n");
	printf("Specific business taxes (Baht) : %.2f\n\n",sum+*sum2);
	line(100,'=');
	printf("\n");
}
Calculate_stamp_duty()
{
	float a,b;
	float *x,*y;
	line(117,'=');
	printf("\n\n");
	printf("Stamp duty at the rate of 1 baht per 200 baht and a fraction of 200 baht according to instrument characteristics 28.\n\n");
	line(117,'=');
	printf("\n\n");
	printf("Revenue from real estate sales and giving to others (baht) :");
	scanf("%f",&a);
	line(117,'=');
	printf("\n\n");
	printf("Capital appraisal value in the registration of rights and legality (baht) :");
	scanf("%f",&b);
	line(117,'=');
	printf("\n\n");
	if(a>b)
	{
		if(a>200&&b>200)
		{
			x=&a;
			printf("Stamp duty : %.2f\n",*x/200);
			line(117,'=');
			printf("\n\n");
			
		}
	}
	if(b>a)
	{
		if(a>200&&b>200)
		{
			y=&b;
			printf("Stamp duty : %.2f\n",*y/200);
			line(117,'=');
			printf("\n\n");
			
		}
	}
}

main()
{
	int number;
	char c;
	system("color E1");
	do
	{
	system("cls");
	line(100,'=');
	printf("\n");
	printf(">>> Calculate emerald taxes Press 1 <<<\n");
	printf(">>> Tax calculations are not inherited as mortality. Press 2 <<<\n");
	printf(">>> Calculate specific taxes Press 3 <<<\n");
	printf(">>> Stamp Duty Calculation Press 4 <<<\n\n");
	printf("Please select tax calculation section (1,2,3,4)");
	scanf("%d",&number);
	system("cls");
		if(number==1)
		{
			Taxes_are_not_inheritance();
		}
		if(number==2)
		{
			Inheritance_tax();
		}
		if(number==3)
		{
			Specific_business_taxes();
		}
		if(number==4)
		{
			Calculate_stamp_duty();
		}
	printf("\nAgain(Y/N) :");
	c=getche();
	}while(c=='y'||c=='Y');
	
}
