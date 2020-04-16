#include <catch2/catch.hpp>

#include "../src/accidental.h"

TEST_CASE("Accidental", "[MusicTheoryTests]") {
    theory::Accidental DoubleFLat(theory::AccidentalEnum::doubleFlat);
    theory::Accidental Flat(theory::AccidentalEnum::flat);
    theory::Accidental Natural(theory::AccidentalEnum::natural);
    theory::Accidental Sharp(theory::AccidentalEnum::sharp);
    theory::Accidental DoubleSharp(theory::AccidentalEnum::doubleSharp);

    SECTION("ToString()") {
        CHECK(DoubleFLat.ToString() == "double flat");
        CHECK(Flat.ToString() == "flat");
        CHECK(Natural.ToString() == "natural");
        CHECK(Sharp.ToString() == "sharp");
        CHECK(DoubleSharp.ToString() == "double sharp");
    }

    SECTION("GetPitchClassModifier()") {
        CHECK(DoubleFLat.GetPitchClassModifier() == -2);
        CHECK(Flat.GetPitchClassModifier() == -1);
        CHECK(Natural.GetPitchClassModifier() == 0);
        CHECK(Sharp.GetPitchClassModifier() == 1);
        CHECK(DoubleSharp.GetPitchClassModifier() == 2);
    }
}