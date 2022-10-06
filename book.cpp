#include "book.h"

using namespace std;

Book::Book(const std::string category, const std::string name, double price, int qty, std::string isbn, std::string author):Product(category, name, price, qty){
	isbn_ = isbn;
	author_ = author;
}
Book::~Book(){}

string Book::displayString() const{
	//name, 2 uniques, price, quantity
	//author, isbn
	string returnString;
	returnString = name_ + '\n' + "Author: " + author_ + " ISBN: " + isbn_ + '\n' + price_ + " " << qty_ + " left." + endl;
	return returnString;
}
set<std::string> Book::keywords() const{

	set<string> returnSet;

	set<string> authorSet = parseStringToWords(author_);
	set<string> nameSet = parseStringToWords(name_);

	returnSet = setUnion(authorSet, nameSet); 
	returnSet.insert(isbn_)

	return returnSet;
}

void Book::dump(std::ostream& os) const{
	os << category_ << "\n" << name_  << "\n" << price_ << "\n" << qty_ << "\n" << isbn_ << "\n" << author_ << std::endl;
}
