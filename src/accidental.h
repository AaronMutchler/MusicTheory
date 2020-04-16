#ifndef MUSICTHEORY_ACCIDENTAL_H
#define MUSICTHEORY_ACCIDENTAL_H

#include <iostream>

namespace theory {
    enum class AccidentalEnum {
        doubleFlat = -2, flat = -1, natural = 0, sharp = 1, doubleSharp = 2
    };

    class Accidental {
    public:
        Accidental();

        explicit Accidental(AccidentalEnum accidental);

        Accidental &operator=(const Accidental &rhs);

        Accidental &operator=(const AccidentalEnum &rhs);

        std::string ToString() const;

        int GetPitchClassModifier() const;

    private:
        AccidentalEnum mAccidental;
        int mPitchClassModifier;
    };



    bool operator==(const Accidental &lhs, const Accidental &rhs);
    bool operator!=(const Accidental &lhs, const Accidental &rhs);
    bool operator==(const Accidental &lhs, const AccidentalEnum &rhs);
    bool operator!=(const Accidental &lhs, const AccidentalEnum &rhs);
    bool operator==(const AccidentalEnum &lhs, const Accidental &rhs);
    bool operator!=(const AccidentalEnum &lhs, const Accidental &rhs);
}

#endif //MUSICTHEORY_ACCIDENTAL_H