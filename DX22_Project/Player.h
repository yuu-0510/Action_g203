#pragma once
#include "Character.h"
#include "Wire.h"
#define GRAVITI (9.80665) //重力加速度

class CPlayer : public CCharacter
{
public:
	CPlayer();
	~CPlayer();

private:
	bool bJumpFlg;							//ジャンプフラグ
	float fHalfSizeX;						//当たり判定
	float fHalfSizeY;						//当たり判定
	CWire* m_Wire;							//ワイヤークラス
	
private:
	void CheckCollision(/*座標、当たり判定*/);			//当たり判定関数
	void Move();										//移動関数


};

