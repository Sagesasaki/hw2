#include "product.h"
#include "util.h"

class Book : public Product{


	public:
		Book(const std::string category, const std::string name, double price, int qty, std::string isbn, std::string author);
    ~Book();
		std::string displayString() const;
		std::set<std::string> keywords() const;
		void dump(std::ostream& os) const;
	private:
		std::string isbn_;
		std::string author_;

};