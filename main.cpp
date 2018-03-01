#include <iostream>
#include <variant>
#include <string>
#include <vector>


int main( int argc, char** argv) {

	std::cout << "variant loop:" << std::endl ;

	using my_type = std::variant<int, const char*, std::string> ;

	std::vector<my_type> vec ;

	vec.push_back( 42 ) ;
	vec.push_back("test") ;


	for ( auto& iter : vec ) {
		std::visit([](auto&& arg){
			std::cout << arg <<std::endl ;	
		}, iter) ;
	}

	return 0 ;
}
