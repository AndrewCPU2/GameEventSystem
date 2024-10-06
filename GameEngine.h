#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GameEngine {
public:
    static GameEngine* getInstance(); // Create sole instance
    void registerPlayer(const string& playerName);
    void triggerEvent(const string& event);
    void playerAction(const string& playerName, const string& action);

private:
    GameEngine(); // Private constructor for singleton
    static GameEngine* instance; // Singleton instance
    vector<string> players; // List of registered players
};

#endif // GAMEENGINE_H
