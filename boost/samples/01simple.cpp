
/*
 * sample example from the boost get-started
 *
 * file:///C:/NXP/local/boost_1_62_0/more/getting_started/windows.html
 *
 * 3   Header-Only Libraries
 *
 * Nothing to Build?
 * i.e. Most Boost libraries are header-only: they consist entirely of header
 * files containing templates and inline functions, and require no
 * separately-compiled library binaries or special treatment when linking.
 *
 * 4   Build a Simple Program Using Boost
 *
 * To keep things simple, let's start by using a header-only library.
 *
 * Compile:
 *
 * g++ -I <boost install path> <filename>
 *
 * e.g.
 * g++ -I ../boost_1_71_0 01simple.cpp
 *
 */

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
  using namespace boost::lambda;
  typedef std::istream_iterator<int> in;

  std::for_each(
      in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
