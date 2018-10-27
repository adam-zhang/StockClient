#ifndef __STOCK__H
#define __STOCK__H

#include <QString>
#include "Macros.h"

class Stock
{
	property(QString, tsCode);
	property(QString, symbol);
	property(QString, name);
	property(QString, area);
	property(QString, industry);
	property(QString, fullName);
	property(QString, englishName);
	property(QString, market);
	property(QString, exchangeID);
	property(QString, currencyType);
	property(QString, listStatus);
	property(QString, listDate);
	property(QString, delistDate);
	property(QString, isHS);
};
#endif//__STOCK__Hy
