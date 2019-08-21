#pragma once
#include "IFactory.h"
#include "Products.h"
#include <memory>

// LargerDevicesFactory
class LargeDevicesFactory : public IFactory
{
public:
	virtual IButton* CreateButton()
	{
		return new LargeDeviceButton;
	}
	virtual ICheckbox* CreateCheckbox()
	{
		return new LargeDeviceCheckbox;
	}
	virtual IIcon* CreateIcon()
	{
		return new LargeDeviceIcon;
	}

	static LargeDevicesFactory* Instance()
	{
		if (self == nullptr)
		{
			self = new LargeDevicesFactory;
		}
		return self;
	}
protected:
	LargeDevicesFactory() {};
private:
	static LargeDevicesFactory* self;
};

LargeDevicesFactory* LargeDevicesFactory::self = nullptr;



// MediumDevicesFactory
class MediumDevicesFactory : public IFactory
{
public:
	virtual IButton* CreateButton()
	{
		return new MediumDeviceButton;
	}
	virtual ICheckbox* CreateCheckbox()
	{
		return new MediumDeviceCheckbox;
	}
	virtual IIcon* CreateIcon()
	{
		return new MediumDeviceIcon;
	}

	static MediumDevicesFactory* Instance()
	{
		if (self == nullptr)
		{
			self = new MediumDevicesFactory;
		}
		return self;
	}
protected:
	MediumDevicesFactory() {};
private:
	static MediumDevicesFactory* self;
};

MediumDevicesFactory* MediumDevicesFactory::self = nullptr;
