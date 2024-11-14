#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}

TEST_CASE("2 - Testing render_num_vector - more than 3 values"){
	vector<int> nums = {1, 3, 7, 4};
	int numint = nums.size();
	int expected = 4;
	CHECK(numint == expected);
}

TEST_CASE("3 - Testing render_num_vector - empty vector"){
	vector<int> nums = {};
	string numstr = render_num_vector(nums);
	string expected = "";
	CHECK(numstr == expected);
}
