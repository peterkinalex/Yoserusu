#ifndef WALL_H
#define WALL_H

#include "Mashiro/Scene/Model.h"
#include "Mashiro/Graphics/Texture.h"
#include "Mashiro/Math/Vector3.h"
#include "Mashiro/Math/Random.h"
#include "Game/Enum.h"
#include "Util/SoundManager.h"

class Ball;

class Wall
{
public:
	Wall();

	~Wall();

	void Animation(Ball* ball);

	void Draw( bool timer );

	WallColor GetWallColor();

	bool ResetFlag();

private:
	
	void MoveWall();	//�����z�u
	void DelWall(int color,Ball* ball);		//�ǂ𗣂�
	void ResetWall();	//�Ĕz�u

	Mashiro::Graphics::Texture			mTexture[3];
	Mashiro::Scene::Model			mModel[4];
	Mashiro::Math::Vector3			mPos[4];
	Mashiro::Math::Vector3			mVec[4];
	Mashiro::Math::Random				mRand;

	//2D
	int mCheck;
	WallState mWallState;

	int count;
	int seed;
	int rand;
	bool setflg;	//�����z�u�t���O
	bool delflg;
	bool resetflg;  //�Ĕz�u�t���O
	WallColor nowColor;
};
#endif