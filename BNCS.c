#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>

int anytodec(int,int);
int dectotwotonine(int,int);
int chk(int,int);
int elevenuptodec( int,int);
int dectoelevenup(int h,int tb);

void main()
{
    int inf,sb,tb;
    clrscr();
    printf("source base system :");
    scanf("%d",&sb);
    if(sb<2||sb>20)
    {
        printf("\ncrossed limits!!");
        exit(0);
    }
    else if(sb>=2&&sb<=10)
    {
        printf("\ninformation:");
        scanf("%d",&inf);
        anytodec(inf,sb);
    }
    else if(sb>=11&&sb<=20)
    {
        printf("\ntarget base system :");
        scanf("%d",&tb);
        if(tb<2||tb>20 )
        {
            printf("\ncroosed limits!!!");
            exit(0);
        }
        elevenuptodec(sb,tb);
    }
    
    
}


int anytodec(int inf,int sb)
{
    int flag;
    int tb,o=0 ;
    int a,i,num,t;
    
    int n,r,s=0;
    
    
    a=sb;
    num=inf;
    
    while(num)
    {
        t=num%10;
        num=num/10;
        ++o;
        if(sb==3)
        {
            if (t<0||t>2)
            {
                
                flag=0;
                chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==2)
        {
            if (t<0||t>1)
            {
                flag=0;   chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
                
            }
        }
        else if(sb==4)
        {
            if (t<0||t>3)
            {
                flag=0;             chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==5)
        {
            if (t<0||t>4)
            {
                
                flag=0;                       chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
                
            }
        }
        else if(sb==6)
        {
            if (t<0||t>5)
                
            {
                
                flag=0;                                 chk(flag,sb);
            }
            
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==7)
        {
            if (t<0||t>6)
            {
                
                flag=0;                                           chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==8)
        {
            if (t<0||t>7)
            {
                
                
                flag=0;chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==9)
        {
            if (t<0||t>8)
            {
                
                flag=0;          chk(flag,sb);
                
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(sb==10)
        {
            if (t<0||t>10)
            {
                
                flag=0;                    chk(flag,sb);
            }
            else
            {
                flag=1;
                break;
            }
            
        }
    }
    
    printf("\ntarget system: ");
    scanf("%d",&tb);
    if(tb<2||tb>20)
    {
        printf("\ncrossed limits!!!!");
        exit(0);
    }
    
    else
    {
        n=inf;
        for(i=0;n!=0;++i)
        {
            r=n%10;
            
            s=s+r*(int)pow(a,i);
            n=n/10;
        }
    }
    if(tb==10)
    {
        printf("\ninformation in target base system %d",s);
        exit (0);
    }
    else if(tb>=2&&tb<=9)
    dectotwotonine(s,tb);
    else if(tb>=11&&tb<=20)
    dectoelevenup(tb,s);
    return 0;
}
int chk(int flag,int sb)
{
    while(!flag)
    {
        int inf;
        printf("\n invalid input try again!!!");
        printf("\ninformation :"); fflush(stdin);
        scanf("%d",&inf);
        anytodec(inf,sb);
    }
    return 0;
}


int dectotwotonine(int s,int tb)
{
    
    int n,r[10],i;
    
    n=s;
    for(i=0;n!=0;i++)
    {
        r[i]=n%tb;
        n=n/tb;
    }
    printf("\ninformation in target base system :");
    i--;
    for(;i>=0;i--)
    printf("%d",r[i]);
    printf("\n");
    exit(0);
    return 0;
}

int elevenuptodec(int sb,int tb)
{
    int i,a[20];
    unsigned long int h=0,m=1;
    char s[20];
    
    
    fflush(stdin);
    printf("\ninformation :");
    
    fgets(s, sizeof(s), stdin);
    //scanf("%c",&s[i]);
    if(sb==16)
    {
        for(i=0;s[i]!=NULL && s[i] != '\n';i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                case 'f':
                case 'F':
                a[i]=15;
                break;
                default :
                {
                    printf(" invalid input try again!!!");
                    
                    elevenuptodec(sb,tb);
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=(h+(a[i]*m));
            m=m*16;
        }
        
        
    }
    
    else if(sb==11)
    {
        
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                break; }
            }
        }
        
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*11;
        }
        
    }
    
    else if(sb==12)
    {
        
        
        
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                
                default:
                {
                    elevenuptodec(sb,tb);
                    printf("\n  invalid input try again!!!!");
                break;  }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*12;
        }
        
    }
    
    
    else if(sb==13)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n  invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*13;
        }
        
    }
    
    
    else if(sb==14)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n  invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*14;
        }
    }
    
    else if(sb==15)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*15;
        }
        
    }
    
    else if(sb==17)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                case 'f':
                case 'F':
                a[i]=15;
                break;
                case 'g':
                case 'G':
                a[i]=16;
                break;
                default:
                {
                    
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                break; }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*17;
        }
        
    }
    
    else if(sb==18)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                case 'f':
                case 'F':
                a[i]=15;
                break;
                case 'g':
                case 'G':
                a[i]=16;
                break;
                case 'h':
                case 'H':
                a[i]=17;
                break;
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*18;
        }
        
    }
    
    else if(sb==19)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                case 'f':
                case 'F':
                a[i]=15;
                break;
                case 'g':
                case 'G':
                a[i]=16;
                break;
                case 'h':
                case 'H':
                a[i]=17;
                break;
                case 'i':
                case 'I':
                a[i]=18;
                break;
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*19;
        }
        
    }
    else if(sb==20)
    {
        for(i=0;s[i]!=NULL;i++)
        {
            switch(s[i])
            {
                case '0':
                a[i]=0;
                break;
                case '1':
                a[i]=1;
                break;
                case '2':
                a[i]=2;
                break;
                case '3':
                a[i]=3;
                break;
                case '4':
                a[i]=4;
                break;
                case '5':
                a[i]=5;
                break;
                case '6':
                a[i]=6;
                break;
                case '7':
                a[i]=7;
                break;
                case '8':
                a[i]=8;
                break;
                case '9':
                a[i]=9;
                break;
                case 'a':
                case 'A':
                a[i]=10;
                break;
                case 'b':
                case 'B':
                a[i]=11;
                break;
                case 'c':
                case 'C':
                a[i]=12;
                break;
                case 'd':
                case 'D':
                a[i]=13;
                break;
                case 'e':
                case 'E':
                a[i]=14;
                break;
                case 'f':
                case 'F':
                a[i]=15;
                break;
                case 'g':
                case 'G':
                a[i]=16;
                break;
                case 'h':
                case 'H':
                a[i]=17;
                break;
                case 'i':
                case 'I':
                a[i]=18;
                break;
                case 'j':
                case 'J':
                a[i]=19;
                break;
                default:
                {
                    
                    elevenuptodec(sb,tb);
                    printf("\n invalid input try again!!!!");
                    break;
                }
            }
        }
        
        i--;
        for(;i>=0;i--)
        {
            h=h+a[i]*m;
            m=m*20;
        }
    }
    
    if(tb==10)
    {
        printf("\ninformation in target base syetem : %ld",h);
        exit(0);
    }
    else if(tb>=11&&tb<=20)
    dectoelevenup(tb,h);
    else if(tb>=2&&tb<=9)
    
    dectotwotonine(h,tb);
    return 0;
}
int dectoelevenup( int tb,int h)
{
    
    
    int b,c=0,a[5],i=0;
    b=h;
    if(tb==16)
    {
        while (b>15)
        {
            a[i]=b%16;
            b=b/16;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            else if (a[i]==15)
                printf("F");
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==11)
    {
        while (b>10)
        {
            a[i]=b%11;
            b=b/11;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==12)
    {
        while (b>11)
        {
            a[i]=b%12;
            b=b/12;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==13)
    {
        while (b>12)
        {
            a[i]=b%13;
            b=b/13;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            
            else
                printf("%d",a[i]);
        }
        
    }
    
    if(tb==14)
    {
        while (b>13)
        {
            a[i]=b%14;
            b=b/14;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==15)
    {
        while (b>14)
        {
            a[i]=b%15;
            b=b/15;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==17)
    {
        while (b>16)
        {
            a[i]=b%17;
            b=b/17;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            else if (a[i]==15)
                printf("F");
            else if(a[i]==16)
            printf("G");
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==18)
    {
        while (b>17)
        {
            a[i]=b%18;
            b=b/18;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            else if (a[i]==15)
                printf("F");
            else if(a[i]==16)
            printf("G");
            else if(a[i]==17)
            printf("H");
            else
                printf("%d",a[i]);
        }
        
    }
    
    
    else if(tb==19)
    {
        while (b>18)
        {
            a[i]=b%19;
            b=b/19;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            else if (a[i]==15)
                printf("F");
            else if(a[i]==16)
            printf("G");
            else if(a[i]==17)
            printf("H");
            else if(a[i]==18)
            printf("I");
            else
                printf("%d",a[i]);
        }
        
    }
    
    else if(tb==20)
    {
        while (b>19)
        {
            a[i]=b%20;
            b=b/20;
            i++;
            c++;
        }
        a[i]=b;
        printf("\ninformation in target base system :");
        for (i=c;i>=0;--i)
        {
            if (a[i]==10)
                printf("A");
            else if (a[i]==11)
                printf("B");
            else if (a[i]==12)
                printf("C");
            else if (a[i]==13)
                printf("D");
            else if (a[i]==14)
                printf("E");
            else if (a[i]==15)
                printf("F");
            else if(a[i]==16)
            printf("G");
            else if(a[i]==17)
            printf("H");
            else if(a[i]==18)
            printf("I");
            else if(a[i]==19)
            printf("J");
            else
                printf("%d",a[i]);
        }
        
    }
    
    return 0;
}
