// app.hpp

#ifndef APP_HPP_INCLUDED
#define APP_HPP_INCLUDED

#include <lime.hpp>

namespace lime {
   namespace image {
      bool valid(const bitmap &bm)
      {
         return bm.data != nullptr;
      }

      bool inside(const bitmap &image, const int x, const int y)
      {
         // todo: checks if 'x' and 'y' is inside the bitmap.

         return false;
      }

      color get(const bitmap &image, const int x, const int y)
      {
         const color magenta{ 255, 0, 255, 255 };
         if (!valid(image) || !inside(image, x, y)) {
            return magenta;
         }

         // todo: calculate the correct index for 'x' and 'y' in the 
         //       bitmap and return requested pixel color. 

         return magenta;
      }

      void set(bitmap &image, const int x, const int y, const color c)
      {
         if (!valid(image) || !inside(image, x, y)) {
            return;
         }

         // todo: calculate the correct index for 'x' and 'y' in bitmap
         //       and set it to color 'c'
      }

      bool create(const int width, const int height, bitmap &image)
      {
         // todo: allocate the bitmap pixel data using 'width' and 'height'.

         return valid(image);
      }

      void clear(bitmap &image, const color c)
      {
         if (!valid(image)) {
            return;
         }

         // todo: set all bitmap pixels to color 'c'.
      }

      void blit(bitmap &dst, const point &pos, const bitmap &src, const rectangle &rect)
      {
         // todo: blit a portion of 'src' specified by 'rect' onto the destination
         //       'dst' at the specified point 'pos'.
         //
         //       make sure to validate 'rect' and determine correct portion of 
         //       the 'src' bitmap: 
         //        - x/y not negative
         //        - x/y is less than width and/or height
         //        - width/height is not zero or negative
         //        - etc..
      }
   } // !image
} // !lime

#endif // !APP_HPP_INCLUDED
