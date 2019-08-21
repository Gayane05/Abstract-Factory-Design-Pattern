#pragma once
#include "IProducts.h"

// Larger Device Products
class LargeDeviceButton : public IButton
{
public:
	virtual ~LargeDeviceButton() { std::cout << "Destructor works\n"; }

	virtual void Info()
	{
		IButton::Info();
		std::cout << "larger device." << std::endl;
	}
};

class LargeDeviceCheckbox : public ICheckbox
{
public:
	virtual ~LargeDeviceCheckbox() { std::cout << "Destructor works\n"; }
	virtual void Info()
	{
		ICheckbox::Info();
		std::cout << "larger device." << std::endl;
	}
};


class LargeDeviceIcon : public IIcon
{
public:
	virtual ~LargeDeviceIcon() { std::cout << "Destructor works\n"; }
	virtual void Info()
	{
		IIcon::Info();
		std::cout << "larger device." << std::endl;
	}
};




// Medium Device Products
class MediumDeviceButton : public IButton
{
public:
	virtual void Info()
	{
		IButton::Info();
		std::cout << "medium device." << std::endl;
	}
};

class MediumDeviceCheckbox : public ICheckbox
{
public:
	virtual void Info()
	{
		ICheckbox::Info();
		std::cout << "medium device." << std::endl;
	}
};


class MediumDeviceIcon : public IIcon
{
public:
	virtual void Info()
	{
		IIcon::Info();
		std::cout << "medium device." << std::endl;
	}
};


