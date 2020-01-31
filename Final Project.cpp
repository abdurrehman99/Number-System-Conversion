//ICS Final Project : Conversion of Number Systems //
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void dec();void bin();void oct();void hex();
main()
{
	int op,choice;
do
{
	printf("********************************************\n******* CONVERSION OF NUMBER SYSTEMS *******\n********************************************\n\n");
	printf("==> Press 1 to Enter number in Decimal\n\n==> Press 2 to Enter number in Binary\n\n==> Press 3 to Enter number in Octal\n\n==> Press 4 to Enter number in Hexa-decimal\n\n");
    scanf("%d",&op);
    system("cls");
    switch(op)  
    {
	case 1:
	dec(); break;
	case 2:
	bin(); break;
	case 3:
	oct(); break;
	case 4:
	hex(); break;
	default:
    printf("******INVALID INPUT******\n");
    }
    printf("\n===>Press 1 to Continue\n\n===>Press 2 to Terminate\n\n");
    scanf("%d",&choice);
    system("cls");
} 
while(choice==1);
printf("\n\n\t\t***********Finish***********\n\n\t   MADE BY : ABDUR REHMAN & AMMAD AHMED");
getch();
}
void dec()
{
	long long int i=1,no,no1,no2,rm,j=1,rm1,k=0,rem,ans1=0,ans=0; 
	char ans2[50],HEXVALUE[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter Decimal number ==> ");
	scanf("%lld",&no);
	no1=no;
	no2=no;
	printf("\n***********************************\n");
	while(no!=0)
	{
		rm=no%2;
		ans=ans+(rm*i);
		i=i*10;
		no=no/2;
	}
	printf("\nBinary Equivalent is ==> %lld\n",ans);
	while(no1!=0)
	{
		rm1=no1%8;
		no1=no1/8;
		ans1=ans1+(rm1*j);
		j=j*10;
	}
	printf("\nOctal Equivalent is ==> %lld\n",ans1);
    while(no2!=0)
    {
        rem=no2%16;
        no2=no2/16;
        ans2[k]=HEXVALUE[rem];
        k++;
    }
    ans2[k]='\0';
    strrev(ans2);
    printf("\nHexadecimal number ==> %s\n\n***********************************\n\n",ans2);
    getch();
}
void bin()
{
	long long int a,b,c=0,bn,re,i=0,rm,j=1,chk,x=0,rem,ans=0,ans2=0;
	char hexans[50],HEXV[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter Binary number ==> ");
	scanf("%lld",&b);
	a=b;
	do
	{
		chk=a%10;
			if(chk<0||chk>1)
			{
			printf("\nNot a Binary number\n\nEnter correct number ==> ");
			scanf("%lld",&b);break;
			}
			a=a/10;
			c++;
	}
	while(a!=0);
	printf("\n***********************************\n");
	while(b!=0)
	{
		re=b%10;
		b=b/10;
		ans=ans+(re*pow(2,i));
		i++;
	}
	printf("\nDecimal equivalent is ==> %ld\n",ans);
	bn=ans;
	while(ans!=0)
	{
		rm=ans%8;
		ans=ans/8;
		ans2=ans2+(rm*j);
		j=j*10;
	}
	printf("\nOctal equivalent is ==> %lld\n",ans2);
    while(bn!=0)
    {
        rem=bn%16;
        bn=bn/16;
        hexans[x]=HEXV[rem];
        x++;
    }
    hexans[x] ='\0';
    strrev(hexans);
    printf("\nHexadecimal number ==> %s\n\n***********************************\n\n",hexans);
	getch();
}
void oct()
{
	long long int oc,ro,l=0,ot,i=1,rm,an1,re,z=0,an=0,ann=0,chk,c=0;
	char hexan[50],HEXX[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter Octal number ==> ");
	scanf("%lld",&oc);
	ot=oc;
	do
	{
		chk=ot%10;
			if(chk<0||chk>7)
			{
			printf("\nNot a Octal number\n\nEnter correct number ==> ");
			scanf("%lld",&oc);break;
			}
			ot=ot/10;
			c++;
    }
    while(ot!=0);
	printf("\n***********************************\n");
	while(oc!=0)
	{
		ro=oc%10;
		oc=oc/10;
		an=an+(ro*pow(8,l));
		l++;
	}
	printf("\nDecimal equivalent is ==> %lld\n",an);
	an1=an;
	while(an!=0)
	{
		rm=an%2;
		an=an/2;
		ann=ann+(rm*i);
		i=i*10;
	}
	printf("\nBinary Equivalent is ==> %lld\n",ann);
	while(an1!=0)
    {
        re=an1%16;
        an1=an1/16;
        hexan[z]=HEXX[re];
        z++;
    }
    hexan[z] ='\0';
    strrev(hexan);
    printf("\nHexadecimal number ==> %s\n\n***********************************\n\n",hexan);
	getch();
}
void hex()
{
	long long int ans=0,val,length=0,i=0,rm,ans1=0,j=1,no,rm1,ans2=0,k=1;
	char hex[50];
	printf("Enter Hexa-decimal number ==> ");	
	scanf("%s",&hex);
	printf("\n***********************************\n\n");
	length=strlen(hex)-1;
	for(i=0;length>=0;i++)
	{
		if(hex[i]>='0'&&hex[i]<='9')
		{
			val=hex[i]-48;
		}
		else if(hex[i]>='a'&&hex[i]<='f')
		{
			val=hex[i]-87;
		}
		else if(hex[i]>='A'&&hex[i]<='F')
		{
			val=hex[i]-55;
		}
		ans=ans+(val*pow(16,length));
		length--;
	}
	printf("Decimal equivalent is ==> %lld\n",ans);
	no=ans;
	while(ans!=0)
	{
		rm=ans%2;
		ans=ans/2;
		ans1=ans1+(rm*j);
		j=j*10;
	}
	printf("\nBinary Equivalent is ==> %lld\n",ans1);
	while(no!=0)
	{
		rm1=no%8;
		no=no/8;
		ans2=ans2+(rm1*k);
		k=k*10;
	}
	printf("\nOctal equivalent is ==> %lld\n",ans2);
	printf("\n***********************************\n\n");
	getch();
}
//Made by Abdur Rehman & Ammad Ahmed//
