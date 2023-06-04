#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test initialization: "){

    CHECK_NOTHROW(MagicalContainer Magical);

    MagicalContainer container;
    CHECK(container.size() == 0);

    container.addElement(17);
    container.addElement(2);
    container.addElement(25);

    CHECK(container.size() == 3);

    container.removeElement(17);

    CHECK_THROWS_AS(container.removeElement(9), runtime_error);
    CHECK(container.size() == 2);
}


TEST_CASE("Test - add") {
    
    MagicalContainer magic;
    magic.addElement(42);
    magic.addElement(45);
    magic.addElement(7);
    magic.addElement(-12);
    magic.addElement(1);

    ///////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer::AscendingIterator ascendingIterator(magic);

    CHECK(*ascendingIterator == -12);
    ++ascendingIterator;
    CHECK(*ascendingIterator == 1);
    ++ascendingIterator;
    CHECK(*ascendingIterator == 7);
    ++ascendingIterator;
    CHECK(*ascendingIterator == 42);
    ++ascendingIterator;
    CHECK(*ascendingIterator == 45);
    ++ascendingIterator;
    CHECK(ascendingIterator == ascendingIterator.end());

    ///////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer::SideCrossIterator sideCrossIterator(magic);

    CHECK(*sideCrossIterator == -12);
    ++sideCrossIterator;
    CHECK(*sideCrossIterator == 45);
    ++sideCrossIterator;
    CHECK(*sideCrossIterator == 1);
    ++sideCrossIterator;
    CHECK(*sideCrossIterator == 42);
    ++sideCrossIterator;
    CHECK(*sideCrossIterator == 7);
    ++sideCrossIterator;
    CHECK(sideCrossIterator == sideCrossIterator.end());

    /////////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer prime;
    prime.addElement(2);
    prime.addElement(3);
    prime.addElement(4);
    prime.addElement(6);
    prime.addElement(7);
    prime.addElement(8);
    prime.addElement(9);

    MagicalContainer::PrimeIterator primeIterator(prime);

    CHECK(*primeIterator == 2);
    ++primeIterator;
    CHECK(*primeIterator == 3);
    ++primeIterator;
    CHECK(*primeIterator == 5);
    ++primeIterator;
    CHECK(*primeIterator == 7);
    ++primeIterator;
    CHECK(*primeIterator == 7);
    ++primeIterator;
    CHECK(primeIterator == primeIterator.end());
}

TEST_CASE("Test - addAfter") {
    
    MagicalContainer magic;
    magic.addElement(42);
    magic.addElement(45);
    magic.addElement(7);
    magic.addElement(47);

    MagicalContainer::AscendingIterator ascendingIterator(magic);
    CHECK(*ascendingIterator == 7);
    ++ascendingIterator;//
    CHECK(*ascendingIterator == 42);
    ++ascendingIterator;//
    magic.addElement(2);
    CHECK(*ascendingIterator == 45);
    ++ascendingIterator;//
    magic.addElement(46);
    CHECK(*ascendingIterator == 47);
    magic.addElement(90);
    ++ascendingIterator;//
    CHECK(*ascendingIterator == 90);
    ++ascendingIterator;// end
    magic.addElement(91);
    CHECK(ascendingIterator == ascendingIterator.end());
    CHECK_EQ(magic.size(), 8);

}


TEST_CASE("Test : operators") {
	MagicalContainer magic;
	magic.addElement(9);
	magic.addElement(4);
	magic.addElement(6);

	MagicalContainer::AscendingIterator ascendingIterator1(magic);
	MagicalContainer::AscendingIterator ascendingIterator2(magic);

    CHECK((ascendingIterator1 == ascendingIterator2));
    ++ascendingIterator1;
    CHECK((ascendingIterator1 != ascendingIterator2));
    CHECK((ascendingIterator1 > ascendingIterator2));
    CHECK_FALSE((ascendingIterator1 < ascendingIterator2));

	MagicalContainer::SideCrossIterator sideCrossIterator1(magic);
	MagicalContainer::SideCrossIterator sideCrossIterator2(magic);

    CHECK((sideCrossIterator1 == sideCrossIterator2));
    ++sideCrossIterator1;
    CHECK((sideCrossIterator1 != sideCrossIterator2));
    CHECK((sideCrossIterator1 > sideCrossIterator2));
    CHECK_FALSE((sideCrossIterator1 < sideCrossIterator2));

	MagicalContainer::PrimeIterator primeIterator1(magic);
	MagicalContainer::PrimeIterator primeIterator2(magic);

    CHECK((primeIterator1 == primeIterator2));
    ++primeIterator1;
    CHECK((primeIterator1 != primeIterator2));
    CHECK((primeIterator1 > primeIterator2));
    CHECK_FALSE((primeIterator1 < primeIterator2));
}


