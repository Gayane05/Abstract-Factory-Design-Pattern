#include <iostream>
#include <memory>
#include "Products.h"
#include "Factories.h"

IFactory* Client()
{
	return LargeDevicesFactory::Instance();
	// return MediumDevicesFactory::Instance();
}

int main()
{
	using sPtr = std::shared_ptr<IFactory>;
	sPtr factory{Client()};
//	IFactory* factory = Client();

	std::shared_ptr<IIcon> icon {factory->CreateIcon()};
	std::shared_ptr<IButton> button{ factory->CreateButton()};
	
	button->Info();
	icon->Info();

//	delete factory;
	/*delete icon;
	delete button;*/
	return 0;
}