#include <iostream>

enum Items
{
    ITEMS_POTIONS,
    ITEMS_TORCHS,
    ITEMS_ARROWS,
    MAX_ITEMS
};

int countTotalItems(int items[])
{
    int totalItems = 0;

    for(int i = 0; i < MAX_ITEMS; ++i)
    {
        totalItems += items[i];
    }

    return totalItems;
}

int main()
{

    int items[MAX_ITEMS] {2, 5, 20};
    std::cout << "The player has " << countTotalItems(items) << " items in total.\n";

    return 0;
}
