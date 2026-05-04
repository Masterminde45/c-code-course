#include <iostream>
int main() {
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.75;
    char difficulityRating = 'B';
    bool hasCompletedTutoroial = true;
    // Display the player information
    std::cout << "Player Profile:" <<std::endl;
    std::cout <<"Level: " << playerLevel << std::endl;
    std::cout << "Experience:" << experiencePoints << std::endl;
    std::cout << "Difficulity Rating: " << difficulityRating <<std::endl;
    std::cout << "Completed Tourtorial: " << hasCompletedTutoroial << std::endl;
    return 0;
}
