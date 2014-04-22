#include <Hello/src/Speaker.h>

#include <gtest/gtest.h>

using namespace Hello;
using namespace testing;

class SpeakerTests : Test {

    SpeakerTests() {

    }

    ~SpeakerTests() {

    }
};

TEST_F(SpeakerTests, GivenTheTestRunnerIsConfiguredIShouldBeAbletoRunTests) {
    EXPECT_TRUE(false);
}
