/*
#include<iostream>
using namespace std;

class books
{
        char tit1e[30];
        float price ;
        public:
            void getdata ();
            void putdata ();
} ;

void books :: getdata()
{
        cout<<"Title:";
        cin>>tit1e;
        cout<<"Price:";
        cin>>price;
}

void books :: putdata()
{
        cout<<"Title:"<<tit1e<<endl;
        cout<<"Price"<<price<<endl;
}

int main()
{
        int n, i;

        cout<<"\nEnter the number of books: ";
        cin>>n;

        books book[n];

        for(i=0;i<n;i++)
        {
                cout<<"Enter details o£ book "<<(i+1)<<"\n";
                book[i].getdata();
        }

        for(i=0;i<n;i++)
        {
                cout<<"\nBook:"<<(i+1)<<endl;
                book[i].putdata() ;
        }
        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class student
{
        int roll_no;
        int marks[3];
        public:
            void getdata ();
            void tot_marks ();
};

void student :: getdata ()
{
        cout<<"\nEnter roll no: ";
        cin>>roll_no;

        for(int i=0; i<3; i++)
        {
                cout<<"Enter marks in subject"<<(i+1)<<": ";
                cin>>marks[i] ;
        }
}

void student :: tot_marks() //calculating total marks
{
        int total=0;

        for(int i=0; i<3; i++)
                total= total+marks[i];

        cout<<"\n\nTotal marks "<<total;
}

int main()
{
        student stu;

        stu.getdata() ;
        stu.tot_marks() ;

        return 0;
}
*/

/*
#include<iostream>
#include"h1.h"
#include"h2.h"

using namespace std;

int main()
{
        A1::A obj;
        obj.print();
        return 0;
}
*/

/*
#include<iostream>
using namespace std;

namespace first
{
        void func()
        {
                cout<<"\nFunction First";
        }
}

namespace second
{
        void func()
        {
                cout<<"\nFunction Second";
        }
}

using namespace first;

int main()
{
        func();

        return 0;
}
*/

/*
#include<iostream>

using namespace std;

class A
{
        int a,b;
        public:
            A(int x, int y);


            void display()
            {
                    cout<<a<<endl<<b;
            }
};

A::A(int x, int y)
{
        a=x;
        b=y;
}



int main()
{
        A obj(50,100);

        obj.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

namespace f1
{
        void func()
        {
                cout<<"Function 1";
        }

}


namespace f2
{
        void func()
        {
                cout<<"Function 2";
        }

}

int main()
{
        using namespace f1;
        using namespace f2;

        f1::func();
        f2::func();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Sample
{
        int a;
        public:
            Sample()
            {
                    a = 10;
            }

            void display()
            {
                    cout<<"a: "<<a;
            }
};

int main()
{
        Sample s;

        s.display();

        return 0;
}
*/


#include<iostream>
using namespace std;

class Test
{
        int a, b;
        public:
            Test(int x, int y)
            {
                    a = x;
                    b = y;
            }

            void print()
            {
                cout<<"a= "<<a<<"\nb= "<<b<<endl;
            }
};


int main()
{
        Test t(10,20);

        t.print();

        return 0;
}


/*
#include<iostream>
using namespace std;

class Demo
{
        public:
            Demo()
            {
                    cout<<"\nConstructor Called";
            }

            void display()
            {
                    cout<<"\nGo Corona Go";
            }

            ~Demo()
            {
                    cout<<"\nDestructor Called";
            }
};

int main()
{
        Demo d;

        d.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Sample
{
        int x;
        public:
            Sample(int a)
            {
                    x = a;
            }

            Sample(Sample &b)
            {
                    x = b.x;
            }

            void display()
            {
                    cout<<x;
            }
};

int main()
{
        Sample a(50);

        //Sample b(a);

        Sample b=a;

        cout<<"\nObject a: ";
        a.display();

        cout<<"\nObject b: ";
        b.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class outer
{
        int x;
        public:
            class inner
            {
                int y;
                public:
                    void sety(int b)
                    {
                            y = b;
                    }

                    void displayy()
                    {
                            cout<<"\n"<<"y: "<<y;
                    }
            };

            void setx(int a)
            {
                    x = a;
            }

            void displayx()
            {
                    cout<<"\n"<<"x: "<<x;
            }
};

int main()
{
        outer o;

        o.setx(15);
        o.displayx();

        outer::inner i;

        i.sety(23);
        i.displayy();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class outer
{
    public:
            class inner;
};

class inner
{
        int y;
        public:
            void sety(int b)
            {
                    y = b;
            }

            void displayy()
            {
                    cout<<"\n"<<"y: "<<y;
            }
};


int main()
{
        inner i;

        i.sety(23);
        i.displayy();

        return 0;
}
*/

/*
#include<iostream>
#include"head1.h"
using namespace std;

void outer::inner::innerfun()
{
        cout<<"\nInner Function";
}

int main()
{
        outer::inner i;

        i.innerfun();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Demo
{
        int x;
        public:
            Demo()
            {

            }

            Demo(int a)
            {
                    x = a;
            }


            Demo(const Demo &b)
            {
                    x = b.x;
            }

            void display()
            {
                cout<<x<<endl;
            }
};

int main()
{
        Demo d(10);

        Demo dc(d);

        //Demo dc = d;

        cout<<"\nObject d:";
        d.display();

        cout<<"\nObject dc:";
        dc.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
                cout<<"\nConstructor Called";
        }

        void display()
        {
                cout<<"\nGo Corona Go";
        }

        ~Test()
        {
                cout<<"\nDestructor Called";
        }
};

int main()
{
        Test t;

        t.display();

        return 0;
}
*/

/*
#include<iostream>
using namespace std;

class A
{
        int x;
        public:
        class B
        {
                int y;
                public:
                    void sety(int b)
                    {
                            y = b;
                    }

                    void displayy();
        };
};

void A::B::displayy()
{
        cout<<"\ny: "<<y;
}

int main()
{
        A::B b;

        b.sety(23);
        b.displayy();

        return 0;
}
*/









