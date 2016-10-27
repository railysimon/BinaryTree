#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int size, value;

    cout << "К-ть вузлів: ";
    cin >> size;

    Node *Tree = nullptr;
    tree binary;

    for(int i=0; i<size; i++)
    {
        cout << "Введіть значення: ";
        cin >> value;
        binary.Create(value, &Tree);
    }

    cout << endl << "Дерево: " << endl;
    binary.Show(Tree, "root: ");

    cout << endl << "Прямий обхід: " << endl;
    binary.PrefixOrder(Tree);

    cout << endl << "Зворотній обхід: " << endl;
    binary.PostfixOrder(Tree);

    cout << endl << "Внутрішній обхід: " << endl;
    binary.InfixOrder(Tree);

    cout << endl;

    return 0;
}
