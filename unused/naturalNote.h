#ifndef MUSICTHEORY_NATURALNOTE_H
#define MUSICTHEORY_NATURALNOTE_H

#include <iostream>

#include "interval.h"

namespace theory {

    class NaturalNote {
    public:
        /*** Constructors ***/
        NaturalNote();
        NaturalNote(char letter);

        /*** Overloaded Operators ***/
        NaturalNote &operator=(const NaturalNote &rhs);
        NaturalNote &operator=(char letter);

        NaturalNote operator+(int letterSteps) const;
        NaturalNote operator-(int letterSteps) const;

        NaturalNote &operator++(int);
        NaturalNote &operator--(int);

        friend bool operator==(const NaturalNote &lhs, const NaturalNote &rhs);
        friend bool operator!=(const NaturalNote &lhs, const NaturalNote &rhs);

        /*** Utility Methods ***/
        std::string toString() const;
        Interval getDistanceToUpperNeighborNaturalNote() const;
        Interval getDistanceToLowerNeighborNaturalNote() const;

        /*** Getters and Setters ***/
        char getLetter() const;
        int getOrdinalClass() const;
        int getPitchClass() const;

    private:
        void assignMembersFromLetter(char letter) const;
        bool isValid_(char letter) const;

        int letterToOrdinalClass_(char letter) const;
        int ordinalClassToPitchClass_(int ordinalClass) const;
        int pitchClassToOrdinalClass_(int pitchClass) const;
        char ordinalClassToLetter_(int ordinalClass) const;

        int mod7_(int n) const;
        int mod12_(int n) const;

        static constexpr double sOrdinalToPitchConstant_ = 0.0; // TODO: fix constant
        static constexpr double sPitchToOrdinalConstant_ = 0.0; // TODO: fix constant

        static const int sASCII_A_ = 65;

        char letter_;
        int ordinalClass_;
        int pitchClass_;
    };

    extern const NaturalNote NaturalNote_C('C');
    extern const NaturalNote NaturalNote_D('D');
    extern const NaturalNote NaturalNote_E('E');
    extern const NaturalNote NaturalNote_F('F');
    extern const NaturalNote NaturalNote_G('G');
    extern const NaturalNote NaturalNote_A('A');
    extern const NaturalNote NaturalNote_B('B');

}



#endif //MUSICTHEORY_NATURALNOTE_H