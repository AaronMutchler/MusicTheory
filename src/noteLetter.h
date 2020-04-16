#ifndef MUSICTHEORY_NOTELETTER_H
#define MUSICTHEORY_NOTELETTER_H

#include <iostream>
#include <cmath>

namespace theory {

    class NoteLetter {
    public:
        NoteLetter();

        explicit NoteLetter(char letter);

        NoteLetter &operator=(const NoteLetter &rhs);

        NoteLetter &operator=(char rhs);

        NoteLetter operator+(int letterSteps) const;

        NoteLetter operator-(int letterSteps) const;

        std::string ToString() const;

        char GetLetter() const;

        int GetOrdinalClass() const;

        int GetPitchClass() const;

    private:
        bool mLetterIsValid(char letter) const;

        char mOrdinalClassToLetter(int ordinalClass) const;

        int mOrdinalClassToPitchClass(int ordinalClass) const;

        char mPitchClassToLetter(int pitchClass) const;

        int mPitchClassToOrdinalClass(int pitchClass) const;

        int mLetterToOrdinalClass(char letter) const;

        int mLetterToPitchClass(char letter) const;

        int mModulo7(int n) const;

        static const int kASCII_A = 65;
        static constexpr double kOrdinalToPitch = 1.79;
        static constexpr double kPitchToOrdinal = 0.556;

        char mLetter;
        int mOrdinalClass;
        int mPitchClass;
    };

    bool operator==(const NoteLetter &lhs, const NoteLetter &rhs);

    bool operator!=(const NoteLetter &lhs, const NoteLetter &rhs);

    bool operator==(const NoteLetter &lhs, char rhs);

    bool operator!=(const NoteLetter &lhs, char rhs);

}
#endif //MUSICTHEORY_NOTELETTER_H