#include "Library.h"
#include <iostream>

void Library::addBook(const Book& newBook){
    books.push_back(newBook);
}
void Library::registerMember(const Member& newMember){
    members.push_back(newMember);
}
void Library::loanBook(int bookID, int memberID){
    for(Book& b : books){
        if(b.getBookID() == bookID){
            if(!b.isAvalible()){
                std::cout << "Book not avalible.\n";
                return;
            }

            for(Member& m : members){
                if(m.getMemberID() == memberID){
                    b.setAvalible(false);
                    m.borrowBook(bookID);
                    std::cout << "Laoned " << b.getTitle() << " to " << m.getName() << " successful.\n";
                    return;
                }
            }
        }
    }
    std::cout << "Book/Member ID not found.\n";
}
void Library::returnBook(int bookID, int memberID){
    for(Book& b : books){
        if(b.getBookID() == bookID){
            for(Member& m : members){
                if(m.getMemberID() == memberID){
                    b.setAvalible(true);
                    m.returnBook(bookID);

                    std::cout << "Returned " << b.getTitle() << " Successfully.\n";
                    return;
                }
            }
        }
    }
    std::cout << "Return failed check book/member ID.\n";
}
void Library::searchByTitle(std::string title) const{
    std::cout << "Searching for " << title << ".\n";
    bool found = false;

    for(const Book& b : books){
        if(b.getTitle() == title){
            std::cout << "Book found.\n";
            b.displayInfo();
            found = true;
        }
    }
    
    if(!found){
        std::cout << "Book titled" << title << " Not Found.\n";
    }
}
void Library::displayInventory() const{
    if(books.empty()){
        std::cout << "The Library is empty" << "\n";
    } else {
        for(const Book& b : books){
            b.displayInfo();
        }
    }
    
}
