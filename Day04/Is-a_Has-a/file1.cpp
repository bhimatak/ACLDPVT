//diamond problem

#include <iostream>

using namespace std;

class base{
    public:
        int i;
};

class d1:public base{
    public:
    int j;
};

class d2:public base{
    public:
    int k;
};

class d3:public d1, public d2{
    public:
    int l;
};


int main()
{
    d3 d;
    d.d1::i = 10;
    d.j = 20;
    d.k = 30;
    d.l = 40;

    return 0;
}


/*

.\file1.cpp: In function 'int main()':
.\file1.cpp:29:7: error: request for member 'i' is ambiguous
   29 |     d.i = 10;
      |       ^
.\file1.cpp:7:13: note: candidates are: 'int base::i'
    7 |         int i;
      |             ^
.\file1.cpp:7:13: note:                 'int base::i'

*/

/*
2 solutions

1. solution 

using scope resolution op

int main()
{
    d3 d;
    d.d1::i = 10;
    d.j = 20;
    d.k = 30;
    d.l = 40;

    return 0;
}


*/