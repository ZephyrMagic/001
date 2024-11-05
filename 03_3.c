#include <stdio.h>
#include <math.h>
int main()
{
	int w,y,m,d;
	double m1,h;
	printf("请输入年份 月份 日期:\n");
	scanf("%d %d %d",&y,&m,&d);
    if(y<1600)
	   {  printf("输入的年份小于1600，星期几未知\n");
	    return 0;}
	else if(m>12||m<1)
	   {  printf("输入的月份有误\n");
	    return 0;}
	else if(d>31||d<1)
	   {  printf("输入的日期有误\n");
	    return 0;}
	
	else if(m==2)
	     { if((y%4==0&&y%100!=0)||(y%100==0)&&d>29)
		    {printf("输入的日期有误\n");
	         return 0;}
		  else if(d>28)
		    {printf("输入的日期有误\n");
	         return 0;}
        	}
	 else if((m==4||m==6||m==9||m==11)&&d>30)
			 {printf("输入的日期有误\n");
	         return 0;}
	 else
		  { if(m==1||m==2)
	 { m1=m+12;}
		         
		    else
			{m1=m;}
	      
		h=(m1+floor(26*(m1+1)/10)+m1+floor(m1/4)+6*floor(m1/100)+floor(m1/400));
		w=(int)h%7;
		if (w==0)
			printf("今天是%d年%d月%d日星期六\n",&y,&m,&d);
		    return 0;
	    if (w==1)
			printf("今天是%d年%d月%d日星期日\n",&y,&m,&d);
		    return 0;
	    if (w==2)
			printf("今天是%d年%d月%d日星期一\n",&y,&m,&d);
		    return 0;
	    if (w==3)
			printf("今天是%d年%d月%d日星期二\n",&y,&m,&d);
 		    return 0;
	    if (w==4)
			printf("今天是%d年%d月%d日星期三\n",&y,&m,&d);
		    return 0;
	    if (w==5)
			printf("今天是%d年%d月%d日星期四\n",&y,&m,&d);
		    return 0;
	    if (w==6)
			printf("今天是%d年%d月%d日星期五\n",&y,&m,&d);
		    return 0;
	 }
	}