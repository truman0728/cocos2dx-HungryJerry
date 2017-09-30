#pragma once
#include "cocos2d.h"
#include "Layers\BaseLayer.h"

USING_NS_CC;

class GameOverLayer : public BaseLayer
{
public:
	GameOverLayer();
	~GameOverLayer();
	CREATE_FUNC(GameOverLayer);
	virtual bool init() override;
	static Scene* createScene();
	void createStar(Vec2 panelPos, int num);
	void createCircle(Vec2 pos);

private:
	void menuCallback(Ref* sender);

};

