#pragma once

#include "FVector2D.h"

class AActor
{
public:

	AActor();
	virtual ~AActor();
	virtual void Tick();
	void AddActorWorldOffset(FVector2D Delta);
	virtual void Render();

protected:
	FVector2D Position;
	char Shape;
	// ��ġ ����ü X, Y
};

