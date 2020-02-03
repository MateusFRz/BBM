#include "beertype.h"
#include "ingredienttype.h"
#include "baraddress.h"

static QString beerTypeToQString (BeerType type) {

    switch (type) {
        case BeerType::BLONDE :
            return "BLONDE";
        case BeerType::BRUNE :
            return "BRUNE";
        case BeerType::ROUSSELOL :
            return "ROUSSELOL";
       // case BeerType::NOTHING :
        default :
            return "NO TYPE";

    }
}

static BeerType QStringToBeerType (QString type) {

    if (type=="BLONDE") return BeerType::BLONDE;
    else if (type=="BRUNE") return BeerType::BRUNE;
    else if (type=="ROUSSELOL") return BeerType::ROUSSELOL;
    else return BeerType::NOTHING;
}

static QString ingredientTypeToQString (IngredientType type) {

    switch (type) {
        case IngredientType::BLE :
            return "BLE";
        case IngredientType::HOUBLON :
            return "HOUBLON";
        default : break;
    }
    return "NO TYPE FOR INGREDIENT";
}

static IngredientType QStringToIngredientType (QString type) {

    if (type=="HOUBLON") return IngredientType::HOUBLON;
    else if (type=="BLE") return IngredientType::BLE;
    else return IngredientType::NOTHING;
}

static QString barAddressToQString (BarAddress address) {

    switch (address) {
        case BarAddress::PLACE :
            return "PLACE";
        case BarAddress::QUARTIER :
            return "QUARTIER";
        case BarAddress::CENTREVILLE :
            return "CENTREVILLE";
        default: break;
    }
    return "NO TYPE FOR BarAddress";
}

static BarAddress QStringToBarAddress (QString address) {

    if (address=="PLACE") return BarAddress::PLACE;
    else if (address=="QUARTIER") return BarAddress::QUARTIER;
    else if (address=="CENTREVILLE") return BarAddress::CENTREVILLE;
    else return BarAddress::NOTHING;
}
