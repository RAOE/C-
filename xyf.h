#define LG (sizeof(struct student))
struct student
{
  char name[10];//����ѧ������
  char sex[5];//����ѧ�����Ա�
  long int num;//ѧ��
  int xuhao;//
  int age;
  float score[3];
  float averange;//ƽ����
  char DJ;//��ŵȼ�Ŷ
  struct student *next;

       };//����ṹ��������� ���� �Ա� ���� �ɼ�]   �ṹ������
int n;//���ѧ������
int man;//���ͳ�Ƶ�������
int time=3000;//����ȫ�ֱ�����ͣʱ��
float JY(float a)//�ɼ�У�麯��
{
	int n=0;
	while(1)
	{
	if(a>100||a<0)
	{
    printf("          ����ɼ�����,��ΧӦ��0-100�����������룺");
	scanf("%f",&a);
	n=n+1;
	}
	else
	{
	return a;
	}
	}
}
struct student *creat(void)// ����������
{
    struct student *head;//ͷָ�� 
    struct student *p1,*p2,*p3;// ����ָ�� 
    int mm=0;
    int m=1;
       n=0;
       p1=p2=(struct student *)malloc(LG); // �����ڴ�ռ� 
	  if(p1==NULL)
	  {
	  printf("�����ڴ�ռ�ʧ��\n");
	  }
	   //�ڴ�ռ俪�ٺ����һ��Ҫ�ͷ�
	   printf("��������ѧ��(����0�˳�¼��)\n");
	   printf("   ");
	   p1->xuhao=m;
	   m++;
	   scanf("%d",&p1->num);
	   if(p1->num!=0)
	   {
	   printf("  ��������������\n");
	   printf("    ");
       scanf("%s",&p1->name);
	   printf("  ���,%s!",p1->name);
       printf("�����������Ա�male or female\n");
	  //mm=sexJY((char*)p1->sex);//char **������char *���Ͳ�����  ��Ҫǿ��ת��Ϊchar*����
	   printf("    ");
       scanf("%s",&p1->sex);   
	   mm=sexJY(p1->sex);
	   if(mm==1)
	   {         
          printf("   ���������Ƴɼ�,�����ĳɼ�����ѧ�ɼ�������ɼ���\n");
		  printf("                   ��һ�Ƶĳɼ���:");
          scanf("%f",&p1->score[0]); 
		  p1->score[0]=JY(p1->score[0]);//У���һ�Ƶĳɼ�	  
		  printf("                   �ڶ��Ƶĳɼ���:");
		  scanf("%f",&p1->score[1]); 
		  p1->score[1]=JY(p1->score[1]);//У��ڶ��Ƶĳɼ�
		  printf("                   �����Ƶĳɼ���:");
		  scanf("%f",&p1->score[2]);
		  p1->score[2]=JY(p1->score[2]);//У������Ƶĳɼ�
          printf("                   ¼�����\n");
	      
		  _sleep(1000);
		  printf("-----------------------------------------------------------------------------------------------------------------\n");

	   }  
	   } 
 
 head=NULL;
 while(1)
 {
	n=n+1;
    if(n==1) 
    {
      head=p1;  
            }     
    else 
	{
     p3=(struct student *)malloc(LG);

	printf("��������ѧ��(����0�˳�¼��)\n");
	printf("   ");
	p3->xuhao=m;
	m++;
	scanf("%d",&p3->num);

	if(p3->num!=0)
	   {
	   printf("  ��������������\n");
	   printf("    ");
       scanf("%s",&p3->name);
	   printf("  ���,%s!",p3->name);
       printf("�����������Ա�male or female\n");
	   printf("    ");
       scanf("%s",&p3->sex);  
	     mm=sexJY(p3->sex);//char **������char *���Ͳ�����  ��Ҫǿ��ת��Ϊchar*����
	     if(mm==1)
	       {
	          
            printf("   ���������Ƴɼ�,�����ĳɼ�����ѧ�ɼ�������ɼ���\n");
		    printf("                   ��һ�Ƶĳɼ���:");
            scanf("%f",&p3->score[0]); 
		    p3->score[0]=JY(p3->score[0]);//У���һ�Ƶĳɼ�	 
		    printf("                   �ڶ��Ƶĳɼ���:");
		    scanf("%f",&p3->score[1]);
		    p3->score[1]=JY(p3->score[1]);//У��ڶ��Ƶĳɼ�
		    printf("                   �����Ƶĳɼ���:");
		    scanf("%f",&p3->score[2]);
	        p3->score[2]=JY(p3->score[2]);//У������Ƶĳɼ�
            printf("                   ¼�����\n");
			 _sleep(1000);
		    printf("-----------------------------------------------------------------------------------------------------------------\n");
			
			p2->next=p3;
            p2=p3;
			printf("%d",n);
	      }
	   }
	else
	{
	n--;
	break;
	}
	}

 }

p2->next=NULL;
return (head);
}////�ṹ������
void body()//�������
{   
/*
char stCmd[128];
sprintf("mode con cols=%d lines=%d", height, width);
system(stCmd);��̬���ô����С
*/
	system("mode con cols=120 lines=40");
	//system("color f4");
    printf("\n   ----------------------------------------------- ѧ���ɼ�����ϵͳ-----------------------------------------------\n"); 
    printf("\n");
	printf("\n");
    printf("                                             ===========================\n");
    printf("                                               =     ������������     =\n");
    printf("                                             ===========================\n");
     printf("                   ������ѧ������Ϣ�������������Ա����� �����ĳɼ�����ѧ�ɼ�������ɼ���\n \n \n");
	printf("   ---------------------------------------------------------------------------------------------------------------\n   "); 
    printf("\n");
}
void body2()//�������
{
    printf("\n   ----------------------------------------- ѧ���ɼ�����ϵͳ-----------------------------------------------\n"); 
    printf("\n");
	printf("\n");
    printf("                                      ==========================\n");
    printf("                                          =      ��ӭ    =\n");
	printf("                                           ��ϵͳ����%d��ѧ��\n",n);
    printf("                                      ===========================\n");
}
int showdata(struct student *head)//���ܽ��棬
{
    struct student *p,*p1;
	int sexJY(char *sex);//�Ա�У�麯��
	void *dell(struct student *head);//�ݻٺ���
	struct student *del(struct student *head);
	struct student *del2(struct student *head);
    long int search(struct student *head);//���ҹ���
	int showdata3(struct student *head);//ϵͳ����
	void print1(struct student *head);//��ӡ����1
	void print2(struct student *head);//��ӡ����2
    void print3(struct student *head);//��ӡ����3
	void out1(struct student *head);//������ļ�����
	struct student *add(struct student *head);//��ӹ���
	void cont(struct student *head);//���㹦��1
	void  change1(struct student*head);//�޸Ĺ���
	struct student* input1();//�ⲿ���빦��
	//void input1(struct student *head);//¼�빦��
	//void change1(struct student*head, long int i)//�޸Ĺ��� 
	struct student *add(struct student *head);//��������
	struct student*nsert(struct student *head);
	void sort(struct student *head);//������
//	void destroy1(struct student *head);//�ݻ�����
	int TJ(struct student *head);//�������㹦��
    int i;//���ѧ����� 
	int iii;//���ѡ����ʾ����
    int j;//���ѡ����� 
	int o;//ѡ����ɫ����
	int num;//�����Ҫɾ���Ľڵ� 
    long int ii;//�����Ҫ�޸ĵ�ѧ�����
	long int jj;//�����Ҫ���ҵ�ѧ�����
    char a;
    

p=head; 

	while(1)
{
    body2();
    printf("\n");
	printf("\n");
    printf("\n---------- ѧ���ɼ�����ϵͳ------------\n"); 
    printf("\n");
    printf("     1  ======================\n");
    printf("       =       ���˵�       =\n");
    printf("       ======================\n");
    printf("\n");
    printf("      �������Ҫѡ�����\n");
    printf("\n");
    printf("      ѡ���ѯ�ķ�ʽ\n");
	printf("     (0) ����0�˳���ϵͳ\n");
    printf("    ��1������һ��ͬѧ��Ϣ                                                         \n");
    printf("    ��2��ɾ��һ��ͬѧ��Ϣ                                                            \n");
    printf("    ��3���޸�һ��ѧ����Ϣ                                                            \n");//���
	printf("    ��4������ѧ��������ƽ���ֲ��Ҹ���ȼ�                                             \n");//���
	printf("    ��5����ʾ����ѧ������Ϣ                                                              \n");//���
	//printf("     (6) ����ϵͳ����                                                              \n");//���
	printf("     (6) ���ݴ���                                                  \n");//���
	printf("     (7) ����һ��ѧ������Ϣ\n");
	printf("     (8) ͳ������������\n");
	printf("     (9) �ֲ���ʾѧ������Ϣ\n");
	printf("     (10)ϵͳ����\n");
	printf("     (11)���� \n");//ʵ�������ܣ����ֽܷ������򣿲���������
	//printf("     (12) ɾ������ѧ��������\n");
	//printf("     (13) ���ݴ���\n       ");
	printf("     ��ѡ��1-11\n");

    scanf("%d",&j);//ѡ��ͬ�Ĺ���
	if(j==0)
	{
	break;
	}
	if(j>=1&&j<=11)
	{
    switch(j)
    {
		 case 1:
         add(p);
         _sleep(time);
		 system("cls");//�������� 
         break;
         case 2:  
         p=del(p);
         _sleep(time);
		 system("cls"); 
         break;
         case 3:
         print3(p);
		 change1(p);
		 break;
	 //    change1(p,ii);
		 system("cls"); 
         break;
		 case 4:
		 cont(p);
	     //rank(stu);
		 _sleep(time);
		 system("cls"); 
		 break;
		 case 5:
	     print3(p);
        _sleep(time);				 
		 break;
		 case 6:
			 out1(p);
			 _sleep(time);
			 break;
		/* case 6:
		 printf("��ѡ����ɫ\n");
		 printf("��1������ɫ");
		 printf("��2����ɫ");
		 printf(" (3) ��ɫ ");
		 printf(" (4) ����ɫ ");
		 printf(" (5)��ɫ ");
		 scanf("%d",&o);
		 switch(o)
		 {
		 case 1:
	     system("color 0B");
		 break;
		 case 2:
		 system("color 0C");
		 break;
		 case 3:
		 system("color 07");
		 break;
		 case 4:
		 system("color 0F");
		 break;
		 case 5:
          system("color 0A");
		 break;
	     default://����ֵ��ΪĬ��
			system("color 07");
		 break;
		 }
		 break;*/
		 case 7:
			 printf("������Ҫ���ҵ�ѧ��ѧ��");
			 search(p);
			_sleep(time);
		     break;
		 case 8:
			 TJ(p);//������������
		_sleep(time);
		    break;
		 case 9:
			 showdata2(p);
			 _sleep(time);
			// _sleep(5000); 
		    break;
		 case 10://ϵͳ����
			 showdata3(p);
			 _sleep(time);
			 break;
			 
	     case 11:
		    sort(p);
			time=time*1000;
			_sleep(time);
			break;
			
		 /*case 12:
			 printf("���ڴݻ�����\n");
			 dell(p);
			 time=time*1000;
			_sleep(time);*/
		 /*case 13:
			 out1(p);
			 _sleep(time);
			 */

       }
 }
	else
	{
	printf("�������\n");
	_sleep(time);
	system("cls");
	}


	   }

     }
int showdata2(struct student *head)
{

    struct student *p;

	int sexJY(char *sex);//�Ա�У�麯��
	struct student *del(struct student *head);
	struct student *del2(struct student *head);//ɾ������2
//	long int search(struct student *head,long int i);//���ҹ���
	void print1(struct student *head);//��ӡ����1
	void print2(struct student *head);//��ӡ����2
    void print3(struct student *head);//��ӡ����3
	void cont(struct student *head);//���㹦��1
	void  change1(struct student*head);
	struct student *add(struct student *head);//��������
	struct student*nsert(struct student *head);
	int TJ(struct student *head);//�������㹦��
	int iii;//���ѧ���Ĳ�ѯ����
	p=head;
	system("cls");//����
	printf("     1  ======================\n");
    printf("       =       ���˵�       =\n");
    printf("       ======================\n");
	printf("     ѡ���ѯ�ķ�ʽ\n");
	printf("\n  1.��ʾ����ѧ���ĳɼ�\n");
    printf("\n  2.��ʾ����ѧ����ѧ���Ա�\n");
	printf("\n  3.��ʾ����ѧ����������Ϣ\n");
	printf("     ��ѡ��1-3\n");
			 scanf("%d",&iii);
			
			 switch (iii)
			 {
			 case 1:
				 print2(p);
				  _sleep(1000);
				 break;
			 case 2:
				 print1(p);
				 _sleep(1000);
				 break;
			 case 3:
				 print3(p);
				 _sleep(1000);
				 break;
			 default:
				 printf("�������,�������˵�\n");
				 break;
			 }

			 return 0;

}//�����˵� 
int showdata3(struct student *head)//ϵͳ����ѡ��
{
	struct student *p;
	int iii;
	int o;
	p=head;
	system("cls");//����
	printf("     1  ======================\n");
    printf("       =       ���˵�       =\n");
    printf("       ======================\n");
	printf("     ѡ���ѯ�ķ�ʽ\n");
	printf("\n (1). ����ϵͳ����     \n");
    printf("\n (2). �޸�ϵͳ��ʱ     \n");
	printf("\n (3). ɾ�������������ݲ����¶���\n");
	printf("     ��ѡ��1-2\n");
	 scanf("%d",&iii);
			
		 switch (iii)
			 {
		 case 1:
		 printf("��ѡ����ɫ\n");
		 printf("��1������ɫ");
		 printf("��2����ɫ");
		 printf(" (3) ��ɫ ");
		 printf(" (4) ����ɫ ");
		 printf(" (5)��ɫ ");
		 scanf("%d",&o);
	     switch(o)
		 {
		 case 1:
	     system("color 0B");
		 break;
		 case 2:
		 system("color 0C");
		 break;
		 case 3:
		 system("color 07");
		 break;
		 case 4:
		 system("color 0F");
		 break;
		 case 5:
          system("color 0A");
		 break;
	     default://����ֵ��ΪĬ��
			system("color 07");
		 break;
		 }
		   _sleep(1000);
			 break;
			case 2:
			printf("������ͣʱ��(s),Ĭ��3s\n");
			scanf("%d",&time);
			time=time*1000;
			_sleep(time);
			break;
			case 3:
			printf("���ڴݻ�����\n");
			 dell(p);
			 time=time*1000;
			_sleep(1000);
			break;
			 default:
				 printf("�������,�������˵�\n");
				 break;
			 }

			 return 0;

}
void print1(struct student *head)
{
	struct student *p;
	p=head;
	if(head==NULL)
	{
	exit(0);
	}
	printf("------------------------------------------------------------------------------------------------------------------\n");
	do
	{
		printf("\n ����:%s,ѧ��%d,%s\n\n",p->name,p->num,p->sex);//������ѧ��
		p=p->next;
	}while(p!=NULL);
}//��ͬ��ʾ���ݵķ�ʽ ��һ��
void print2(struct student *head)//��ʾ����ѧ���ĳɼ�
{
	struct student *p;
	p=head;
	if(head==NULL)
	{
	exit(0);
	}
	printf("------------------------------------------------------------------------------------------------------------------\n");
	do
	{
		printf("\n\n ����%s,����:%3.1f,��ѧ:%3.1f,����:%3.1f\n",p->name,p->score[0],p->score[1],p->score[2]);
		p=p->next;
	}while(p!=NULL);
}//��ͬ��ʾ���ݵķ�ʽ �ڶ���
void print3(struct student *head)
{
	float a;
	struct student *p;
 	p=head;
	if(head==NULL)
	{
	exit(0);
	}
 	
		printf("------------------------------------------------------------------------------------------------------------------------------------------");
	while(p!=NULL)
		{
		printf("\n\n��� %d ѧ�� %ld ����:%s   �Ա�: %s   ����: %3.1f    ��ѧ:%3.1f   ����:%3.1f",p->xuhao,p->num,p->name,p->sex,p->score[0],p->score[1],p->score[2]);//�������Ա�
		a=p->score[0]+p->score[1]+p->score[2];
       

		printf(" �ܷ�:%3.1f",a);
		printf("  �ȼ�%c\n",p->DJ);
		p=p->next;
}
}
int passwd(char *name, char *pwd) 
{
   int u = 0;
    if (strcmp(name, "root") == 0 && strcmp(pwd, "123456") == 0)
        {
			u =1;
			return u;
	     }
   else if (strcmp(name, "1") == 0 && strcmp(pwd, "1") == 0)
       {
		   u = 1;
		   return u;
     	}
	return 0;
}//����У�麯�� ���������ַ����飬һ���˺ţ�һ�����롣
void  change1(struct student*head)
{
   long int i;
    struct student *p;
    p=head;//����ָ��
 if(head==NULL)
	{
	exit(0);
	}
printf("������Ҫ�޸ĵ�ѧ����ѧ��:\n");
scanf("%ld",&i);
do
{	
//printf("test1");
	if(p->num==i)//�������ת����ѧ��ʱ�޸ĳɼ�
{
 
      printf("��ʼ�޸���Ϣ\n");
       printf("��������ѧ��\n");
	   printf("   ");

	   scanf("%ld",&p->num);
	   if(p->num!=0)
	   {
	   printf("  ��������������\n");
	   printf("    ");
       scanf("%s",&p->name);
	   printf("  ���,%s!",p->name);
       printf("�����������Ա�male or female\n");

	   printf("    ");
       scanf("%s",&p->sex);         
       printf("   ���������Ƴɼ�,�����ĳɼ�����ѧ�ɼ�������ɼ���\n");
		  printf("                   ��һ�Ƶĳɼ���:");
          scanf("%f",&p->score[0]); 
		  p->score[0]=JY(p->score[0]);//У���һ�Ƶĳɼ�	  
		  printf("                   �ڶ��Ƶĳɼ���:");
		  scanf("%f",&p->score[1]); 
		  p->score[1]=JY(p->score[1]);//У��ڶ��Ƶĳɼ�
		  printf("                   �����Ƶĳɼ���:");
		  scanf("%f",&p->score[2]);
		  p->score[2]=JY(p->score[2]);//У������Ƶĳɼ�
          printf("                   ¼�����\n");
		  printf("-----------------------------------------------------------------------------------------------------------------\n");
		break;  
	   } 
	 p=p->next;//��Ҫ����һ����㸳ֵ��p
	 
	}


} while(p->next!=NULL);







}
void cont(struct student *head)//����ѧ���ȼ�����
{
	struct student *p;
	int i=0;
	p=head;
	if(head==NULL)
	{
	exit(0);
	}
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("----------------------------------------������----------------------------------------\n");
		do{
			p->averange=((p->score[0])+(p->score[1])+(p->score[2]))/3.0;
			printf("��%dͬѧ�ĳɼ�Ϊ%3.1f",i+1,p->averange);
			
		        	if(p->averange>=90&&p->averange<=100)
                    { 
					
                   printf("         �ȼ�ΪA\n",i+1);
				   p->DJ='A';
                     }
                    if(p->averange>=60&&p->averange<=89)
                     {
						 		
                   printf("         �ȼ�ΪB\n",i+1);
				   p->DJ='B';
                      }
                    if(p->averange>=0&&p->averange<=60)
                      {
				
                   printf("          �ȼ�ΪC\n",i+1);
				   p->DJ='C';
                      }
                   if(p->averange>100||p->averange<0)
                   {
					   		
                   printf("          incorrect\n");
                    }
			i=i+1;
			p=p->next;
		
		
		
		}while(p!=NULL);

	
}
long int search(struct student *head)//ͨ��ѧ��������ѧ������Ϣ
{
struct student *p;
long jj;

scanf("%ld",&jj);
p=head;
if(head==NULL)
	{
	exit(0);
	}
do{
	if(jj==p->num)
	{
	printf("\n\nѧ�� %ld ����:%s   �Ա�: %s   ����: %3.1f    ��ѧ:%3.1f   ����:%3.1f  �ȼ�%c\n",p->num,p->name,p->sex,p->score[0],p->score[1],p->score[2],p->DJ);
	return 0;
	}


	p=p->next;
}while(p->next!=NULL);
//����������

printf("�޸�����Ϣ\n");
return 0;




}
/*struct student *del2(struct student *head)
{
   struct student *p=head;
   head=head->next;
   free(p);
   n=n-1;

   return head;


}*/
struct student *del(struct student *head)
{
	int i,j;
	struct student *p1,*p2;
	if(head==NULL)
	{
    printf("��ָ���쳣");
    _sleep(3000);
	exit(0);
	}
	p1=head;
	p2=head;
 printf("������Ҫɾ���Ľ��");
 scanf("%d",&i);
if(i>n)
{
printf("�����˴���Ľ��");
_sleep(1000);
return head;
}		
for(j=1;j<i;j++)
 {
  p2=p1;
  p1=p1->next;
 }
if(p1==head)
{
   head=head->next;
   free(p1);
   return head;
}
else
{
  p2->next=p1->next;
}


 free(p1);
 n=n-1;
 printf("\n**********ɾ���� �Ժ�*********\n");
return head;
}
struct student*nsert(struct student *head)
{
 struct student *p1,*p,*q;
 int i = 1;
 int jj;
 int mm;
 int nn;
 if(head==NULL)
	{
	exit(0);
	}
 
 printf("Ҫ�����λ��(β��)1-%d:",n);
 scanf("%d",&jj);//��Ҫ����ڼ�λѧ����Ϣ
 if(jj>=1&&jj<=n)
 {


 p = head->next ;
 p1 = (struct student *)malloc(sizeof(struct student));
    printf("��������ѧ��(����0�˳�¼��)\n");
	printf("   ");
    scanf("%ld",&p1->num);
	if(p1->num!=0)
	 {
		p1->xuhao=jj+1;
	   printf("  ��������������\n");
	   printf("    ");
       scanf("%s",&p1->name);
	   printf("  ���,%s!",p1->name);
       printf("�����������Ա�male or female\n");

	   printf("    ");
       scanf("%s",&p1->sex);     
	    mm=sexJY((char*)p1->sex);//char **������char *���Ͳ�����  ��Ҫǿ��ת��Ϊchar*����
	   if(mm==1)
	   {
       printf("   ���������Ƴɼ�,�����ĳɼ�����ѧ�ɼ�������ɼ���\n");
	   printf("                   ��һ�Ƶĳɼ���:");
       scanf("%f",&p1->score[0]); 
	    p1->score[0]=JY(p1->score[0]);//У���һ�Ƶĳɼ�	  
	    printf("                   �ڶ��Ƶĳɼ���:");
		 scanf("%f",&p1->score[1]); 
		 p1->score[1]=JY(p1->score[1]);//У��ڶ��Ƶĳɼ�
		 printf("                   �����Ƶĳɼ���:");
		 scanf("%f",&p1->score[2]);
		 p1->score[2]=JY(p1->score[2]);//У������Ƶĳɼ�
         printf("                   ¼�����\n");
		  n=n+1;//ϵͳѧ��������1
		 printf("-----------------------------------------------------------------------------------------------------------------\n");
	   }
	}
 
 if(1 == jj)
 {
  struct student*q = head->next ;
  head->next = p1;
  p1 ->next = q; 
 }
 else
 while( p )
 {
  if(i == (jj-1))
  {
   struct student*q  = p->next ;
   p->next = p1;
   p1->next = q;
  }
  p = p->next ;
  i++;
 }

 return p;

}
 else
 {
	 printf("\n---------¼�����---------\n");
	 printf("������\n");
	 return head;
}
}
int sexJY2(char *sex) 
{
   int u = 0;
   if (strcmp(sex,"male") == 0)
        {
			u =1;
			return u;
	     }
    return 0;
}
int sexJY(char *sex) 
{
   int u = 0;
   while(1)
   {
   if (strcmp(sex, "male") == 0 || strcmp(sex, "female") == 0)
        {
			u =1;
			return u;
	     }
   else
   {
	   printf("�Ա��������������\n");
	   scanf("%s",sex);
 
   }
   }
}
int TJ(struct student *head)
{
	int sexJY2(char *sex);
	int mm;
	int nn;
	struct student *p;
	man=0;
	if(head==NULL)
	{
	exit(0);
	}
	p=head;
	do
	{    
		nn=sexJY((p->sex));//ǿ��ת��
	
	 if(nn==1)
		{
		man++;
		}

		p=p->next;//һֱ����ֱָ��

	
	
	}while(p!=NULL);

	printf("\n��������Ϊ:%d\n",man);
	return 0;
}//������������ ��������������
int in()
{

	int i,j;
	int m;
	int n=0;//������������������������ѭ��
	char user[20]={'0'};
	char pas[20]={'0'};
	char aa[20]={' ','U','s','e','r',' ','N','a','m','e',':'};//����˺ŵ�½
	char bb[20]={' ','P','a','s','s','w','o','r','d',':'};
	system("mode con cols=45 lines=15");
	while(1)
   {
    printf("\n");
    for(i=0;i<12;i++)
	{
	   printf("%c",aa[i]);
	   _sleep(50);
	
	}
	  //printf(" User Name:");
	 gets(user);//�����˺�
	 for(i=0;i<10;i++)
	 {
	    printf("%c",bb[i]);
	    _sleep(50);
	
	 }
	 gets(pas);//���������������� ��ȫ��getch(); printf("*");
	m=passwd(user,pas);
	if(m==1)
	{
	 return m;
	}
	else
	{
    n++;  
	printf("incorrect please try again\n");
	if(n==3)
	{
	system("color 04");
	system("cls");
    while(1)
	{
	printf("��������ӵ�ħ�ɱ���������\n");
	_sleep(1000);
	}
	return 0;
	}
	}
}
}
struct student *add(struct student *head)
{
 struct student *p,*p1,*p2;
 int i = 1;
 int jj;
 int mm;
 int nn;
 p=head;
 printf("����Ҫ�����λ��1-%d:  ",n);
 scanf("%d",&i);
 jj=i;

    p1=(struct student*)malloc(LG);//����p1�ڴ�ռ�
    p2=(struct student*)malloc(LG);//����p2�ڴ�ռ�
    printf("��������ѧ��(����0�˳�¼��)\n");
	printf("   ");
    scanf("%ld",&p1->num);
	if(p1->num!=0)
	 {
		p1->xuhao=jj+1;
	   printf("  ��������������\n");
	   printf("    ");
       scanf("%s",&p1->name);
	   printf("  ���,%s!",p1->name);
       printf("�����������Ա�male or female\n");

	   printf("    ");
       scanf("%s",&p1->sex);     
	    mm=sexJY((char*)p1->sex);//char **������char *���Ͳ�����  ��Ҫǿ��ת��Ϊchar*����
	   if(mm==1)
	   {
       printf("   ���������Ƴɼ�,�����ĳɼ�����ѧ�ɼ�������ɼ���\n");
	   printf("                   ��һ�Ƶĳɼ���:");
       scanf("%f",&p1->score[0]); 
	    p1->score[0]=JY(p1->score[0]);//У���һ�Ƶĳɼ�	  
	    printf("                   �ڶ��Ƶĳɼ���:");
		 scanf("%f",&p1->score[1]); 
		 p1->score[1]=JY(p1->score[1]);//У��ڶ��Ƶĳɼ�
		 printf("                   �����Ƶĳɼ���:");
		 scanf("%f",&p1->score[2]);
		 p1->score[2]=JY(p1->score[2]);//У������Ƶĳɼ�
         printf("                   ¼�����\n");
		 printf("-----------------------------------------------------------------------------------------------------------------\n");
	   }
	}
	if(i==1)//��������Ϊͷ��head ��
	{
     p2=head->next;
	 head->next=p1;
	 p1->next=p2;
	 n=n+1;//ϵͳѧ��������1
	 return head;
	}
	else
	{
		p=head;
		if(i==n)
		{
		//����������n
	    while(p->next!=NULL)
		{
		p=p->next;
		}
		p->next=p1;
		p1->next=NULL;
		//���뺯��д���һ��Ҫ��ָ��ָ���
		//printf("%d",p1->xuhao);
		n=n+1;
	    return head;
		
		}
		else
		{
			//�������ͷҲ����β��
			//����м��
			while(i--)
			{
				p=p->next;
			
			}
		//	printf("���ҵ�");
			p2=p->next;
			p->next=p1;
			p1->next=p2;
			n=n+1;
		return head;

		}
	}
}
void *dell(struct student *head)
{
struct student *p=head;
free(p);
printf("\n\n�����Ѵݻ�\n\n");


}
int choose(int i)
{
    printf("\n   ----------------------------------------------- ѧ���ɼ�����ϵͳ-----------------------------------------------\n"); 
    printf("\n");
	printf("\n");
	printf("                                           ��ѡ����Ϣ¼��ķ�ʽ\n");
    printf("                                         ===========================\n");
    printf("                                         =   ��1���ֶ�����       =\n");
	printf("                                         =   ��2��ͨ���ⲿ������Ϣ =\n");
    printf("                                        ===========================\n");
	 printf("                                            ��ѡ��:");
	while(1)
	{
	 scanf("%d",&i);
	 if(i==1||i==2)
	 {
	//printf("%d",n);
	return i;
	 }
	 else
	 {
	 printf("\n                                        ������һ����Ч��ֵ:");
	 }
	 
	 }


}
void load()
{
printf("\n�ù��ܻ���������\n    �����ڴ�\n");

}
//ʵ����������ļ��Ĺ���
void out1(struct student *head)
{
FILE *out;
struct student *p;
char outfile[20];
char ch;
int i;
ch=getchar();
if((out=fopen("stu.txt","wb"))==NULL)
{
	printf(" �Ҳ�������ļ�");
	exit(0);
}
p=head;
while(p!=NULL)
{
	if(fwrite(p,LG,1,out)!=1) 
	{  
            printf("\nд�����ݳ���\n");  
            fclose(out);  
            return;  
        }  
	p=p->next;
} 
    fclose(out);  
}  
struct student *input1 () 
{  
    struct student *head = NULL;  
    struct student *p1, *p2;//s = p1;p = p2;  
  
    FILE *fp;  
    if((fp=fopen("stu.txt","rb+"))==NULL)  
    {  
        printf("���ļ�����\n");  
        exit(0);  
    }  
    while(!feof(fp)) {  
        if((p1=(struct student*)malloc(LG))==NULL){  
            printf("�ڴ��������\n");  
            fclose(fp);  
            exit(0);  
        }  
        if(fread(p1,LG,1,fp)!=1){  
            free(p1);  
            break;  
        }  
        if(head==NULL)  
		{
		head=p2=p1;
		n=n+1;
		}    
        else{  
            p2->next=p1;  
            p2=p1;
			n=n+1;
        }  
    }  
    fclose(fp);  
    return (head);  
}  
/*   struct head ����ͷָ��
 *   return �����µ�����
 *    
 */
void sort(struct student *head)
{ 

float num;// ��ʱ���
int i;
struct student *p;
p=head;

//����һ��ָ��ָ���
num=p->averange;

while(p!=NULL)
{
if(num<(p->averange))
{
   num=p->averange;
}
p=p->next;

}
printf("ƽ�������ģ�%5.2f",num);



}
