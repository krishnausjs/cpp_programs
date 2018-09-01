#include <iostream>


bool Movies::add_movie(std::string movie, std::string rating, int count) {
	
	
	m.name = movie;
	m.rating = rating;
	m.watched = count;
	mv.push_back(m);		
}

