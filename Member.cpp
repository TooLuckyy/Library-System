#include "Member.h"
#include <iostream>
#include <algorithm>

Member::Member(std::string n, int id):name(n),memberID(id){}

std::string Member::getName() const{return name;}
int Member::getMemberID() const{return memberID;}
const std::vector<int>& Member::getBorrowedBooks() const{return borrowedBookIDs;}

void Member::borrowBook(int bookID){
    borrowedBookIDs.push_back(bookID);
}
void Member::returnBook(int bookID){
    auto it = std::find(borrowedBookIDs.begin(), borrowedBookIDs.end(), bookID);

    if (it != borrowedBookIDs.end()){
        borrowedBookIDs.erase(it);
        std::cout << "Book " << bookID << " returned by " << name << ".\n";
    } else {
        std::cout << "Member " << name << " does not have book " << bookID << ".\n";
    }
}
void Member::displayMemeberInfo() const{
    std::cout << "Member: " << name << " ID: " << memberID << "\n";
    if(borrowedBookIDs.empty()){
        std::cout << "No books currently borrowed" << std::endl;
    } else {
        std::cout << "Borrowed book IDs: ";
        for(int id : borrowedBookIDs){
            std::cout << id << " ";
        }
        std::cout << std::endl;
    }
}
