#pragma once
#ifndef INCLUDED_CMDCLEARALLITEMS_H
#define INCLUDED_CMDCLEARALLITEMS_H
#include "command/Cmd.h"

class CmdClearAllItems : public Cmd
{
public:
	CmdClearAllItems() {}
	~CmdClearAllItems(){}

	void execute(Data& d, MainScreen& s);
};

#endif