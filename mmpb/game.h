#ifndef GAME_H
#define GAME_H
#include <QKeyEvent>
#include <QWidget>

class Game : public QWidget
{
    Q_OBJECT
public:
    explicit Game(QWidget *parent = nullptr);
    //运行
    void run();
    //初始化游戏
    void intiGame();
    //清理游戏
    void clearGame();
    //更新游戏
    void updateGame();
    //绘制游戏
    void drawGame(QPainter* painter);

    //根据键盘输入操纵玩家状态
    void keyPressEvent(QKeyEvent*ev)override;
    //使玩家不会一直不停移动
    void keyReleaseEvent(QKeyEvent*ev)override;
    //哪个玩家在活动 默认玩家一处于活动状态
    bool isPlayerOneActive = true;


protected:
    virtual void paintEvent(QPaintEvent* ev)override;
    virtual void closeEvent(QCloseEvent* ev)override;

private:
    int score1 = 0;//玩家一得分
    int score2 = 0;//玩家二得分

};

#endif // GAME_H
