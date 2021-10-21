//
// Created by maurice Bal on 15/10/2021.
//

#include "Ray.h"


bool Ray::scan() {

    for(auto ob = 0; ob < object.size(); ob++){
        object[ob]->hit(*this);

        return true;

    }
    return false;

}
