#include <iostream>
#include <string>

#include "Movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
	if(movies.increment_watched(name)) {
		std::cout << name << " Watch increment" << std::endl;
    }else {
		std::cout << name << " not found" << std::endl;
	}
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
	if(movies.add_movie(name,rating,watched)) {
		std::cout << name << " added" << std::endl;
	} else {
		std::cout << name << " already exists" << std::endl;
	}

}

int main() {
	Movies my_movies;
	
	my_movies.display();

	add_movie(my_movies,"AXL", "PG-13", 2);
	add_movie(my_movies,"MEG", "PG-13", 2);
	add_movie(my_movies,"Sharkando", "PG-13", 2);

	my_movies.display();

	add_movie(my_movies,"MEG", "PG-13", 7); //Already exist should be displayed
	add_movie(my_movies,"Ice age", "PG-13", 2);  //OK

	my_movies.display(); 

	
	return 0;
}
