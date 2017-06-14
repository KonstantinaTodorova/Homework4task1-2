#include "Secretary.h"

void Secretary::resize(int newSize)
{
    char** temp = new char*[languageCapacity * 2];
    this->languageCapacity *= 2;

    for(int i = 0; i < countOfLanguages; i++)
    {
        temp[i] = spokenLanguages[i];
    }

    delete[] spokenLanguages;

    spokenLanguages = temp;
}

void Secretary::copy(const Secretary& other)
{
    destroy();
    this->secretaryName = new char[strlen(other.secretaryName) + 1];
    strcpy(this->secretaryName, other.secretaryName);
    this->languageCapacity= other.languageCapacity;
    this->spokenLanguages = new char*[languageCapacity];
    for(int i = 0; i < languageCapacity; i++)
    {
        spokenLanguages[i] = new char[20];
        strcpy(spokenLanguages[i], other.spokenLanguages[i]);
    }
    this->countOfLanguages = other.countOfLanguages;
}


void Secretary::destroy()
{
    delete[] secretaryName;
    for (int i =0; i < languageCapacity; i++)
    {
        delete[] spokenLanguages[i];
    }
    delete[] spokenLanguages;

}
Secretary::Secretary()
{
    countOfLanguages = 0;
    languageCapacity = 0;
    secretaryName = nullptr;
    spokenLanguages = new char*[languageCapacity];
}

Secretary::~Secretary()
{
    destroy();
}

Secretary::Secretary(const Secretary& other)
{
    copy(other);
}

Secretary& Secretary::operator=(const Secretary& other)
{
    if (this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}

void Secretary::addLanguage(char* language)
{
    if(countOfLanguages == languageCapacity)
        resize(4);
    strcpy(spokenLanguages[countOfLanguages], language);
    countOfLanguages++;
}

const void Secretary::printLanguages()
{
    for (int i = 0; i < languageCapacity; i++)
        std::cout<<spokenLanguages[i] << std::endl;
}





