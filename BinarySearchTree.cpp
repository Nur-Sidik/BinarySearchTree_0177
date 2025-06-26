#include <iostream>
using namespace std;

class node 
{
    public:
        int info;
        node *leftchild;
        node *rightchild;

        //constructor untuk class node
        node()
        {
            leftchild = nullptr; //inisialisasi left child jadi null
            rightchild = nullptr; //inisialisasi right child jadi null
        }
};
