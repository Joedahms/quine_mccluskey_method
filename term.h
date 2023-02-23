#ifndef term_h
#define term_h

#include <vector>

class term {
	private:
		std::vector<int> bin;	
		std::vector<int> decimal;
	public:
		int get_bin(int index);
		void set_bin(int index);
		void add_bin();
		
		int get_decimal(int index);
		void set_decimal(int index);
		void add_decimal();
}

#endif
