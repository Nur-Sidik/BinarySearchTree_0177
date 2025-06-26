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

            if (parent == nullptr)
            {
                ROOT = newNode;

                return;
            }

            if (x < parent->info)
            {
                parent->leftchild = newNode;
                return;
            }
            else if (x > parent->info)
            {
                parent->rightchild = newNode;
                return;
            }

        }

        void search(int element, Node *&parent, Node *&currentNode)
        {
            currentNode = ROOT;
            parent = nullptr;
            while ((currentNode != nullptr) && (currentNode->info != element))
            {
                parent = currentNode;
                if (element < currentNode->info)
                    currentNode = currentNode->leftchild;
                else
                    currentNode = currentNode->rightchild;
            }
        }

        void inorder(Node *ptr)
        {
            if (isEmpty())
            {
                cout << "Tree dalam kondisi Kosong" << endl;
                return;
            }
            if (ptr == nullptr)
                return;

            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
        
        void preorder(Node *ptr)
        {
            if (isEmpty())
            {
                cout << "Tree dalam kondisi Kosong" << endl;
                return;
            }
            if (ptr == nullptr)
                return;

            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }

        void postorder(Node *ptr)
        {
            if (isEmpty())
            {
                cout << "Tree dalam kondisi Kosong" << endl;
                return;
            }
            if (ptr == nullptr)
                return;

            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }

        bool isEmpty()
        {
            return ROOT == nullptr;
        }
};

int main()
{
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Masukkan Sebuah Nilai" << endl;
        cout << "2. Lakukan Traversal Inorder" << endl;
        cout << "3. Lakukan Traversal Preorder" << endl;
        cout << "4. Lakukan Traversal Postorder" << endl;
        cout << "5. Keluar" << endl;
        cout << "\nMasukan Pilihan Anda (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Pilihan tidak valid" << endl;
            break;
        }
        }
    }
};