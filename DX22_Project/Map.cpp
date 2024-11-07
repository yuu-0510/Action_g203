#include "Map.h"

CMap::CMap()
{
	for (int j = 0; j < MAP_HEIGHT; j++)
	{
		for (int i = 0; i < MAP_WIDTH; i++)
		{
			m_Map[j][i] = new CBlock();
		}
	}
}

CMap::~CMap()
{
}

void CMap::Update()
{
	for (int j = 0; j < MAP_HEIGHT; j++)
	{
		for (int i = 0; i < MAP_WIDTH; i++)
		{
			if (!m_Map[j][i]) continue;
			m_Map[j][i]->Update();
		}
	}
}

void CMap::Draw()
{
}
