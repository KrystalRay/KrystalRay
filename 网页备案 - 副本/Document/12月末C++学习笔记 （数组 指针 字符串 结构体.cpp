#include<bits/stdc++.h> 
using namespace std;
int main()
{
	/*string str;
	string str1="CYQ";
    cin>>str;
	cout<<str+str1<<; */ 
	//bravo!!���Կ���ʹ��cout<<str1+str2<<endl;�����ַ������������ ˹��������
	
//    int a=123;
//	int *p=&a; 
//	cout<<p<<' '<<*p<<endl;

     /*char str[100];
     cin>>str;
     cout<<str<<endl;
     strlwr(str);
     cout<<str; */
    //strlwr()���ַ���ȫ��ת��ΪСд ��strupr()����ȫ��ת��Ϊ��д ���ټ��� lwr=lower upr=upper
    
//	 char str1[100];
//	 char str2[100];
//	 cin>>str1>>str2;
//	 if(strstr(str1,str2)!=NULL)
//	 cout<<"��";
//	 else
//	 { 
//	 char *p=strstr(str1,str2);
//	 cout<<"û��"<<endl ;
//	 }
//	
//��� str2��str1���Ӵ� �򷵻�str2��str1�ڵ�һ�γ��ֵĵ�ַ ���� ����NULL 


//  struct birthday{
//  	int year;
//  	int month;
//  	int day;
//  };
//  struct student{
//  	char name[10];
//  	struct birthday bd;
//  };
//	 struct student stu1;
//     cin>>stu1.name>>stu1.bd.year;
//     cout<<stu1.name<<' '<<stu1.bd.year;
// } 
 //�ṹ��������� �ṹ���ڿ����׽ṹ�� ʵ��һ��װ�ķ⣨��װ��
 //��װ�ĺô���reusable 
 
 
// char name[20];
// cin>>name;
// cout<<sizeof(name);
 //siezeofչʾ����������ʵ���ڴ�ռ� �����Ǳ�ռ�õĿռ� �磺����name �������������Ȼ��20 
string str1;
cin>>str1;
string str2;
cin>>str2;
cout<<str1+str2<<endl;
cout<<str1.size()<<endl;
cout<<str1.compare(str2);

}
