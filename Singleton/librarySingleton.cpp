#include <iostream>
#include <string>
using namespace std;
const int MAX_BOOKS = 10; // Maximum number of books in the library

// Book class
class Book
{
private:
    string title;
    string author;
    bool isCheckedOut;

public:
    // Constructor
    Book(const string &title, const string &author)
        : title(title), author(author), isCheckedOut(false) {}

    // Simple getter methods
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool isCheckedOutStatus() const { return isCheckedOut; }

    // Method to check out a book
    void checkOut()
    {
        if (!isCheckedOut)
        {
            isCheckedOut = true;
            cout << "Book \"" << title << "\" checked out successfully.\n";
        }
        else
        {
            cout << "Book \"" << title << "\" is already checked out.\n";
        }
    }

    // Method to return a book
    void returnBook()
    {
        if (isCheckedOut)
        {
            isCheckedOut = false;
            cout << "Book \"" << title << "\" returned successfully.\n";
        }
        else
        {
            cout << "Book \"" << title << "\" was not checked out.\n";
        }
    }
};

// Member class
class Member
{
private:
    string name;
    int memberId;

public:
    // Constructor
    Member(const string &name, int memberId)
        : name(name), memberId(memberId) {}

    // Getter for member info
    string getName() const { return name; }
    int getMemberId() const { return memberId; }

    // Method to interact with library system
    void checkOutBook(Book &book)
    {
        cout << name << " is trying to check out \"" << book.getTitle() << "\"...\n";
        book.checkOut();
    }

    void returnBook(Book &book)
    {
        cout << name << " is trying to return \"" << book.getTitle() << "\"...\n";
        book.returnBook();
    }
};

// Library class that holds books
class Library
{
private:
    Book *books[MAX_BOOKS]; // Array of Book pointers
    int currentBookCount;

public:
    // Constructor
    Library() : currentBookCount(0) {}

    // Method to add a new book to the library
    void addBook(const string &title, const string &author)
    {
        if (currentBookCount < MAX_BOOKS)
        {
            books[currentBookCount] = new Book(title, author);
            currentBookCount++;
        }
        else
        {
            cout << "Library is full! Cannot add more books.\n";
        }
    }

    // Method to display all books in the library
    void displayBooks() const
    {
        cout << "Library Collection:\n";
        for (int i = 0; i < currentBookCount; ++i)
        {
            cout << "Title: " << books[i]->getTitle() << ", Author: " << books[i]->getAuthor();
            cout << (books[i]->isCheckedOutStatus() ? " [Checked Out]" : " [Available]") << "\n";
        }
    }

    // Method to find a book by title
    Book *findBookByTitle(const string &title)
    {
        for (int i = 0; i < currentBookCount; ++i)
        {
            if (books[i]->getTitle() == title)
            {
                return books[i];
            }
        }
        return nullptr; // Return nullptr if the book is not found
    }

    // Destructor to clean up dynamically allocated memory
    ~Library()
    {
        for (int i = 0; i < currentBookCount; ++i)
        {
            delete books[i]; // Free the dynamically allocated books
        }
    }
};

// LibrarySystem class to handle all library operations
class LibrarySystem
{
private:
    Library library;

public:
    // Constructor
    LibrarySystem() {}

    // Method to register a book in the library
    void registerBook(const string &title, const string &author)
    {
        library.addBook(title, author);
    }

    // Method to show all books
    void showAllBooks()
    {
        library.displayBooks();
    }

};

// Main function to interact with the library system
int main()
{
    // Create library system
    LibrarySystem system;

    // Register some books
    system.registerBook("1984", "George Orwell");
    system.registerBook("To Kill a Mockingbird", "Harper Lee");
    system.registerBook("The Great Gatsby", "F. Scott Fitzgerald");

    // Show all books in the library
    system.showAllBooks();

    return 0;
}
