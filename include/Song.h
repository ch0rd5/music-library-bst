#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
private:
    std::string title;
    std::string album;
    std::string artist;
    int year;

public:
    Song(const std::string& title,
         const std::string& album,
         const std::string& artist,
         int year);

    const std::string& getTitle() const;
    const std::string& getAlbum() const;
    const std::string& getArtist() const;
    int getYear() const;

    bool operator<(const Song& other) const;
    bool operator==(const Song& other) const;
};

#endif