//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//    Person(){cout<<"构造函数的调用"<<endl;}
//    ~Person(){cout<<"析构函数的调用"<<endl;}
//};
//int main()
//{
//    cout<<"start"<<endl;
//    Person p;
//    cout<<"end"<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//    Person():i(0){cout<<"Person::Person()"<<endl;}
//    Person(int a){cout<<"Person::Person(int a)"<<endl;i=a;}
//    Person(const Person &p){cout<<"Person::Person(const Person &p)"<<endl;i=p.i;}
//    ~Person(){cout<<"Person::~Person()"<<" "<<i<<endl;}
//private:
//    int i;
//};
//int main()
//{
//    Person a;
//    Person b=10;
//    Person c=b;
//    Person p=c;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A():i(0){cout<<"A():i()"<<endl;}
//    A f(A p){return p;}
//    A(const A &p){i=p.i;cout<<"const"<<endl;}
//    int i;
//};
//int main()
//{
//    A p;
//    A s=p.f(p);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//    Person():age(0){cout<<"Person::Person()"<<endl;}
//    ~Person(){cout<<"Person::~Person()"<<endl;}
//    Person(const Person&p){cout<<"Person::Person(const)"<<endl;age=p.age;}
//    int getage(){return age;}
//private:
//    int age;
//};
//Person d(Person p)
//{
//    cout<<"-----"<<endl;
//    return p;
//}
//int main()
//{
//    Person p;
//    Person a=p;
//    cout<<p.getage()<<" "<<a.getage()<<endl;
//    a=d(p);
//    cout<<"--------"<<endl;
//    a=p;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(const A &p){cout<<"A::A(const A &p)"<<endl;}
//    A(){cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A()"<<endl;}
//};
//A f(    A a)
//{
//    cout<<"--------"<<endl;
//    cout<<&a<<endl;
//    return a;
//}
//int main()
//{
//    A a;
////    A b;
////    b=a;
////    A c=a;
//    cout<<"-------"<<endl;
//    A b=f(a);
//    cout<<&b<<endl;
//    cout<<"-------"<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    int i;
//};
//int main()
//{
//    A a;
//    A b(a);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class person
//{
//public:
//    person(int a){cout<<"person::person"<<endl;h=new int(a);}
//    ~person(){cout<<"person::~person"<<endl;delete h;h=NULL;}
//    person(const person &p){cout<<"person::person(const)"<<endl;age=p.age;h=new int(*p.h);}
//    int age;
//    int *h;
//};
//int main()
//{
//    person p(10);
//    p.age=10;
//    person p2(p);
//    *p.h=100;
//    cout<<p2.age<<" "<<*p2.h<<endl;
//    cout<<p.age<<" "<<*p.h<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<cstring>
//#include<stdio.h>
//class rob
//{
//public:
//    rob():x(0),y(0),fangxiang(0){}
//    void zou(int n)
//    {
//        if(fangxiang==0)
//            x+=n;
//        else if(fangxiang==2)
//            x-=n;
//        else if(fangxiang==3)
//            y+=n;
//        else if(fangxiang==1)
//            y-=n;
//    }
//    void change(char *arr)
//    {
//        if(!strcmp(arr,"back"))
//            fangxiang=(fangxiang+2+4)%4;
//        else if(!strcmp(arr,"left"))
//            fangxiang=(fangxiang-1+4)%4;
//        else if(!strcmp(arr,"right"))
//            fangxiang=(fangxiang+1+4)%4;
//    }
//    void show()
//    {
//        cout<<x<<" "<<y;
//    }
//private:
//    int x;
//    int y;
//    int fangxiang;//0->x+  1->y-  2->x-  3->y+
//};
//int main()
//{
//    rob r;
//    int n,t;
//    char tmp[10];
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%s %d",tmp,&t);
//        r.change(tmp);
//        r.zou(t);
//    }
//    r.show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    //A(int aa,int bb,int cc){a=aa,b=bb,c=cc;}
//    A(int a,int b,int c):a(a),b(b),c(c){}
//    void show(){cout<<a<<" "<<b<<" "<<c<<endl;}
//private:
//    int a;
//    int b;
//    int c;
//};
//int main()
//{
//    //A a(10,20,30);
//    A a(10,20,30);
//    a.show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class A
//{
//
//public:
//    A(){cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A()"<<endl;}
//};
//class B
//{
//public:
//    B(int i){cout<<"B::B()"<<endl;}
//    ~B(){cout<<"B::~B()"<<endl;}
//private:
//    A a;
//};
//int main()
//{
//    B b(10);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){}
//    static int i;
//};
//int A::i=0;
//int main()
//{
//    A a;
//    A b;
//    cout<<a.i<<" "<<b.i<<endl;
//    a.i=10;
//    cout<<a.i<<" "<<b.i<<endl;
//    A::i=200;
//    cout<<a.i<<" "<<b.i<<endl;
//    return 0;
//}
