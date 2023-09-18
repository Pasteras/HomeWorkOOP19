#include <iostream>
#include "Libraly.h"
using namespace std;

int main()
{
    Library library;
    library.addBook("Book 1", "Author 1", 2000);
    library.addBook("Book 2", "Author 2", 1995);
    library.addBook("Book 3", "Author 3", 2010);
    cout << "Books in the library:" << endl;

    library.display();
    library.deleteBook("Book 3", "Author 3");
    cout << "\nList of books after deleting Book 3:" << endl;
    library.display();
}