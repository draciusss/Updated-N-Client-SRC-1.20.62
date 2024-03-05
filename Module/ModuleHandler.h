#pragma once

#pragma region Module imports

int disablerMode = 0;

int FontModeHud = 0;
bool PostProcessingHud = true;
//int HotbarModeHud = 0;
//bool SmoothHotbarHud = true;
bool BloomHud = true;

#include "Modules/Visual/Animations.h"
#include "Modules/Visual/ItemModel.h"
#include "Modules/Visual/ArrayList.h"
#include "Modules/Visual/ClickGUI/ClickGUI.h"
#include "Modules/Visual/Watermark.h"
#include "Modules/Visual/Changelog.h"

#include "Modules/Combat/Killaura.h"

#include "Modules/Player/ChestDumper.h"
#include "Modules/Player/Velocity.h"
#include "Modules/Player/InventoryMove.h"

#include "Modules/Movement/Speed.h"
#include "Modules/Movement/FastStop.h"
#include "Modules/Movement/ReverseStep.h"

#include "Modules/Miscellaneous/Disabler.h"
#include "Modules/Miscellaneous/ClientSidedUI.h"

#include "Modules/World/Scaffold.h"

// INVISIBLE MODULES!
#include "Modules/System/LifeboatTickAction.h"
#include "Modules/System/ClientTick.h"
#include "Modules/System/LayoutEditor.h"

#pragma endregion

void SortCategories()
{
	for (Module* mod : modules)
	{
		if (std::find(categories.begin(), categories.end(), mod->getCategory()) == categories.end())
			categories.push_back(mod->getCategory());
	}
}

void InitializeModules()
{
	//Visual;
	modules.push_back(new ArrayList(Keyboard::NONE, true));
	modules.push_back(new ItemModel(Keyboard::NONE));
	modules.push_back(new FakeBlock(Keyboard::NONE, true));
	modules.push_back(new ClickGUI(Keyboard::INSERT));
	modules.push_back(new Watermark(Keyboard::NONE, true));
	//modules.push_back(new Zoom(Keyboard::NONE));


	//Combat
	//modules.push_back(new Hitbox(Keyboard::NONE));
	modules.push_back(new Killaura(Keyboard::NONE));

	//Movement
	modules.push_back(new Speed(Keyboard::NONE));
	modules.push_back(new FastStop(Keyboard::NONE));
	modules.push_back(new ReverseStep(Keyboard::NONE));

	//Player
	modules.push_back(new Velocity(Keyboard::NONE));
	modules.push_back(new ChestDumper(Keyboard::NONE));
	modules.push_back(new InventoryMove(Keyboard::NONE));

	//Misc
	modules.push_back(new Module("AntiBot", "Misc", "No more bots :)", Keyboard::NONE, true));
	//modules.push_back(new ClickTP(Keyboard::NONE));
	modules.push_back(new Disabler(Keyboard::NONE));
	modules.push_back(new ClientSidedUI(Keyboard::NONE));

	//World
	modules.push_back(new Scaffold(Keyboard::NONE));

	//System
	//modules.push_back(new LifeboatTickAction(Keyboard::NONE));
	//modules.push_back(new ClientTick(Keyboard::NONE));
	//modules.push_back(new LayoutEditor(Keyboard::DELETE_KEY));

	std::string out;
	bool versionMismatch = false;
	if (Util::doesClientPathExist(Util::getClientPath() + "Version.iris"))
	{
		std::ifstream verFileRead;
		verFileRead.open(Util::getClientPath() + "Version.iris");
		std::getline(verFileRead, out);
		verFileRead.close();

		if (out != Game::Iris::ClientVersion)
			versionMismatch = true;
	}
	else
		versionMismatch = true;

	if (versionMismatch)
		modules.push_back(new Changelog(Keyboard::NONE));

	std::ofstream verFile;
	verFile.open(Util::getClientPath() + "Version.iris");

	if (verFile.is_open())
	{
		verFile << Game::Iris::ClientVersion;
		verFile.close();
	};
}

void InitializeMods()
{
	InitializeModules();

	SortCategories(); // create categories
}

void UninitializeMods()
{
	for (auto mod : modules)
	{
		if (mod->isEnabled())
			mod->toggle();

		delete mod;
	}
}