#pragma once
#include <string>

class TextSource
{
private:
	std::string strSource;
	std::string strContent;
	bool bHasContent = false;
	bool bIsModified = false;
public:
	TextSource();
	~TextSource();

	std::string getSrc();
	bool setSrc(std::string);
	std::string getContent();
	bool setContent(std::string);
	bool hasContent();
	void setHasContent();
	bool isModified();
	void setModified();
};

