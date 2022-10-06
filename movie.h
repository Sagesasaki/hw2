#include "product.h"
#include "util.h"

class Movie : public Product{


	public:
		Movie(const std::string category, const std::string name, double price, int qty, std::string genre, std::string rating);
    ~Movie();
		string displayString() const;
		set<string> keywords() const;
		void dump(std::ostream& os) const;
	private:
		string genre_;
		string rating_;

};