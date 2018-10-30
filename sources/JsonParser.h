#ifndef __JSONPARSER__H
#define __JSONPARSER__H

#include <vector>
#include <memory>
#include <QString>

class Stock;

class JsonParser
{
	public:
		static std::vector<std::shared_ptr<Stock>> parseStockBasic(const QString&);
};

#endif//__JSONPARSER__H
