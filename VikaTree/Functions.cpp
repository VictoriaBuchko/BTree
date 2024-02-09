#include <conio.h>
#include <iostream>

#include "Functions.h"

using namespace std;

void Insert(Tree& tree)
{
    system("cls");
    cout << "Enter a quantity of elements to add: ";

    unsigned int count = 0U;
    cin >> count;

    for (unsigned int i = 0U; i < count; ++i)
    {
        Node* temp = new Node;

        cout << endl << "Enter an Name " << i + 1 << endl;
        cin >> temp->GetName();

        cout << endl << "Enter a LastName " << i + 1 << endl;
        cin >> temp->GetLastName();

        cout << endl << "Enter a Surname " << i + 1 << endl;
        cin >> temp->GetSurname();

        cout << endl << "Enter a Grade " << i + 1 << endl;
        cin >> temp->GetGrade();

        tree.Insert(temp);
    }
}

void Print(const Tree& tree)
{
    system("cls");

    tree.Print(tree.GetRoot());

    _getch();
}

void PrintMenu()
{
    char menu[] = "1. Insert node\n2. Remove node\n3. Print node\n4. Search node\n5. Exit\n";

    system("cls");

    cout << menu;
}

void Remove(Tree& tree)
{
    system("cls");
    cout << "Enter Name of student to remove:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    tree.Remove(node);
}

void Search(const Tree& tree)
{
    system("cls");
    cout << "Enter a Name of student to search:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    if (node != nullptr)
    {
        cout <<"Last Name: " << node->GetLastName() << endl;;
        cout <<"Surname: " << node->GetSurname() << endl;
        cout <<"Grade: " << node->GetGrade() << endl;
    }
    else
    {
        cout << "Word not found" << endl;
    }

    _getch();
}