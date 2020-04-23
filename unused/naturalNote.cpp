//
// Created by Aaron Mutchler on 4/21/20.
//

#include "naturalNote.h"

namespace theory {
    /** @brief Constructs a new NaturalNote object.
     *
     */
    NaturalNote::NaturalNote() {
        letter_ = {};
        ordinalClass_ = {};
        pitchClass_ = {};
    }

    /** @brief Constructs a new NaturalNote object based off a given letter.
     *
     * @param letter Must be a valid musical letter (C, D, E, F, G, A, or B).
     */
    NaturalNote::NaturalNote(char letter) {
        assignMembersFromLetter(letter);
    }

    /** @brief Sets this object equal to another NaturalNote object.
     *
     * @param rhs The NaturalNote object to which to set this object equal.
     * @return
     */
    NaturalNote &NaturalNote::operator=(const NaturalNote &rhs) {
        if (*this != rhs) {
            assignMembersFromLetter(rhs.letter_);
        }
        return *this;
    }

    /** @brief Sets this object equal to a NaturalNote object constructed from the given letter.
     *
     * @param rhs The letter with which to construct the other NaturalNote object.
     * @return
     */
    NaturalNote &NaturalNote::operator=(char letter) {
        if (letter_ != letter) {
            assignMembersFromLetter(letter);
        }
        return *this;
    }

    /** @brief Adds a given number of letter steps to this object.
     *
     * @param letterSteps The number of letter steps to add to this object.
     * @return
     */
    NaturalNote NaturalNote::operator+(int letterSteps) const {
        return NaturalNote(ordinalClassToLetter_(mod7_(ordinalClass_ + letterSteps)));
    }

    /** @brief Subtracts a given number of letter steps from this object.
     *
     * @param letterSteps The number of letter steps to subtract from this object.
     * @return
     */
    NaturalNote NaturalNote::operator-(int letterSteps) const {
        return *this + (letterSteps * -1);
    }

    /** @brief Sets this object equal to this object plus one letter step.
     *
     * @return
     */
    NaturalNote &NaturalNote::operator++(int) {
        *this = NaturalNote(ordinalClassToLetter_(mod7_(ordinalClass_ + 1)));
        return *this;
    }

    /** @brief Sets this object equal to this object minus one letter step.
     *
     * @return
     */
    NaturalNote &NaturalNote::operator--(int) {
        *this = NaturalNote(ordinalClassToLetter_(mod7_(ordinalClass_ - 1)));
        return *this;
    }

    /** @brief Gets the string value of this object.
     *
     * @return
     */
    std::string NaturalNote::toString() const {
        return std::string(1, letter_);
    }

    /** @brief Gets the interval distance between this object and the next NaturalNote object above it.
     *
     * @return
     */
    Interval NaturalNote::getDistanceToUpperNeighborNaturalNote() const {
        int semitones = mod12_(NaturalNote(ordinalClassToLetter_(mod7_(ordinalClass_ + 1))).pitchClass_ - pitchClass_);
        return Interval(semitones, 1);
    }

    /** @brief Gets the interval distance between this object and the next NaturalNote object below it.
     *
     * @return
     */
    Interval NaturalNote::getDistanceToLowerNeighborNaturalNote() const {
        int semitones = mod12_(pitchClass_ - NaturalNote(ordinalClassToLetter_(mod7_(ordinalClass_ - 1))).pitchClass_);
        return Interval(semitones, 1);
    }

    char NaturalNote::getLetter() const {
        return letter_;
    }

    int NaturalNote::getOrdinalClass() const{
        return ordinalClass_;
    }

    int NaturalNote::getPitchClass() const {
        return pitchClass_;
    }

    bool NaturalNote::isValid_(char letter) const {
        return (letter > 'A' && letter < 'G');
    }

    int NaturalNote::letterToOrdinalClass_(char letter) const {
        return mod7_(static_cast<int>(letter) - sASCII_A_ - 2);
    }

    int NaturalNote::ordinalClassToPitchClass_(int ordinalClass) const {
        return static_cast<int>((ordinalClass * sOrdinalToPitchConstant_) + 0.5);
    }

    int NaturalNote::pitchClassToOrdinalClass_(int pitchClass) const {
        return static_cast<int>((pitchClass * sPitchToOrdinalConstant_) + 0.5);
    }

    char NaturalNote::ordinalClassToLetter_(int ordinalClass) const {
        return static_cast<char>(mod7_(ordinalClass - 2) + sASCII_A_);
    }

    int NaturalNote::mod7_(int n) const {
        n = n % 7;
        return (n >= 0) ? n : n + 7;
    }
    int NaturalNote::mod12_(int n) const {
        n = n % 12;
        return (n >= 0) ? n : n + 12;
    }
}