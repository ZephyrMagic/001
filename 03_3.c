#include <stdio.h>
#include <math.h>
int main()
{
	int w,y,m,d;
	double m1,h;
	printf("��������� �·� ����:\n");
	scanf("%d %d %d",&y,&m,&d);
    if(y<1600)
	   {  printf("��������С��1600�����ڼ�δ֪\n");
	    return 0;}
	else if(m>12||m<1)
	   {  printf("������·�����\n");
	    return 0;}
	else if(d>31||d<1)
	   {  printf("�������������\n");
	    return 0;}
	
	else if(m==2)
	     { if((y%4==0&&y%100!=0)||(y%100==0)&&d>29)
		    {printf("�������������\n");
	         return 0;}
		  else if(d>28)
		    {printf("�������������\n");
	         return 0;}
        	}
	 else if((m==4||m==6||m==9||m==11)&&d>30)
			 {printf("�������������\n");
	         return 0;}
	 else
		  { if(m==1||m==2)
	 { m1=m+12;}
		         
		    else
			{m1=m;}
	      
		h=(m1+floor(26*(m1+1)/10)+m1+floor(m1/4)+6*floor(m1/100)+floor(m1/400));
		w=(int)h%7;
		if (w==0)
			printf("������%d��%d��%d��������\n",&y,&m,&d);
		    return 0;
	    if (w==1)
			printf("������%d��%d��%d��������\n",&y,&m,&d);
		    return 0;
	    if (w==2)
			printf("������%d��%d��%d������һ\n",&y,&m,&d);
		    return 0;
	    if (w==3)
			printf("������%d��%d��%d�����ڶ�\n",&y,&m,&d);
 		    return 0;
	    if (w==4)
			printf("������%d��%d��%d��������\n",&y,&m,&d);
		    return 0;
	    if (w==5)
			printf("������%d��%d��%d��������\n",&y,&m,&d);
		    return 0;
	    if (w==6)
			printf("������%d��%d��%d��������\n",&y,&m,&d);
		    return 0;
	 }
	}