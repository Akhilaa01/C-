
/*
#include<iostream>
using namespace std;

int main()
{
        int x = 10;

        cout<<10;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int x, y;

        x = 10;
        y = 20;

        cout<<x;

        cout<<y;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int x, y;

        x = 10;
        y = 20;

        cout<<x;
        cout<<endl;
        cout<<y;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int x;
        float y;

        x = 10;
        y = 5.5;

        cout<<x<<endl<<y;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int ivar;
        char cvar;
        float fvar;
        double dvar;
        char *pvar;

        ivar = 19;
        cvar = 'A';
        fvar = 2.14;
        dvar = 13.523241;
        pvar = "RCB";

        cout<<ivar<<endl<<cvar<<endl<<fvar<<endl<<dvar<<endl<<pvar;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int a, b;

        cout<<"\nEnter two numbers: ";
        cin>>a>>b;

        cout<<a<<endl<<b<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int result = 5; //local variable
        cout<<"The result is: "<<result<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int sumf();
int sum = 2; //global variable
int result =5; //global variable

int main ()
{
        sumf();
        return 0;
}

int sumf()
{
        cout<<"Sum is: "<<sum<<endl;
        cout<<"The result is: "<<result<<endl;
}
*/

/*
#include<iostream>
using namespace std;

void statf();

int main ()
{
        int i;
        for(i = 0; i < 5; i++)
        {
            statf();
        }
}

void statf()
{
        int a = 20; //local variable
        static int b = 20; //static variable

        a = a + 1;
        b = b + 1;

        cout<<"Value of a: "<<a<<",Value of b: "<<b<<endl;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int x;
        x=10;

        cout<<x<<endl;

        int & iRef=x; //iRef is a reference to x

        iRef=20; //same as x=10;

        cout<<x<<endl;

        x++; //same as iRef++;

        cout<<iRef<<endl;
        cout<<x<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int x,y;

        x=10;

        int & iRef = x;

        y=iRef; //same as y=x;

        cout<<y<<endl;

        y++; //x and iRef unchanged

        cout<<x<<endl<<iRef<<endl<<y<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

void increment(int & r)
{
        r++; //same as x++;
}

int main()
{
        int x;
        x=10;

        increment(x);

        cout<<x<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

void swapf(int &i, int &z)
{
    int t;

    t = i;
    i = z;
    z = t;

}

int main()
{

        int a = 10, b = 20;

        cout<<a<<"\t"<<b<<endl;

        swapf(a, b);

        cout<<a<<"\t"<<b<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int & larger(int &, int &);

int main()
{
        int x,y;

        x=10;
        y=20;

        int & r=larger(x,y);

        r=-1;

        cout<<x<<endl<<y<<endl;
}


int & larger(int & a, int & b)
{
        if(a>b) //return a reference to the larger parameter
            return a;
        else
            return b;
}
*/

/*
#include<iostream>
using namespace std;

int & larger(int &, int &);

int main()
{
        int x,y;

        x=10;
        y=20;

        larger(x,y)=-1;

        cout<<x<<endl<<y<<endl;
}


int & larger(int & a, int & b)
{
        if(a>b) //return a reference to the larger parameter
            return a;
        else
            return b;
}
*/

/*
#include<iostream>
using namespace std;

int & abc();

int main()
{
        abc()=-1;
}

int & abc()
{
        int x;

        return x; //returning reference of a local variable
}
*/

/*
#include<iostream>
using namespace std;

int add(int,int); //function prototype

int main()
{
        int x,y,z;

        cout<<"\nEnter a number: ";
        cin>>x;

        cout<<"\nEnter another number: ";
        cin>>y;


        z=add(x,y); //function call

        cout<<z<<endl;

        return 0;
}

int add(int a,int b) //function definition
{
        return (a+b);
}
*/


/*
//C++program to print hello world
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World\n";

    return 0;
}
*/


/*
//C program to take input 2 integer numbers
#include<iostream>
using namespace std;

int main()
{
        int a, b;

        cout<<"Enter two integer numbers: ";
        cin>>a>>b;

        cout<<"The first number is "<<a<<endl<<"The second number is "<<b;


        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
        int a = 5; //Local Variable

        cout<<a;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int x = 10;

void sample()
{
        x = 20;

        cout<<"Inside the sample(): "<<x<<endl;
}

int main()
{
        cout<<"Inside the main(): "<<x<<endl;

        sample();

        cout<<"Inside the main(): "<<x<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;


void stat_func()
{
        int a = 20; //Local Variable
        static int b = 20; //Static Variable

        a = a+1;
        b = b+1;

        cout<<"Value of a: "<<a<<", Value of b: "<<b<<endl;
}

int main()
{
        int i;

        for(i=0;i<5;i++)
        {
            stat_func();
        }

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int add(int,int); //first prototype
int add(int,int,int); //second prototype

int main()
{
        int x,y;

        x=add(10,20); //matches first prototype
        y=add(30,40,50); //matches second prototype

        cout<<x<<endl<<y<<endl;

        return 0;
}

int add(int a,int b)
{
        return(a+b);
}

int add(int a,int b, int c)
{
        return(a+b+c);
}
*/

/*
#include<iostream>
using namespace std;

void area(float r)
{
    float a;

    a = 3.1412 * r * r;

    cout<<a;
}

void area(float l, float b)
{
    float a;

    a = l * b;

    cout<<a;
}

void area(double x)
{
    double a;

    a = x * x;

    cout<<a;
}

int main()
{
        float r, l, b;
        double x;

        cout<<"\nEnter the radius: ";
        cin>>r;

        cout<<"\nEnter the length: ";
        cin>>l;

        cout<<"\nEnter the breadth: ";
        cin>>b;

        cout<<"\nEnter x: ";
        cin>>x;

        cout<<"\nThe area of circle is: ";
        area(r);

        cout<<"\nThe area of rectangle is: ";
        area(l, b);

        cout<<"\nThe area of square is: ";
        area(x);

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

int add(int,int,int c=50); //third argument has default value

int main()
{
        int x,y;

        x=add(10,20,30); //default value ignored
        y=add(40,50); //default value taken for the third parameter

        cout<<x<<endl<<y<<endl;

        return 0;
}

int add(int a,int b,int c)
{
        return (a+b+c);
}
*/

/*
#include<iostream>
using namespace std;

int add(int,int=0,int=20); //second and third arguments have default values

int main()
{
        int x,y,z;

        x=add(10,20,30); //all default values ignored
        y=add(40,50); //default value taken for the third argument
        z=add(60); //default value taken for the second and the third arguments

        cout<<x<<endl<<y<<endl<<z<<endl;

        return 0;
}

int add(int a,int b,int c)
{
        return (a+b+c);
}
*/

/*
#include<iostream>
using namespace std;

inline double cube(double x)
{
        return x*x*x;
}

int main()
{
        double a,b;
        double c=13.0;

        a=cube(5.0);
        b=cube(4.5+7.5);

        cout<<a<<endl;
        cout<<b<<endl;
        cout<<cube(++c)<<endl;
        cout<<c<<endl;

        return 0;
}
*/

/*
#include<iostream>
#include"myheadfile.h"
using namespace std;

int main()
{
    int x = 5;

    print(x);

    return 0;
}
*/
















/*
#include<iostream>
using namespace std;

struct student
{
        char usn[15], name[30];
        int age;
};

int main()
{
        struct student s;

        cout<<"\nEnter usn: ";
        cin>>s.usn;

        cout<<"\nEnter name: ";
        cin>>s.name;

        cout<<"\nEnter age: ";
        cin>>s.age;


        cout<<"\nThe student details are: \n";
        cout<<s.usn<<endl<<s.name<<endl<<s.age<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

struct Distance
{
        int iFeet;
        float fInches;

        void setFeet(int x)
        {
                iFeet=x;
        }

        int getFeet()
        {
                return iFeet;
        }

        void setInches(float y)
        {
                fInches=y;
        }

        float getInches()
        {
                return fInches;
        }
};

int main()
{
        Distance d1,d2;

        d1.setFeet(2);
        d1.setInches(2.2);

        d2.setFeet(3);
        d2.setInches(3.3);

        cout<<d1.getFeet()<<"\t"<<d1.getInches()<<endl;
        cout<<d2.getFeet()<<"\t"<<d2.getInches()<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

struct book
{
        int bookid;
        char title[30];
        int price;
};

int main()
{
        struct book b[3];
        int i;

        for(i=0;i<3;i++)
        {
                cout<<"\nEnter book id, title, price: ";
                cin>>b[i].bookid>>b[i].title>>b[i].price;
        }

        for(i=0;i<3;i++)
        {
            cout<<"\nThe book details are: ";
            cout<<b[i].bookid<<"\t"<<b[i].title<<"\t"<<b[i].price<<endl;
        }

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

struct Distance
{
        int feet;
        float inches;

        void setfeet(int x)
        {
                feet = x;
        }

        void setinches(float y)
        {
                inches = y;
        }

        int printfeet()
        {
            return feet;
        }

        float printinc()
        {
            return inches;
        }
};

int main()
{
        Distance d1, d2;

        d1.setfeet(5);
        d1.setinches(0.2);

        cout<<d1.printfeet()<<endl;
        cout<<d1.printinc()<<endl;

        d2.setfeet(6);
        d2.setinches(0.5);

        cout<<d2.printfeet()<<endl;
        cout<<d2.printinc()<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

struct Sample
{
        public:
            int x;

        private:
            int y;
};

int main()
{
        Sample s;

        s.x = 10;
        s.y = 20;

        return 0;
}
*/


/*
#include<iostream>
using namespace std;

struct Sample
{
        public:
            int x;

        private:
            void setv(int a)
            {
                    x=a;
            }

            void print()
            {
                cout<<x;
            }
};

int main()
{
        Sample s;

        s.setv(10);
        s.print();

        return 0;
}
*/


/*
#include<iostream>
using namespace std;

struct Sample
{
        private:
            int x;

        public:
            void setv(int a)
            {
                    x=a;
            }

            void print()
            {
                cout<<x;
            }
};

int main()
{
        Sample s;

        s.setv(10);
        s.print();

        s.x = 20;
        s.print();

        return 0;
}
*/


/*
#include<iostream>
using namespace std;

struct Test
{
        int x;

        void setv(int a)
        {
                x=a;
        }

        void print()
        {
            cout<<x;
        }
};

int main()
{
        Test t;

        t.x = 10;
        t.setv(20);
        t.print();

        return 0;
}
*/


/*
#include<iostream>
using namespace std;

class Test
{
        int x;

        void setv(int a)
        {
                x=a;
        }

        void print()
        {
            cout<<x;
        }
};

int main()
{
        Test t;

        //t.x = 10;
        t.setv(20);
        t.print();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Circle
{
        public:
            float radius;

            float area()
            {
                    return 3.14*radius*radius;
            }
};

int main()
{
        Circle c;

        c.radius = 5.1;
        cout<<"\nThe radius is: "<<c.radius;

        cout<<"\nThe area of Circle: "<<c.area()<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Circle
{
        private:
            float radius;

        public:
            float area()
            {
                    return 3.14*radius*radius;
            }
};

int main()
{
        Circle c;

        c.radius = 5.1;
        cout<<"\nThe radius is: "<<c.radius;

        cout<<"\nThe area of Circle: "<<c.area()<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Circle
{
        private:
            float radius;

        public:
            float area(float r)
            {
                    float a;
                    radius = r;
                    a = 3.14*radius*radius;
                    cout<<"\nThe radius is: "<<radius;
                    cout<<"\nThe area of Circle: "<<a<<endl;
            }
};

int main()
{
        Circle c;

        c.area(5.8);

        return 0;
}
*/

/*
#include<iostream>
#include"myheadfile.h">
using namespace std;

int main()
{
        Distance d1;

        d1.setfeet(5);
        d1.setinches(0.2);

        cout<<d1.printfeet()<<endl;
        cout<<d1.printinc()<<endl;

        return 0;
}
*/

/*
#include<iostream>

using namespace std;

class Distance
{
        int feet;
        float inches;
        public:
            void setfeet(int x);
            void setinches(float y);
            int printfeet();
            float printinc();
};

void Distance::setfeet(int x)
{
        feet = x;
}

void Distance::setinches(float y)
{
        inches = y;
}

int Distance::printfeet()
{
        return feet;
}

float Distance::printinc()
{
        return inches;
}

int main()
{
        Distance d1;
        Distance *dptr;

        dptr = &d1;

        dptr->setfeet(5);
        dptr->setinches(0.2);

        cout<<dptr->printfeet()<<endl;
        cout<<dptr->printinc()<<endl;

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Test
{
        int x;
        public:
            void setx(int x)
            {
                    this->x = x;
            }

            void print()
            {
                     cout<<x;
            }
};

int main()
{
        Test t;

        t.setx(10);
        t.print();

        return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Demo
{
        int num;
        char ch;
        public:
            Demo &setNum(int num)
            {
                    this->num =num;
                    return *this;
            }

            Demo &setCh(char ch)
            {
                    this->num++;
                    this->ch =ch;
                    return *this;
            }

            void displayMyValues()
            {
                    cout<<num<<endl;
                    cout<<ch;
            }
};

int main()
{
        Demo obj;
        //Chaining calls
        obj.setNum(100).setCh('A');
        obj.displayMyValues();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Student
{
        char usn[15], name[30];
        int sem, m1,m2,m3;

        public:
            void setvalues()
            {
                    cout<<"\nEnter usn, name, sem, m1, m2, m3: ";
                    cin>>usn>>name>>sem>>m1>>m2>>m3;
            }

            void printvalues()
            {
                    cout<<"\The student details are: ";
                    cout<<usn<<endl;
                    cout<<name<<endl;
                    cout<<sem<<endl;
                    cout<<m1<<endl;
                    cout<<m2<<endl;
                    cout<<m3<<endl;
            }

            void avgmarks()
            {
                    cout<<"\nThe average marks is: "<<(m1+m2+m3)/3;
            }
};


int main()
{
        Student s;

        s.setvalues();
        s.printvalues();
        s.avgmarks();

        return 0;
}
*/


/*
#include <iostream>
using namespace std;

class implementAbstraction
{
        private:
            int a, b;

        public:
            void set(int x, int y)
            {
                    a = x;
                    b = y;
            }

            void display()
            {
                    cout<<"a = " <<a << endl;
                    cout<<"b = " << b << endl;
            }
};

int main()
{
        implementAbstraction obj;

        obj.set(10, 20);
        obj.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class A
{
        public:
            void show();
            void show(int); //function show() overloaded!!
};

void A::show()
{
        cout<<"Hello\n";
}

void A::show(int x)
{
        for(int i=0;i<x;i++)
            cout<<"Hello\n";
}

int main()
{
        A A1;

        A1.show(); //first definition called
        A1.show(3); //second definition called

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class A
{
        public:
            void show(int=1);
};

void A::show(int p)
{
        for(int i=0;i<p;i++)
            cout<<"Hello\n";
}

int main()
{
        A A1;

        A1.show(); //default value taken
        A1.show(3); //default value overridden

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Distance
{
        int iFeet;
        float fInches;
        public:
            void setFeet(int);
            int getFeet() const; //constant function
            void setInches(float);
            float getInches() const; //constant function
            Distance add(Distance) const; //constant function
};


void Distance::setFeet(int x)
{
        iFeet=x;
}
int Distance::getFeet() const //constant function
{
        iFeet++; //ERROR!!
        return iFeet;
}

void Distance::setInches(float y)
{
        fInches=y;
}

float Distance::getInches() const //constant function
{
        fInches=0.0; //ERROR!!
        return fInches;
}
*/

/*
class A
{
        int x; //non-mutable data member
        mutable int y; //mutable data member
        public:
            void abc() const //a constant member function
            {
                    x++; //ERROR: cannot modify a non-constant data
                        //member in a constant member function
                    y++; //OK: can modify a mutable data member in a
                        //constant member function
            }

            void def() //a non-constant member function
            {
                    x++; //OK: can modify a non-constant data member
                        //in a non-constant member function
                    y++; //OK: can modify a mutable data member in a
                        //non-constant member function
            }
};
*/

/*
#include<iostream>
using namespace std;

class Sample
{
        int x;
        public:
            void setvalue()
            {
                    cout<<"Enter the value: ";
                    cin>>x;
            }

            void printvalue()
            {
                    cout<<"\nThe value is: "<<x<<endl;
            }

            void add(Sample a, Sample b)
            {
                    int sum;

                    sum = a.x + b.x;
                    cout<<"\nThe sum is: "<<sum<<endl;
            }
};

int main()
{
        Sample a, b;

        a.setvalue();
        a.printvalue();

        b.setvalue();
        b.printvalue();

        b.add(a,b);

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Complex
{
        int x, y;
        public:
            void setvalue()
            {
                    cout<<"Enter the value of x and y: ";
                    cin>>x>>y;
            }

            void printvalue()
            {
                    cout<<"\nThe value is: "<<x<<" +i "<<y<<endl;
            }

            Complex add_complex(Complex a, Complex b)
            {
                    Complex c;

                    c.x = a.x + b.x;
                    c.y = b.y + b.y;

                    return c;
            }
};

int main()
{
        Complex a, b, c;

        a.setvalue();
        a.printvalue();

        b.setvalue();
        b.printvalue();

        c = c.add_complex(a, b);

        cout<<"\nAfter addition\n";
        c.printvalue();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Test
{
        int x;
        public:
            void setvalue()
            {
                    cout<<"Enter the value of x: ";
                    cin>>x;
            }
            friend void printvalue();
};

void printvalue()
{
        cout<<"\nThe value of x is "<<x;
}


int main()
{
        Test t;

        t.setvalue();
        printvalue();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class B;

class A
{
        int a;
        public:
            void seta(int x)
            {
                a = x;
            }
            friend void add(A, B);
};

class B
{
        int b;
        public:
            void setb(int y)
            {
                b = y;
            }
            friend void add(A, B);
};

void add(A x, B y)
{
    cout<<"\nThe sum is: "<<x.a+y.b;
}

int main()
{
        A x;
        x.seta(10);

        B y;
        y.setb(20);

        add(x, y);

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class A
{
        int a;
        public:
            void setvalue(int x)
            {
                    a=x;
            }

            friend class B;
};

class B
{
        int b;
        public:
            void printa(A x)
            {
                    cout<<"\nThe value of a is: "<<x.a;
            }
};

int main()
{
        A a;
        B b;

        a.setvalue(10);

        b.printa(a);

        return 0;
}
*/


/*
#include<iostream>
using namespace std;

class Demo
{
        public:
            static int ABC;
};

//defining
int Demo :: ABC =10;

int main()
{
        cout<<"\nValue of ABC: "<<Demo::ABC;
        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Sample
{
        static int c;
        public:
            void countob()
            {
                    c++;
            }

            static void print()
            {
                    cout<<"\nThe total number of objects: "<<c;
            }
};

int Sample::c;

int main()
{
        Sample s1, s2, s3, s4, s5;

        s1.countob();
        s2.countob();
        s3.countob();
        s4.countob();
        s5.countob();

        s1.print();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Sample
{
        static int c;
        int b;
        public:
            void countob()
            {
                c++;
            }
            static void print();

};

void Sample::print()
{
        cout<<"\nThe total number of objects: "<<c;
}

int Sample::c;

int main()
{
        Sample s1, s2, s3, s4, s5;

        s1.countob();
        s2.countob();
        s3.countob();
        s4.countob();
        s5.countob();

        //s1.print();
        Sample::print();

        return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Demo
{
	private:
		static int X;

	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
};

//defining
int Demo :: X =10;


int main()
{
	Demo a;

	a.fun();

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

class Emp{

char id[10],name[30];

float sal;

float it = 0.15*sal;

float da = 0.25*sal;

public:

void accept(){

cout<<"Enter the emp-id\t";cin>>id;

cout<<"Enter the name\t";cin>>name;

cout<<"Enter the basic Salary\t";cin>>sal;

}

void display(){

cout<<"Salary Descriptions for "<<"["<<id<<"]"<<name;

cout<<"\nDA\t25%\t"<<0.25*sal;

cout<<"\nDRA\t800\t800";

cout<<"\nIncome Tax\t15%\t"<<0.15*sal;

cout<<"\n\nGross Salary\t"<<(sal-800-(0.25*sal)-(0.15*sal));
}

};

int main() {

// your code goes here

Emp e;

e.accept();

e.display();

return 0;

}
*/


#include<iostream>
using namespace std;

class student
{
        char name[30],usn[15];
        float marks[3];

        public:
            void readDetails()
            {
                    int i;

                    cout<<"\nEnter name, usn: ";
                    cin>>name>>usn;

                    cout<<"\nEnter 3 subject marks";
                    for(i=0;i<3;i++)
                        cin>>marks[i];

            }

            void printDetails()
            {
                    int i;

                    cout<<"\n"<<name<<"\t"<<usn<<"\t";

                    for(i=0;i<3;i++)
                        cout<<marks[i]<<"\t";
            }

            void calcPercentage()
            {
                float sum = 0,perc;
                int i;

                for(i=0;i<3;i++)
                    sum = sum + marks[i];

                perc = ((sum/300)*100);

                cout<<"\nThe percentage: "<<perc;
            }

};

int main()
{
        int n, i;

        student s[n];

        cout<<"\nEnter the number of students: ";
        cin>>n;

        for(i=0;i<n;i++)
            s[i].readDetails();

        cout<<"\nThe details of students are:\n";
        for(i=0;i<n;i++)
            s[i].printDetails();

        for(i=0;i<n;i++)
            s[i].calcPercentage();

        return 0;
}














