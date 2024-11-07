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
	bool bJumpFlg;		//ジャンプフラグ
	//???				//当たり判定a
	CWire* m_Wire;		//ワイヤークラス
	float fPosX;
	float fPosY;

private:
	void CheckCollision(/*座標、当たり判定*/);			//当たり判定関数
	void Move();										//移動関数


};

