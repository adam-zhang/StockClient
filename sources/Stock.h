#ifndef __STOCK__H
#define __STOCK__H

#include <QString>
#include "Macros.h"

class Stock
{
	PROPERTY(QString, tsCode, setTsCode);
	PROPERTY(QString, symbol, setSymbol);
	PROPERTY(QString, name, setName);
	PROPERTY(QString, area, setArea);
	PROPERTY(QString, industry, setIndustry);
	PROPERTY(QString, fullName, setFullName);
	PROPERTY(QString, englishName, setEnglishName);
	PROPERTY(QString, market, setMarket);
	PROPERTY(QString, exchangeID, setExchangeID);
	PROPERTY(QString, currencyType, setCurrencyType);
	PROPERTY(QString, listStatus, setListStatus);
	PROPERTY(QString, listDate, setListDate);
	PROPERTY(QString, delistDate, setDelistDate);
	PROPERTY(QString, isHS, setIsHS);
};
#endif//__STOCK__Hy
