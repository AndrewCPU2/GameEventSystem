#include "GameEngine.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Initialize the static instance
GameEngine* GameEngine::instance = nullptr;

GameEngine::GameEngine() {} // Definition of the private constructor

GameEngine* GameEngine::getInstance() {
    if (instance == nullptr) {
        instance = new GameEngine(); // Create new instance if one doesn't exist
    }
    return instance;
}

void GameEngine::registerPlayer(const string& playerName) {
    players.push_back(playerName);
}

void GameEngine::triggerEvent(const string& event) {
    cout << "[GameEngine] Event Triggered: " << event << endl;
}

void GameEngine::playerAction(const string& playerName, const string& action) {
    cout << "[GameEngine] " << playerName << " " << action << endl;
}
