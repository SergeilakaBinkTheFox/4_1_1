#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
class base
{
protected:
	std::string name;
	base* head;
	std::vector<base*> ar_p;
	int status;
public:

	base(base*, std::string = "Def_name");
	void set_name(std::string);
	std::string get_name();
	void display();
	void rebase(base* new_per);
	base* get_head_p();
	~base();
	base* find_n(std::string);
	void set_readiness(std::string na, int stat);
	void print();//exeprimental
	void print_ready();//exeprimental

};
#endif 