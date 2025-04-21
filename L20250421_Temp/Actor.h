#pragma once

class AActor
{
public:

	AActor();
	virtual ~AActor();
	virtual void Tick();
	virtual void Render();

protected:
	// 위치 구조체 X, Y
};

