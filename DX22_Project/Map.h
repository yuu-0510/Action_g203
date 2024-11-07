#pragma once
#include "ObjectBase.h"
#include "Block.h"

#define MAP_WIDTH		(100)			//マップ配列　列
#define MAP_HEIGHT 		(30)			//マップ配列　行

class CMap : public CObjectBase
{
public:
	CMap();
	~CMap();
public:
	void Update();
	void Draw();

private:
	CBlock* m_Map[MAP_HEIGHT][MAP_WIDTH];		//マップ配列
};

