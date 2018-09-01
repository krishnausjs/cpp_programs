#include <iostream>
#include <string>

#include "Movie.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name) {
	if(movies.increment_watched(name)) {
		std::cout << name << "Watch increment" << std::endl;
    }else {
		std::cout << name << "not found" << std::endl;
	}
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
	if(movies.add(name,rating,watched)) {
		std::cout << name << "added" << std::endl;
	} else {
		std::cout << name << "already exists" << std::endl;
	}

}

int main() {
	Movies my_movies;
	
	add_movie(my_movies,"Star wars", "PG-13", 2);
	add_movie(my_movies,"Star wars 2", "PG-13", 2);
	add_movie(my_movies,"Star wars 3", "PG-13", 2);

	my_movies.display();
	return 0;
}
