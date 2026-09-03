#include <cassert>
#include <iostream>

#include "BST.h"
#include "Song.h"

int main()
{
    BST<Song> tree;

    assert(tree.empty());
    assert(tree.size() == 0);

    Song song(
        "Come Together",
        "Abbey Road",
        "The Beatles",
        1969
    );

    assert(tree.insert(song));
    assert(!tree.empty());
    assert(tree.size() == 1);
    assert(tree.contains(song));

    std::cout << "BST tests passed.\n";

    return 0;
}