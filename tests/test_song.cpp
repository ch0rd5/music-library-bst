#include <cassert>
#include <iostream>

#include "Song.h"

int main()
{
    Song song(
        "Come Together",
        "Abbey Road",
        "The Beatles",
        1969
    );

    assert(song.getTitle() == "Come Together");
    assert(song.getAlbum() == "Abbey Road");
    assert(song.getArtist() == "The Beatles");
    assert(song.getYear() == 1969);

    Song earlierTitle(
        "Bohemian Rhapsody",
        "A Night at the Opera",
        "Queen",
        1975
    );

    assert(earlierTitle < song);

    Song sameTitleDifferentArtist(
        "Come Together",
        "Come Together",
        "Gary Clark Jr.",
        2019
    );

    assert(sameTitleDifferentArtist < song);

    Song duplicateKey(
        "Come Together",
        "Different Album",
        "The Beatles",
        2000
    );

    assert(song == duplicateKey);

    std::cout << "Song tests passed.\n";

    return 0;
}