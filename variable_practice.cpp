#include <iostream>
int main() {
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.75;
    char difficulityRating = 'B';
    bool hasCompletedTutoroial = true;
    float Playerspeed = 20;
    short playerlives = 4;
    char playerGender = 'M';

    // Display the player information
    std::cout << "Player Profile:" <<std::endl;
    std::cout <<"Level: " << playerLevel << std::endl;
    std::cout << "Experience:" << experiencePoints << std::endl;
    std::cout << "Difficulity Rating: " << difficulityRating <<std::endl;
    std::cout << "Completed Tourtorial: " << hasCompletedTutoroial << std::endl;
    std::cout << "Speed: " <<Playerspeed <<std::endl;
    std::cout << "lives: " << playerlives <<std::endl;
std::cout << "Gender: " << playerGender <<std::endl;

    
    // Constants for game configuration
const int Max_PLAYER_LEVEL = 100;
const double EXperience_MulTIPLIER = 1.5;
const char GOLD_TIER_RATING = 'A';
// using auto for type deduction
auto currentScore = 98500;
auto averagePlayTime =45.5;
auto playerInitial = 'M';
auto isONline = false;
// Display constants
std::cout << "Game Configuration:" << std::endl;
std::cout << "Max Player Level: " << Max_PLAYER_LEVEL << std::endl;
std::cout << "Experience Multiplayer" << EXperience_MulTIPLIER << std::endl;
// Display auto variables
std::cout << "\nPlayer Data (using auto:)" <<std::endl;
std::cout << "Score: " << currentScore << std::endl;
std::cout << " Average Play Time: "  << averagePlayTime<<std::endl;
std::cout << "Player initial: " << playerInitial <<std::endl;
std::cout << "Online Status: " << isONline << std::endl;
return 0;
}