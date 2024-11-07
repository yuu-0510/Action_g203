#pragma once
#include "ObjectBase.h"
#include "Block.h"

#define MAP_WIDTH		(100)			//�}�b�v�z��@��
#define MAP_HEIGHT 		(30)			//�}�b�v�z��@�s

class CMap : public CObjectBase
{
public:
	CMap();
	~CMap();
public:
	void Update();
	void Draw();

private:
	CBlock* m_Map[MAP_HEIGHT][MAP_WIDTH];		//�}�b�v�z��
};

