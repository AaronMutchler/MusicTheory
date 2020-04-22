#ifndef MUSICTHEORY_NATURALNOTE_H
#define MUSICTHEORY_NATURALNOTE_H

namespace theory {
    class NaturalNote {
    public:
        /*** Constructors ***/
        NaturalNote();
        NaturalNote(char letter);
        NaturalNote(int pitchClass);

        /*** Overloaded Operators ***/
        NaturalNote &operator=(const NaturalNote &rhs);
        NaturalNote &operator=(char letter);
        NaturalNote &operator=(int pitchClass);

        NaturalNote operator+(const NaturalNote &rhs);
        NaturalNote operator-(const NaturalNote &rhs);

        NaturalNote &operator++(int);
        NaturalNote &operator--(int);

        friend bool operator==(const NaturalNote &lhs, const NaturalNote &rhs);
        friend bool operator!=(const NaturalNote &lhs, const NaturalNote &rhs);

        /*** Utility Methods ***/

        NaturalNote getDistanceToUpperNeighbor();
        NaturalNote getDistanceToLowerNeighbor();

        /*** Getters and Setters ***/

        char getLetter();
        int getOrdinalClass();
        int getPitchClass();
    private:
        bool isValid_();

        int letterToOrdinalClass_(char letter);
        int ordinalClassToPitchClass_(int ordinalClass);
        int pitchClassToOrdinalClass_(int pitchClass);
        char ordinalClassToLetter_(int ordinalClass);

        static constexpr double sOrdinalToPitchConstant_ = 0.0;
        static constexpr double sPitchToOrdinalConstant_ = 0.0;

        char letter_;
        int ordinalClass_;
        int pitchClass_;
    };
}



#endif //MUSICTHEORY_NATURALNOTE_H