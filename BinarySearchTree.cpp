#include <iostream>
using namespace std;

class Node 
{
    public:
        int info;
        Node *leftchild;
        Node *rightchild;

        //constructor untuk class node
        Node()
        {
            leftchild = nullptr; //inisialisasi left child jadi null
            rightchild = nullptr; //inisialisasi right child jadi null
        }
};

class BinaryTree
{
    public:
        Node *ROOT;

        BinaryTree()
        {
            ROOT = nullptr; //inisialisasi root jadi null
        }

        void insert()
        {
            int x;
            cout << "Masukkan Sebuah Nilai = ";
            cin >> x;

            //step selanjutnya mengalokasikan memori untuk node baru
            Node *newNode = new Node();

            //setelah itu, kita akan mengisi informasi pada node baru tersebut
            newNode->info = x;

            newNode->leftchild = nullptr; //inisialisasi left child jadi null
            newNode->rightchild = nullptr; //inisialisasi right child jadi null

            Node *parent = nullptr;
            Node *currentNode = nullptr;
            search(x, parent, currentNode);

};