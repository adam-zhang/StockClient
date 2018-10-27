#ifndef __STOCK__H
#define __STOCK__H

#include <QString>
#include "Macros.h"

class Stock
{
	property(QString, tsCode, setTsCode);
	property(QString, symbol, setSymbol);
	property(QString, name, setName);
	property(QString, area, setArea);
	property(QString, industry, setIndustry);
	property(QString, fullName, setFullName);
	property(QString, englishName, setEnglishName);
	property(QString, market, setMarket);
	property(QString, exchangeID, setExchangeID);
	property(QString, currencyType, setCurrencyType);
	property(QString, listStatus, setListStatus);
	property(QString, listDate, setListDate);
	property(QString, delistDate, setDelistDate);
	property(QString, isHS, setIsHS);
};
#endif//__STOCK__Hy
