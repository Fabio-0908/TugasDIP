class ISortStrategy {
public:
    virtual void sort(std::vector<int>&) = 0;
};

class BubbleSort : public ISortStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::cout << "Sorting with BubbleSort...\n";
        // Simulasi: tidak implementasi penuh
    }
};

class QuickSort : public ISortStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::cout << "Sorting with QuickSort...\n";
        // Simulasi: tidak implementasi penuh
    }
};

class Sorter {
private:
    ISortStrategy* strategy;
public:
    Sorter(ISortStrategy* s) : strategy(s) {}
    void sortData(std::vector<int>& data) {
        strategy->sort(data);
    }
};
