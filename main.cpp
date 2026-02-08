#include <iostream>
#include <string>
#include "Library.h"

int main(){
    Library myLibrary;
    int choice = 0;

    Book b1("Harry Potter", "Darrel M", 101);
    Book b2("Marry Poppins", "Mary K", 102);
    Book b3("Jojos", "Chance C", 103);
    Book b4("Sunny Day", "John D", 104);
    Member m1("Darrel Mosley", 1);

    myLibrary.addBook(b1);
    myLibrary.addBook(b2);
    myLibrary.addBook(b3);
    myLibrary.addBook(b4);
    myLibrary.registerMember(m1);
    myLibrary.registerMember(Member("Chance", 2));

    while(choice != 5){
        std::cout << "-----MyLibrary-----\n";
        std::cout << "1. Display Inventory\n";
        std::cout << "2. Search for book\n";
        std::cout << "3. Loan a book\n";
        std::cout << "4. Return book\n";
        std::cout << "5. Exit\n";
        std::cout << "Choice ->\n";
        std::cin >> choice;
        if(choice == 1){
            myLibrary.displayInventory();
        } else if(choice == 2){
            std::string title;
            std::cout << "Enter book title: ";
            std::cin.ignore();
            std::getline(std::cin, title);
            myLibrary.searchByTitle(title);
        } else if(choice == 3){
            int bookID, memberID;
            std::cout << "Enter book ID: "; std::cin >> bookID;
            std::cout << "Enter member ID: "; std::cin >> memberID;
            myLibrary.loanBook(bookID, memberID);
        } else if(choice == 4){
            int bookID, memberID;
            std::cout << "Enter book ID: "; std::cin >> bookID;
            std::cout << "Enter member ID: "; std::cin >> memberID;
            myLibrary.returnBook(bookID, memberID);
        }
    }
    std::cout << "Closeing.\n";

    return 0;
}