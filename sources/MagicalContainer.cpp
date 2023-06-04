
#include "MagicalContainer.hpp"

namespace ariel {


    void MagicalContainer::addElement(int elem) {}

    void MagicalContainer::removeElement(int elem) {}

    int MagicalContainer::size() const {
        return 0;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& Magical) : magiContainer(Magical), counter(0) {}

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& MagicalContainerOther) : magiContainer(MagicalContainerOther.magiContainer), counter(MagicalContainerOther.counter) {}

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& MagicalContainerOther) {
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& otMagicalContainerher) const {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& MagicalContainerOther) const {
        return false;
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++() {
        return *this;
    }

    int MagicalContainer::AscendingIterator::operator*() const {
        return false;
    }


    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const {
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const {
        return *this;
    }

    MagicalContainer::AscendingIterator::~AscendingIterator() {}

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& container): magiContainer(container), counter(0), BoolRevers(false) {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& MagicalContainerOther) : magiContainer(MagicalContainerOther.magiContainer), counter(MagicalContainerOther.counter), BoolRevers(MagicalContainerOther.BoolRevers) {}

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& MagicalContainerOther) {
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& MagicalContainerOther) const {
        return false;
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
        return *this;
    }

    int MagicalContainer::SideCrossIterator::operator*() const {
        return 0;
    }


    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const {
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const {
        return *this;
    }

    MagicalContainer::SideCrossIterator::~SideCrossIterator() {}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& container) : magiContainer(container), counter(0) {}

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& MagicalContainerOther) : magiContainer(MagicalContainerOther.magiContainer), counter(MagicalContainerOther.counter) {}

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& MagicalContainerOther) {
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& MagicalContainerOther) const {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& MagicalContainerOther) const {
        return false;
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++() {
        return *this;
    }

    int MagicalContainer::PrimeIterator::operator*() const {
        return 0;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const {
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const {
        return *this;
    }

    MagicalContainer::PrimeIterator::~PrimeIterator() {}


}

