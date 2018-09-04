#include <iostream>
#include "Movie.h"

//implement the constructor
Movie::Movie(std::string name, std::string rating, int watched)
	:name(name), rating(rating), watched(watched) {

}

//implment copy constructor
Movie::Movie(const Movie &source) 
	:Movie(source.name, source.rating, source.watched) {

}

//Destructor
Movie::~Movie() {

}

void Movie::display() const {
	std::cout << name << " " << rating <<" " << watched << " " << std::endl;
} 
