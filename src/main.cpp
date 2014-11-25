#include <iostream>
#include <string>


void
nprint(std::string str, int n)
{
	for(int i=0;i<n;++i){
				std::cout<<str;
	std::cout<<'\n';
	}
}
int main() {
	std::cout << "Some sample ill formated c++ code\n";
	nprint("test");
return 0;
}
