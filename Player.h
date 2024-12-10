#ifndef PLAYER_CLASS_H_INCLUDED
#define PLAYER_CLASS_H_INCLUDED

#include <string>

class Player {
private:
    std::string playerName;
    int academic;      // 學科能力
    int popularity;    // 人緣
    int charm;        // 魅力
    int stamina;      // 體能
    int fatigue;      // 疲勞值
    int lucky;        // 幸運值
    int move;         // 行動點數上限
    bool sick;

public:
    Player();
    void setPlayer(const std::string& playerName, const int& type);
    void modifyStats(int aca, int pop, int chr, int fat, int sta, int luc);
    bool successfullGuy(int score);
    
    // Getters
    int getAcademic() const;
    int getStamina() const;
    int getPopularity() const;
    int getCharm() const;
    int getFatigue() const;
    std::string getName() const;
    int getMove() const;
    int getLucky() const;
    bool getSick() const;
    void displayPlayer();
    void print();
    void checkSick();
};
#endif // PLAYER_CLASS_H_INCLUDED