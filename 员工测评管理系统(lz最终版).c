#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 2
int number,o,z;
int mark[N];
int m[N];
int n[N];
int x[N];
int b=0,c=0,d=0,e=0,f=0,i=0,k=0,p=0,g=0,h=0,j=0;
int judge();
char ad2[30];
void notice();
void input();
void count();
void bubbling();
void Query();
void change();
void paixu();
void save();
void read();
void add();
void output1();
void output2();
void output3();
void output5();
void NO1();
void NO2();
void NO3();
void NO4();
void NO5();
void NO6();
void NO7();
void NO8();
void NO9();


struct worker
{
	int id;
	char name[20];
	char job[20];
	int age;
	float mark;
	char rank[10];
};
struct worker member[N];



struct add
{
	int id;
	char name[20];
	char job[20];
	int age;
	float mark;
	char rank[10];
};
struct add addd[1];

void notice()//��ʾ��Ϣ
{
	printf("\n");
	printf("����\t����\tְλ\t����\t����\n");
}


void input()//����
{
	for(i=0;i<N;i++)
	{
		scanf("%d%s%s%d%f",&member[i].id,member[i].name,member[i].job,&member[i].age,&member[i].mark);
	}

}


int judge() //�ȼ�����
{
	printf("\n");
	for(i=0;i<N;i++)
	{
		m[i]=member[i].mark/10;
	}
	for(i=0;i<N;i++)
	{
		switch(m[i])
		{	
		case 10:strcpy(member[i].rank,"����");break;
		case 9:strcpy(member[i].rank,"����");break;
		case 8:strcpy(member[i].rank,"����");break;
		case 7:strcpy(member[i].rank,"�е�");break;
		case 6:strcpy(member[i].rank,"����");break;
		default:strcpy(member[i].rank,"������");break;
		}
	}
	return 0;
}


void count()//ͳ�Ƹ�����������
{
for(i=0;i<N;i++)
{
	if(strcmp("����",member[i].rank)==0)
		b=b+1;
	else if(strcmp("����",member[i].rank)==0)
		c=c+1;
	     else if(strcmp("�е�",member[i].rank)==0)
		     d=d+1;
		      else if(strcmp("����",member[i].rank)==0)
		             e=e+1;
			       else if(strcmp("������",member[i].rank)==0)
		                   f=f+1;
}
}


void bubbling()//����
{
	mark[0]=0;
	for(i=1;i<N;i++)
	{
		mark[i]=mark[i-1]+1;
	}
	for(g=1;g<=N-1;g++)
		for(h=0;h<N-g;h++)
		{
			if(member[i].mark>member[i+1].mark)
				{	
					j=mark[i];
					mark[i]=mark[i+1];
					mark[i+1]=j;
				}	
		}
}


void Query()//����
{
loop:printf("������Ҫ���ҵ�Ա����:");
	scanf("%d",&number);
	for(i=0;i<N;i++)
	{
		if(number==member[i].id)
		{
			printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[i].id,member[i].name,member[i].job,member[i].age,member[i].mark,member[i].rank);
		    k=k+1;
			p=i;
		}
	}
	if(k==0)
	{
		printf("�����ҵ��û������ڣ�����������!\n");
		goto loop;
	}   
}


void change()//�޸�
{
	int i;
	printf("\n��ѡ��1.�˳�\t\t2.�޸�����\t\t3.�޸Ĳ�����\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: return;
		case 2:
		   printf("�޸ĸ�Ա��������Ϊ:");
		   scanf("%s",member[p].name);
		   judge();
	       printf("����\t����\tְλ\t����\t����\t�ȼ�\n");
		   printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[p].id,member[p].name,member[p].job,member[p].age,member[p].mark,member[p].rank);
	       printf("\n");
		   break;
		case 3:
		   printf("�޸ĸ�Ա���Ĳ�����Ϊ:");
		   scanf("%f",&member[p].mark);
		   judge();
		   printf("����\t����\tְλ\t����\t����\t�ȼ�\n");
		   printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[p].id,member[p].name,member[p].job,member[p].age,member[p].mark,member[p].rank);
	       printf("\n");
		   break;
	}
}

void paixu()//����
{
	for(i=0;i<N;i++)
	{
		x[i]=i;
	}

	for(i=0;i<N;i++)
	{
		if(member[i].mark<member[i+1].mark)
		{
			z=x[i];
			x[i]=x[i+1];
			x[i+1]=z;
		}
	}
}


void output1()
{
	printf("=======================================================");
	printf("\n");
	printf("����\t����\tְλ\t����\t����\n");
	for(i=0;i<N;i++)
	{
		printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[i].id,member[i].name,member[i].job,member[i].age,member[i].mark,member[i].rank);
	}
	printf("\n");
}


void output2()
{
	printf("=======================================================");
	printf("\n");
	printf("����\t����\tְλ\t����\t����\t�ȼ�\n");
	for(i=0;i<N;i++)
	{
		printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[i].id,member[i].name,member[i].job,member[i].age,member[i].mark,member[i].rank);
	}
	printf("=======================================================");
	printf("\n");
	printf("�ɼ�Ϊ����������У�%d\n",b);
	printf("�ɼ�Ϊ���õ������У�%d\n",c);
	printf("�ɼ�Ϊ�еȵ������У�%d\n",d);
	printf("�ɼ�Ϊ����������У�%d\n",e);
	printf("�ɼ�Ϊ������������У�%d\n",f);
	printf("=======================================================");
	printf("\n");
}


void output3()
{
	printf("���˵÷���ߵ�Ա��:");
	printf("%-9d%-9s%-9s%-9d%-9.1f%-9s\n",member[mark[N-1]].id,member[mark[N-1]].name,member[mark[N-1]].job,member[mark[N-1]].age,member[mark[N-1]].mark,member[mark[N-1]].rank);
	printf("���˵÷���͵�Ա��:");
    printf("%-9d%-9s%-9s%-9d%-9.1f%-9s\n",member[mark[0]].id,member[mark[0]].name,member[mark[0]].job,member[mark[0]].age,member[mark[0]].mark,member[mark[0]].rank);
	printf("\n");
}

void output5()
{
	printf("=======================================================");
	printf("\n");
	printf("����\t����\tְλ\t����\t����\n");
	for(i=0;i<N;i++)
	{
		printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[x[i]].id,member[x[i]].name,member[x[i]].job,member[x[i]].age,member[x[i]].mark,member[x[i]].rank);
	}
	printf("\n");
}

void save()
{	
	FILE *fp;
	char ad[30];
	printf("������Ҫ�����·�����ļ���:���磺c:\\\\info.txt)\n");
	scanf("%s",ad);
	if((fp=fopen(ad,"w+"))==NULL)
		{
        printf("�޷����ļ���\n");
		return;
		}
	fprintf(fp,"����\t����\tְλ\t����\t����\t�ȼ�\n");
	judge();
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[i].id,member[i].name,member[i].job,member[i].age,member[i].mark,member[i].rank);
	}
	fclose(fp);
	printf("����ɹ���");
}



void read()
{
	FILE *fp;
	char ad2[30];
	printf("������Ҫ��ȡ��·�����ļ���:���磺c:\\\\info.txt)\n");
	scanf("%s",ad2);
	if((fp=fopen(ad2,"r"))==NULL)
	{
		printf("�޷����ļ���\n");
		return;
	}
	fscanf(fp,"����\t����\tְλ\t����\t����\t�ȼ�\n");
	for(i=0;i<N;i++)
	{
		fscanf(fp,"%d%s%s%d%f%s\n",&member[i].id,&member[i].name,&member[i].job,&member[i].age,&member[i].mark,&member[i].rank);
	}
	{
	fclose(fp);
	}
	if(EOF==-1)
	{
		o=o+1;
	}
}


void add()
{	
	FILE *fp;
	printf("������Ҫ��ӵ�Ա����Ϣ��\n");
	printf("����\t����\tְλ\t����\t����\n");
	scanf("%d%s%s%d%f",&addd[1].id,addd[1].name,addd[1].job,&addd[1].age,&addd[1].mark);
	printf("������Ҫ��ӵ�·�����ļ���:���磺c:\\\\info.txt)\n");
	scanf("%s",ad2);
	if((fp=fopen(ad2,"a"))==NULL)
	{
		printf("�޷����ļ���\n");
		return;
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		m[1]=addd[1].mark/10;
	}
	for(i=0;i<1;i++)
	{
		switch(m[1])
		{	
		case 10:strcpy(addd[1].rank,"����");break;
		case 9:strcpy(addd[1].rank,"����");break;
		case 8:strcpy(addd[1].rank,"����");break;
		case 7:strcpy(addd[1].rank,"�е�");break;
		case 6:strcpy(addd[1].rank,"����");break;
		default:strcpy(addd[1].rank,"������");break;
		}
	}
	fprintf(fp,"%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",addd[1].id,addd[1].name,addd[1].job,addd[1].age,addd[1].mark,addd[1].rank);
	fclose(fp);
	printf("����ɹ���");

	}


void NO1()
{
	notice();
	input();
	output1();
	o=o+1;
}


void NO2()
{
	judge();
	count();
	output2();
}


void NO3()
{
	judge();
	count();
	bubbling();
	output3();
}


void NO4()
{
	Query();
	change();
}


void NO5()
{
	judge();
	paixu();
	output5();
}


void NO6()
{
	save();
}


void NO7()
{
	read();
	judge();
	printf("=======================================================");
	printf("\n");
	printf("����\t����\tְλ\t����\t����\t�ȼ�\n");
	for(i=0;i<N;i++)
	{
		printf("%-d\t%-s\t%s\t%d\t%.1f\t%s\t\n",member[i].id,member[i].name,member[i].job,member[i].age,member[i].mark,member[i].rank);
	}
	printf("=======================================================");
	printf("\n");
}


void NO8()
{
	add();
}

void NO9()
{
	exit(0);
}

int main(void)
{
    int t;
	printf("*********************��ӭʹ��Ա����Ϣ����ϵͳ*********************\n");
	while(1)
	{
		printf("1.���벢��ʾԱ����Ϣ\n");
		printf("2.ͳ�Ƹ��ȼ�Ա�����ж�����\n");
		printf("3.��ѯ���˵÷���ߺ����Ա��\n");
		printf("4.��ѯ���޸�Ա����Ϣ\n");
		printf("5.ͨ��������Ա����������\n");
		printf("6.����Ա����Ϣ��Ӳ��\n");
		printf("7.��Ӳ�̶�ȡԱ����Ϣ\n");
		printf("8.���Ա����Ϣ��Ӳ��\n");
		printf("9.�˳�����\n");
		printf("\n����������ѡ���ţ�\n");
		scanf("%d",&t);
		switch(t)
		{
		case 1:NO1();break;

		case 2:
			if(o==0)
			{
				printf("���������!\n");
				printf("\n");
			break;
			}
			printf("\n");
			NO2();break;
		case 3:
			if(o==0)
			{
				printf("���������!\n");
				printf("\n");
			break;
			}
			printf("\n");
			NO3();break;
		case 4:
			if(o==0)
			{
				printf("���������!\n");
				printf("\n");
			break;
			}
			printf("\n");
			NO4();break;
		case 5:
				if(o==0)
			{
				printf("���������!\n");
				printf("\n");
			break;
				}
			NO5();break;
		case 6:
				if(o==0)
			{
				printf("���������!\n");
				printf("\n");
			break;
				}
			NO6();break;
		case 7:
			NO7();break;
		case 8:
			NO8();break;
		case 9:
			NO9();break;
		}
	}
}
