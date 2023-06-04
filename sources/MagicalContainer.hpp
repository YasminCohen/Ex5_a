#ifndef MY_MAGICALCONTAINER
#define MY_MAGICALCONTAINER

#include <vector>
#include <unordered_set>

using namespace std;

namespace ariel {

    class MagicalContainer {

        private:
            vector<int> vectorOfElements;
            unordered_set<int> setOfElement;

        public:

            MagicalContainer(){}
            MagicalContainer(const MagicalContainer& MagicalContainerOther) = default;
            MagicalContainer(MagicalContainer&& MagicalContainerOther) noexcept = default;
            MagicalContainer& operator=(const MagicalContainer& MagicalContainerOther) = default;
            MagicalContainer& operator=(MagicalContainer&& MagicalContainerOther) noexcept = default;
            ~MagicalContainer(){}

            void addElement(int elem);
            void removeElement(int elem);
            int size() const;


        class AscendingIterator{

            private:
                MagicalContainer& magiContainer;
                int counter;

            public:

                AscendingIterator(MagicalContainer& Magical);
                AscendingIterator(const AscendingIterator& MagicalContainerOther);
                AscendingIterator(AscendingIterator&& MagicalContainerOther) noexcept = default;
                AscendingIterator& operator=(AscendingIterator&& MagicalContainerOther) noexcept;
                AscendingIterator& operator=(const AscendingIterator& MagicalContainerOther);
                ~AscendingIterator();

                bool operator==(const AscendingIterator& MagicalContainerOther) const;
                bool operator!=(const AscendingIterator& MagicalContainerOther) const;
                bool operator>(const AscendingIterator& MagicalContainerOther) const;
                bool operator<(const AscendingIterator& MagicalContainerOther) const;
                AscendingIterator& operator++();
                int operator*() const;
                

                AscendingIterator begin() const;
                AscendingIterator end() const;
        };

        class SideCrossIterator{
            private:
                MagicalContainer& magiContainer;
                int counter;
                bool BoolRevers;

            public:
                SideCrossIterator(MagicalContainer& Magical);
                SideCrossIterator(const SideCrossIterator& MagicalContainerOther);
                SideCrossIterator(SideCrossIterator&& MagicalContainerOther) noexcept = default;
                SideCrossIterator& operator=(const SideCrossIterator& MagicalContainerOther);
                SideCrossIterator& operator=(SideCrossIterator&& MagicalContainerOther) noexcept;
                ~SideCrossIterator();

                bool operator==(const SideCrossIterator& MagicalContainerOther) const;
                bool operator!=(const SideCrossIterator& MagicalContainerOther) const;
                bool operator>(const SideCrossIterator& MagicalContainerOther) const;
                bool operator<(const SideCrossIterator& MagicalContainerOther) const;
                SideCrossIterator& operator++();
                int operator*() const;
                

                SideCrossIterator begin() const;
                SideCrossIterator end() const;
        };

        class PrimeIterator{

            private:
                MagicalContainer& magiContainer;
                int counter;

            public:
                PrimeIterator(MagicalContainer& Magical);
                PrimeIterator(const PrimeIterator& MagicalContainerOther);
                PrimeIterator(PrimeIterator&& MagicalContainerOther) noexcept = default;
                PrimeIterator& operator=(const PrimeIterator& MagicalContainerOther);
                PrimeIterator& operator=(PrimeIterator&& MagicalContainerOther) noexcept;
                ~PrimeIterator();
                
                bool operator==(const PrimeIterator& MagicalContainerOther) const;
                bool operator!=(const PrimeIterator& MagicalContainerOther) const;
                bool operator>(const PrimeIterator& MagicalContainerOther) const;
                bool operator<(const PrimeIterator& MagicalContainerOther) const;
                int operator*() const;
                PrimeIterator& operator++();
                
                PrimeIterator begin() const;
                PrimeIterator end() const;
        };

    };
}
#endif

