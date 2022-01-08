#include<bits/stdc++.h> 
using namespace std;
int main()
{
	/*string str;
	string str1="CYQ";
    cin>>str;
	cout<<str+str1<<; */ 
	//bravo!!可以考虑使用cout<<str1+str2<<endl;进行字符串的连续输出 斯巴拉西！
	
//    int a=123;
//	int *p=&a; 
//	cout<<p<<' '<<*p<<endl;

     /*char str[100];
     cin>>str;
     cout<<str<<endl;
     strlwr(str);
     cout<<str; */
    //strlwr()将字符串全部转换为小写 而strupr()则是全部转换为大写 快速记忆 lwr=lower upr=upper
    
//	 char str1[100];
//	 char str2[100];
//	 cin>>str1>>str2;
//	 if(strstr(str1,str2)!=NULL)
//	 cout<<"有";
//	 else
//	 { 
//	 char *p=strstr(str1,str2);
//	 cout<<"没有"<<endl ;
//	 }
//	
//如果 str2是str1的子串 则返回str2在str1内第一次出现的地址 否则 返回NULL 


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
 //结构体可以套娃 结构体内可以套结构体 实现一个装的封（封装）
 //封装的好处是reusable 
 
 
// char name[20];
// cin>>name;
// cout<<sizeof(name);
 //siezeof展示的是数组真实的内存空间 而不是被占用的空间 如：输入name 输出的数字是仍然是20 
string str1;
cin>>str1;
string str2;
cin>>str2;
cout<<str1+str2<<endl;
cout<<str1.size()<<endl;
cout<<str1.compare(str2);

}
