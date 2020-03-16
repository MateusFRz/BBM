#ifndef STUB_H
#define STUB_H

#include "metier/header/modelBeer.h"
#include "metier/header/bar.h"

class Stub {


public:
    static void stubModel(ModelBeer *model);
    static Bar * stubBar();
};

#endif // STUB_H
