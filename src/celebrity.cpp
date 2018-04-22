#include<iostream>
#include<string>
#include<vector>

#include "sorts.h"

/**
 * This class holds information based on 
 * celebrities that want to be met and
 * testing different sorting algorithms
 *
 * @author Alec Allain
 * @version 4/1/18
 */
class Celebrity {

	public:

		/**
		 * Constructor for class
		 */ 
		Celebrity() {

		}

		/**
		 * Second constructor for class
		 */
		Celebrity(std::string name, int rating, std::string area, bool met){
			this->name = name;
			this->rating = rating;
			this->area = area;
			this->met = met;	
		}

		/**
		 * returns name of celebrity
		 */
		std::string getName() {
			return name;
		}

		/**
		 * returns rating of celebrity
		 */
		int getRating() {
			return rating;
		}

		/**
		 * returns celebrity's area of work
		 */
		std::string getArea() {
			return area;
		}

		/**
		 * returns status if celebrity met
		 */
		bool getMet() {
			return met;
		}

		/**
		 * sets celebrity's name
		 */  
		void setName(std::string name) {
			this->name = name;
		}

		/**
		 * sets celebrity's rating
		 */  
		void setRating(int rating) {
			this->rating = rating;
		}

		/**
		 * sets celebrity's area
		 */
		void setArea(std::string area){
			this->area = area;
		}

		/**
		 * sets status of celebrity met
		 */ 
		void setMet(bool met) {
			this->met = met;
		}

		/**
		 * compares one celebrity to another
		 */
		friend bool operator< (Celebrity & s, Celebrity & t) {
			if (s.getRating() > t.getRating() || s.getRating() < t.getRating() || s.getRating() == t.getRating()) {
				if (s.getMet() == true || t.getMet() == true || s.getMet() == t.getMet()) {
					if (s.getName() < t.getName()) {
						return true;
					}
				}
			}
			return false;
		}

		int objects(int number) {
			for (int i = 1; i <= number; i++) {
				tempName = "celeb" + i;
				for (int j = 0; j < 8; j++) {
					randName += "a" + rand() % 26;
				}
				randRating = rand() % 10 + 1;
				tempMet = rand() % 2;
				if (tempMet == 0) {
					randMet = true;
				}
				else if (tempMet == 1) {
					randMet = false;
				}
				Celebrity tempName(randName, randRating, "some area", randMet);
				people.push_back(tempName);
			}
		}

	private:

		// instance variables
		std::string name;
		int rating;
		std::string area;
		bool met;

		std::string tempName;
		std::string randName;
		int randRating;
		int tempMet;
		bool randMet;

		std::vector<Celebrity> people;

		Celebrity* one;
		Celebrity* two;
		Celebrity* three;
		Celebrity* four;
		Celebrity* five;
		Celebrity* six;
		Celebrity* seven;
		Celebrity* eight;
		Celebrity* nine;
		Celebrity* ten;

};

/**
 * Main method for class
 */
int main (int argc, char** argv) {

	std::vector<Celebrity> people;

	/**
 	* This section is commented out because its associated with
 	* the previous timing tests
 	*/ 

	// Celebrity one("Joel Zimmerman", 10, "Music", false);
	// Celebrity two("Ryan Reynolds", 10, "Acting", false);
	// Celebrity three("Sonny Moore", 10, "Music", false);
	// Celebrity four("Jim Carrey", 10, "Acting", false);
	// Celebrity five("Will Ferrell", 8, "Acting", false);
	// Celebrity six("Marshall Mathers", 8, "Music", false);
	// Celebrity seven("Kanye West", 7, "Music", false);
	// Celebrity eight("Aubrey Graham", 7, "Music", false);
	// Celebrity nine("Abel Tesfaye", 8, "Music", false);
	// Celebrity ten("Timothy Mosley", 8, "Music", false);

	// people.push_back(one);
	// people.push_back(two);
	// people.push_back(three);
	// people.push_back(four);
	// people.push_back(five);
	// people.push_back(six);
	// people.push_back(seven);
	// people.push_back(eight);
	// people.push_back(nine);
	// people.push_back(ten);

	int objects(10);
	quicksort(people);	
	
}

