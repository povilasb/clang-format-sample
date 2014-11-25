#include <iostream>
#include <string>


void 				help (	)	const;


void
nprint(std::string str, int n)
{
	const char *pstr = str.c_str();
	for(int i=0;i<n;++i){
				std::cout<<str; // Simply output the specified string to stdout. This is way too long comment.
	std::cout<<'\n';
	}
}
int main() {
	std::cout << "Some sample ill formated c++ code\n";
	nprint("test");
call_to_non_existant_function();
return 0;
}
