#include "Song.h"

Song::Song(const std::string &title,
           const std::string &album,
           const std::string &artist,
           int year)
    : title(title),
      album(album),
      artist(artist),
      year(year)
{
}

const std::string &Song::getTitle() const
{
    return title;
}

const std::string &Song::getAlbum() const
{
    return album;
}

const std::string &Song::getArtist() const
{
    return artist;
}

int Song::getYear() const
{
    return year;
}

bool Song::operator<(const Song &other) const
{
    if (title != other.title)
    {
        return title < other.title;
    }

    return artist < other.artist;
}

bool Song::operator==(const Song &other) const
{
    return title == other.title &&
           artist == other.artist;
}