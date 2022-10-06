#include "movie.h"

using namespace std;

Movie::Movie(const std::string category, const std::string name, double price, int qty, std::string genre, std::string rating):Product(category, name, price, qty){
	genre_ = genre;
	rating_ = rating;
	
}
Movie::~Movie(){}

string Movie::displayString() const{
	string returnString;
	returnString = name_ + '\n' + "Genre: " + genre + " Rating: " + rating + '\n' + price_ + " " + qty_ + " left." + endl;
	return returnString;
}
	
set<std::string> Movie::keywords() const{


	set<string> returnSet = parseStringToWords(name_);

	//insert genreset into nameset

	returnSet.insert(genre_)

	return returnSet;
}


void Movie::dump(std::ostream& os) const{
	os << category_ << "\n" << name_  << "\n" << price_ << "\n" << qty_ << "\n" << genre_ << "\n" << rating_ << std::endl;
}



