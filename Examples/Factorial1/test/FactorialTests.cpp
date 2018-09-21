#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "..\..\..\Include\catch.hpp"
#include "..\src\Factorial.h"
//  CHECK( Factorial(0)==1); Con CHECK si falla lo notifica y sigue con los siguientes tests. REQUIRE para el proceso 
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0)==1);
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}