/*
 * pHashTest.cpp
 *
 *  Created on: 25 Jul 2013
 *      Author: nicholas
 */

#include <gtest/gtest.h>
#include <iostream>
#include "../../include/hash/ImagePHash.hpp"
#include <GraphicsMagick/Magick++.h>


using namespace Magick;

TEST(ImagePHashTest, hashImage) {
	ImagePHash iph(32,9);
	long pHash = iph.getLongHash("src/test/hash/testImage.jpg");
	ASSERT_EQ(-2059292927385518081,pHash);
}

int main(int argc, char **argv) {
	 BasicConfigurator config;
	 config.configure();
::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


