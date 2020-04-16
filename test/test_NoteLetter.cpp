#include <catch2/catch.hpp>

#include "../src/noteLetter.h"

TEST_CASE("NoteLetter", "[MusicTheoryTests]") {
    theory::NoteLetter Letter_C('C');
    theory::NoteLetter Letter_D('D');
    theory::NoteLetter Letter_E('E');
    theory::NoteLetter Letter_F('F');
    theory::NoteLetter Letter_G('G');
    theory::NoteLetter Letter_A('A');
    theory::NoteLetter Letter_B('B');

    SECTION("Constructor") {
        CHECK_NOTHROW(theory::NoteLetter('C'));
        CHECK_NOTHROW(theory::NoteLetter('D'));
        CHECK_NOTHROW(theory::NoteLetter('E'));
        CHECK_NOTHROW(theory::NoteLetter('F'));
        CHECK_NOTHROW(theory::NoteLetter('G'));
        CHECK_NOTHROW(theory::NoteLetter('A'));
        CHECK_NOTHROW(theory::NoteLetter('B'));

        CHECK_THROWS(theory::NoteLetter('a'));
        CHECK_THROWS(theory::NoteLetter('H'));
        CHECK_THROWS(theory::NoteLetter('!'));
    }

    SECTION("Addition") {
        CHECK(Letter_C + 0 == Letter_C);
        CHECK(Letter_C + 1 == Letter_D);
        CHECK(Letter_C + 2 == Letter_E);
        CHECK(Letter_C + 3 == Letter_F);
        CHECK(Letter_C + 4 == Letter_G);
        CHECK(Letter_C + 5 == Letter_A);
        CHECK(Letter_C + 6 == Letter_B);
        CHECK(Letter_C + 7 == Letter_C);
        CHECK(Letter_C + 8 == Letter_D);
        CHECK(Letter_C + 9 == Letter_E);
        CHECK(Letter_C + 10 == Letter_F);
        CHECK(Letter_C + 11 == Letter_G);
        CHECK(Letter_C + 12 == Letter_A);
        CHECK(Letter_C + 13 == Letter_B);
    }

    SECTION("Subtraction") {
        CHECK(Letter_C - 0 == Letter_C);
        CHECK(Letter_C - 1 == Letter_B);
        CHECK(Letter_C - 2 == Letter_A);
        CHECK(Letter_C - 3 == Letter_G);
        CHECK(Letter_C - 4 == Letter_F);
        CHECK(Letter_C - 5 == Letter_E);
        CHECK(Letter_C - 6 == Letter_D);
        CHECK(Letter_C - 7 == Letter_C);
        CHECK(Letter_C - 8 == Letter_B);
        CHECK(Letter_C - 9 == Letter_A);
        CHECK(Letter_C - 10 == Letter_G);
        CHECK(Letter_C - 11 == Letter_F);
        CHECK(Letter_C - 12 == Letter_E);
        CHECK(Letter_C - 13 == Letter_D);
    }

    SECTION("ToString()") {
        CHECK(Letter_C.ToString() == "C");
        CHECK(Letter_D.ToString() == "D");
        CHECK(Letter_E.ToString() == "E");
        CHECK(Letter_F.ToString() == "F");
        CHECK(Letter_G.ToString() == "G");
        CHECK(Letter_A.ToString() == "A");
        CHECK(Letter_B.ToString() == "B");
    }

    SECTION("GetLetter()") {
        CHECK(Letter_C.GetLetter() == 'C');
        CHECK(Letter_D.GetLetter() == 'D');
        CHECK(Letter_E.GetLetter() == 'E');
        CHECK(Letter_F.GetLetter() == 'F');
        CHECK(Letter_G.GetLetter() == 'G');
        CHECK(Letter_A.GetLetter() == 'A');
        CHECK(Letter_B.GetLetter() == 'B');
    }

    SECTION("GetOrdinalClass()") {
        CHECK(Letter_C.GetOrdinalClass() == 0);
        CHECK(Letter_D.GetOrdinalClass() == 1);
        CHECK(Letter_E.GetOrdinalClass() == 2);
        CHECK(Letter_F.GetOrdinalClass() == 3);
        CHECK(Letter_G.GetOrdinalClass() == 4);
        CHECK(Letter_A.GetOrdinalClass() == 5);
        CHECK(Letter_B.GetOrdinalClass() == 6);
    }

    SECTION("GetPitchClass()") {
        CHECK(Letter_C.GetPitchClass() == 0);
        CHECK(Letter_D.GetPitchClass() == 2);
        CHECK(Letter_E.GetPitchClass() == 4);
        CHECK(Letter_F.GetPitchClass() == 5);
        CHECK(Letter_G.GetPitchClass() == 7);
        CHECK(Letter_A.GetPitchClass() == 9);
        CHECK(Letter_B.GetPitchClass() == 11);
    }

}