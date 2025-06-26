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

class BinaryTree
{
    public:
        node *ROOT;

        BinaryTree()
        {
            ROOT = nullptr; //inisialisasi root jadi null
        }

        void insert()
        {
            int x;
            cout << "Masukkan Sebuah Nilai = ";
            cin >> x;
        }

};