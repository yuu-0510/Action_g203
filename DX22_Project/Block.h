#pragma once
class CBlock
{
public:
	CBlock();
	~CBlock();
public:
	void Update();
	void Draw();
private:
	float fPosX;
	float fPosY;
	float fSizeX;
	float fSizeY;
	float fRotateX;
	float fRotateY;
};

