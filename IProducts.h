#pragma once
#include <iostream>

class IButton
{
public:
	virtual void Info() = 0
	{
		std::cout << "Buttons' background color is grey. This is for ";
	}
	virtual ~IButton() { std::cout << "Destructor works\n"; }
};

class ICheckbox
{
public:
	virtual void Info() = 0
	{
		std::cout << "Checkboxs' background color is white. This checkbox is for ";
	}
	virtual ~ICheckbox() {
		std::cout << "Destructor works\n";
	}
};

class IIcon
{
public:
	virtual void Info() = 0
	{
		std::cout << "Icons have background. This icon is for ";
	}
	virtual ~IIcon() { std::cout << "Destructor works\n"; }
};