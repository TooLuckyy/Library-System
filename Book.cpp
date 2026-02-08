#include "Book.h"
#include <iostream>

Book::Book(std::string t, std::string a, int i):title(t),author(a),bookID(i),avalible(true){}

std::string Book::getAuthor() const{return author;}
std::string Book::getTitle() const{return title;}
int Book::getBookID() const{return bookID;}
bool Book::isAvalible() const{return avalible;}

void Book::setAvalible(bool status){
    avalible = status;
}
void Book::displayInfo() const {
    std::cout << "++++++++++++ " << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "author: " << author << std::endl;
    std::cout << "BookID: " << bookID << std::endl;
    std::cout << "Status: " << (avalible ? "Avalible" : "Checked Out") << std::endl;
    std::cout << "++++++++++++ " << std::endl;
}

