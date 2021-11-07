```c++

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

  using std::string;

void print_vector(std::vector<int> vector) {
  std::cout << "GAME STATS: " << '\n';

  std::cout << "It took you " << vector.size() << " guesses to find the right number!" << std::endl;
  std::cout << "Your guesses were: " << '\n';
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << '\t';
  }
    std::cout << '\n';
    
}
void play() {
  std::vector <int> guesses;
  int guess_count = 0;
  int random = rand() % 251; //makes random numbers from a range of 0 - 250
                            //251 used because numbers won't print if number is even
    
      //std::cout << random << std::endl;  <- (random number chosen)
    int guess;
    
    while (true) {
      std::cout << "Guess a number from 0 - 251: \n";
      std::cin >> guess;
      guesses.push_back(guess);
  
    if (guess == random) {
      std::cout << "You win!\n";
      break;
    } else if (guess < random) {
      std::cout << "Too low :((\n";
      } else {
        std::cout << "Too high :((\n";
      }
  }

  print_vector(guesses);

}

int main() {
  srand(time(NULL)); //generates a brand new random num based on time on pc

  int option;
  do {

  std::cout << "0. Quit game\n1. Start Game\n";
  std::cin >> option;

  switch (option) {
    case 0: 
    std::cout << "See you next time!\n";
    return 0;
    break;

    case 1:
    std::cout << "Let's Begin!\n";
    play();
    break;
   }

  } while(option != 0);

}

  //std::cout << "\n";
  


```
