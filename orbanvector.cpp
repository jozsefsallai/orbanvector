#ifndef __ORBAN_VECTOR_H
#define __ORBAN_VECTOR_H

#include <vector>
#include <random>
#include <iostream>

namespace orban {
  template <class T, typename Allocator = std::allocator<T>>
  class vector : public std::vector<T, Allocator> {
    public:
      void push_back(const T& t) {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist(1, 10);

        int result = dist(rng);

        if (result != 10) {
          std::cout << "TUNJ EL INNEN TE SEMMIREKELLO MIGRANS, MIT AKARSZ ITT?? BRUSSZELBE TEDD A LABAD, NE MAGYAR FOLDRE!!!" << std::endl;
          return;
        }

        std::vector<T, Allocator>::push_back(t);
      }
  };
}

#endif // __ORBAN_VECTOR_H
