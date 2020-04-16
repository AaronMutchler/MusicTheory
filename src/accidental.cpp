#include "accidental.h"

namespace theory {

    Accidental::Accidental() {
        mAccidental = {};
        mPitchClassModifier = {};
    }

    Accidental::Accidental(AccidentalEnum accidental) {
        mAccidental = accidental;
        mPitchClassModifier = static_cast<int>(mAccidental);
    }

    Accidental &Accidental::operator=(const Accidental &rhs) {
        if (*this != rhs) {
            mAccidental = rhs.mAccidental;
            mPitchClassModifier = rhs.mPitchClassModifier;
        }
        return *this;
    }

    Accidental &Accidental::operator=(const AccidentalEnum &rhs) {
        if (mAccidental != rhs) {
            mAccidental = rhs;
            mPitchClassModifier = static_cast<int>(mAccidental);
        }
        return *this;
    }

    std::string Accidental::ToString() const {
        switch (mPitchClassModifier) {
            case -2:
                return "double flat";
            case -1:
                return "flat";
            case 0:
                return "natural";
            case 1:
                return "sharp";
            case 2:
                return "double sharp";
            default:
                throw (std::runtime_error("Accidental not valid"));
        }
    }

    int Accidental::GetPitchClassModifier() const {
        return mPitchClassModifier;
    }

    bool operator==(const Accidental &lhs, const Accidental &rhs) {
        return lhs.GetPitchClassModifier() == rhs.GetPitchClassModifier();
    }

    bool operator!=(const Accidental &lhs, const Accidental &rhs) {
        return !(lhs == rhs);
    }

    bool operator==(const Accidental &lhs, const AccidentalEnum &rhs) {
        return lhs.GetPitchClassModifier() == static_cast<int>(rhs);
    }

    bool operator!=(const Accidental &lhs, const AccidentalEnum &rhs) {
        return !(lhs == rhs);
    }

    bool operator==(const AccidentalEnum &lhs, const Accidental &rhs) {
        return static_cast<int>(lhs) == rhs.GetPitchClassModifier();
    }

    bool operator!=(const AccidentalEnum &lhs, const Accidental &rhs) {

    }
}