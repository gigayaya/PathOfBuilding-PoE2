#pragma once

#include <cstddef>
#include <vector>

struct DecodedDds {
    int cellWidth = 0;
    int cellHeight = 0;
    int atlasWidth = 0;
    int atlasHeight = 0;
    int cols = 1; // cells per row when the atlas is laid out as a grid
    bool stackedAtlas = false;
    std::vector<unsigned char> rgba;
};

bool zstdDecompressBytes(const std::vector<unsigned char>& input, std::vector<unsigned char>& output);
bool decodeDdsBytes(const std::vector<unsigned char>& ddsData, DecodedDds& out);
