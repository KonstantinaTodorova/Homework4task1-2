#pragma once
#include <iostream>
#include <cstring>

class Secretary
{
    public:
        Secretary();
        ~Secretary();
        Secretary(const Secretary& other);
        Secretary& operator=(const Secretary& other);

        const char* getSecretaryName() const;
        void setSecretaryName(char*);

        void addLanguage(char* language);

        const void printLanguages();

    private:
        char* secretaryName;
        char** spokenLanguages;

        int languageCapacity;
        int countOfLanguages;


        void resize(int newSize);
        void copy(const Secretary& other);
        void destroy();
};
