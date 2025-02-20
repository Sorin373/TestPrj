/*
 *
 *  CITY_HPP
 *  City Data Management
 *
 *  This C++ header file defines the City class
 *
 *  - Defines the CITY class and CITY_NODE structure.
 *  - Various methods for adding, deleting, and retrieving city data.
 *  - Functions for sorting, searching, and filtering city data.
 *
 */

#pragma once
#ifndef __CITY_HPP__
#define __CITY_HPP__

class CITY
{
public:
    struct CITY_NODE
    {
    private:
        char *City_ID = nullptr, *City_Name = nullptr, *City_Type = nullptr;
        double latitude = 0.0, longitude = 0.0;

    public:
        CITY_NODE *prev = nullptr, *next = nullptr;

        CITY_NODE(const char *City_ID, const char *City_Name, const char *City_Type, const double latitude, const double longitude);
        ~CITY_NODE();
        char *getCityID(void) const noexcept;
        char *getCityName(void) const noexcept;
        char *getCityType(void) const noexcept;
        double getLatitude(void) const noexcept;
        double getLongitude(void) const noexcept;
        void swapData(CITY_NODE &node);

        static void sortData(const int sortType);
        static void alphabeticalCitySort(const int sortType);
        static void searchCityByName(void);
        static void searchCityByID(void);
        static void filterCityByCategory(void);
        static void displayCityData(void);
        static void displayIsolatedCities(void);
        static void displayUniqueRouteDepots(void);
        static void selectCityType(void);
        static void printCentralDepots(void);
    };

    CITY_NODE *head_city = nullptr, *tail_city = nullptr;

public:
    CITY_NODE *getHead(void) const noexcept;
    CITY_NODE *getTail(void) const noexcept;
    void getData(const char *City_ID, const char *City_Name, const char *City_Type, const double latitude, const double longitude);
    void fetchTable(void);
    static bool addCity(void);
    static bool deleteCity(void);
    void clear(void);
    ~CITY();
};

#endif // CITY_HPP
