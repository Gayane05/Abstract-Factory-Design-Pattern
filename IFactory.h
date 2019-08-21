#pragma once
#include "IProducts.h"

class IFactory
{
public:
	virtual IButton* CreateButton() = 0;
	virtual ICheckbox* CreateCheckbox() = 0;
	virtual IIcon* CreateIcon() = 0;
};