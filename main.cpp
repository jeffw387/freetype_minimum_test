#include <ft2build.h>
#include FT_FREETYPE_H
#include <iostream>
#include <vector>

int main() {
  FT_Library library{};
  if (FT_Init_FreeType(&library)) {
    std::cout << "Error initializing FreeType.";
  }

  FT_Face face{};
  if (FT_New_Face(library, "Anke.ttf", 0, &face)) {
    std::cout << "Error creating face.";
  }
  
  if ((face->face_flags & FT_FACE_FLAG_SCALABLE) != FT_FACE_FLAG_SCALABLE) {
    std::cout << "Error: font is not scalable.";
  }

  if (FT_Set_Pixel_Sizes(face, 0, 50)) {
    std::cout << "Error setting font pixel size.";
  }

  if (FT_Load_Char(face, 'P', FT_LOAD_RENDER)) {
    std::cout << "Error loading or rendering glyph.";
  }
  auto bmp = face->glyph->bitmap;

  return 0;
}
