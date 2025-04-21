#pragma once
#include "Actor.h"

class AWall : AActor
{
public:
	AWall();
	virtual ~AWall();

	virtual void Render() override;
};

