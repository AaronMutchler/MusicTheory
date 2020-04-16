#include "noteLetter.h"

namespace theory {

    NoteLetter::NoteLetter() {
        mLetter = {};
        mOrdinalClass = {};
        mPitchClass = {};
    }

    NoteLetter::NoteLetter(char letter) {
        if (mLetterIsValid(letter)) {
            mLetter = letter;
            mOrdinalClass = mLetterToOrdinalClass(mLetter);
            mPitchClass = mOrdinalClassToPitchClass(mOrdinalClass);
        } else {
            throw std::runtime_error("Letter is invalid");
        }
    }

    NoteLetter &NoteLetter::operator=(const NoteLetter &rhs) {
        if (*this != rhs) {
            mLetter = rhs.mLetter;
            mOrdinalClass = rhs.mOrdinalClass;
            mPitchClass = rhs.mPitchClass;
        }
        return *this;
    }

    NoteLetter &NoteLetter::operator=(char rhs) {
        if (*this != rhs) {
            mLetter = rhs;
            mOrdinalClass = mLetterToOrdinalClass(mLetter);
            mPitchClass = mOrdinalClassToPitchClass(mOrdinalClass);
        }
        return *this;
    }

    NoteLetter NoteLetter::operator+(int letterSteps) const {
        return NoteLetter(mOrdinalClassToLetter(mModulo7(mOrdinalClass + letterSteps)));
    }

    NoteLetter NoteLetter::operator-(int letterSteps) const {
        return *this + (letterSteps * -1);
    }

    std::string NoteLetter::ToString() const {
        return std::string(1, mLetter);
    }

    char NoteLetter::GetLetter() const {
        return mLetter;
    }

    int NoteLetter::GetOrdinalClass() const {
        return mOrdinalClass;
    }

    int NoteLetter::GetPitchClass() const {
        return mPitchClass;
    }

    bool NoteLetter::mLetterIsValid(char letter) const {
        return (letter >= 'A' && letter <= 'G');
    }

    char NoteLetter::mOrdinalClassToLetter(int ordinalClass) const {
        int ASCII_letterOrder = mModulo7(ordinalClass + 2);
        return static_cast<char>(ASCII_letterOrder + kASCII_A);
    }

    int NoteLetter::mOrdinalClassToPitchClass(int ordinalClass) const {
        return static_cast<int>(round(ordinalClass * kOrdinalToPitch));
    }

    char NoteLetter::mPitchClassToLetter(int pitchClass) const {
        return mOrdinalClassToLetter(mPitchClassToOrdinalClass(pitchClass));
    }

    int NoteLetter::mPitchClassToOrdinalClass(int pitchClass) const {
        return static_cast<int>(round(pitchClass * kPitchToOrdinal));
    }

    int NoteLetter::mLetterToOrdinalClass(char letter) const {
        int ASCII_letterOrder = static_cast<int>(letter) - kASCII_A;
        return mModulo7(ASCII_letterOrder - 2);
    }

    int NoteLetter::mLetterToPitchClass(char letter) const {
        return mOrdinalClassToPitchClass(mLetterToOrdinalClass(letter));
    }

    int NoteLetter::mModulo7(int n) const {
        n = n % 7;
        return (n >= 0) ? n : n + 7;
    }

    bool operator==(const NoteLetter &lhs, const NoteLetter &rhs) {
        return lhs.GetOrdinalClass() == rhs.GetOrdinalClass();
    }

    bool operator!=(const NoteLetter &lhs, const NoteLetter &rhs) {
        return !(lhs == rhs);
    }

    bool operator==(const NoteLetter &lhs, char rhs) {
        return lhs.GetLetter() == rhs;
    }

    bool operator!=(const NoteLetter &lhs, char rhs) {
        return !(lhs == rhs);
    }

}