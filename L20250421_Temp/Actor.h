#pragma once

class AActor
{
public:

	AActor();
	virtual ~AActor();
	virtual void Tick();
	virtual void Render();

protected:
	// ��ġ ����ü X, Y
};

