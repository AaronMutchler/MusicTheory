#ifndef MUSICTHEORY_ACCIDENTAL_H
#define MUSICTHEORY_ACCIDENTAL_H

#include <iostream>

namespace theory {

    enum class AccidentalEnum { quadrupleFlat, tripleFlat, doubleFlat, flat, natural, sharp, doubleSharp, tripleSharp, quadrupleSharp };

    class Accidental {
    public:
        Accidental();
        Accidental(AccidentalEnum accidental);
    };

}


#endif //MUSICTHEORY_ACCIDENTAL_H