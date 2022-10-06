#include "clothing.h"

using namespace std;


	Clothing::Clothing(const std::string category, const std::string name, double price, int qty, std::string size, std::string brand):Product(category, name, price, qty){
				brand_ = brand;
				size_ = size;
	}
	Clothing::~Clothing(){

	}

	string Clothing::displayString() const{
	//name, 2 uniques, price, quantity
	//author, isbn
	string returnString;
	returnString = name_ + '\n' + "Size: " + size + " Brand: " + brand + '\n' + price_ + " " + qty_ + " left." + endl;
	return returnString;
}
	
set<std::string> Clothing::keywords() const{

	set<string> returnSet;

	set<string> brandSet = parseStringToWords(brand_);
	set<string> nameSet = parseStringToWords(name_);

	returnSet = setUnion(brandSet, nameSet); 

	return returnSet;
}


void Clothing::dump(std::ostream& os) const{
	os << category_ << "\n" << name_  << "\n" << price_ << "\n" << qty_ << "\n" << size_ << "\n" << brand_ << std::endl;
}
