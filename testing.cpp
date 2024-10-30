#include "CompositeBuilding.h"
#include <gtest/gtest.h>
#include <iostream>

// Mock building class for testing
class MockBuilding : public Building {
public:
    void display() const override {
        std::cout << "MockBuilding Displayed\n";
    }
    Building* clone() const override {
        return new MockBuilding(*this);
    }
    double calculateTax() const override {
        return 100.0; // Fixed tax for testing
    }
};

// Fixture for CompositeBuilding tests
class CompositeBuildingTest : public ::testing::Test {
protected:
    CompositeBuilding composite;
    MockBuilding* building1;
    MockBuilding* building2;

    void SetUp() override {
        building1 = new MockBuilding();
        building2 = new MockBuilding();
    }

    void TearDown() override {
        delete building1;
        delete building2;
    }
};

TEST_F(CompositeBuildingTest, AddBuildingTest) {
    composite.addBuilding(building1);
    EXPECT_EQ(composite.getBuildingsCount(), 1);
}

TEST_F(CompositeBuildingTest, RemoveBuildingTest) {
    composite.addBuilding(building1);
    composite.addBuilding(building2);
    composite.removeBuilding(building1);
    EXPECT_EQ(composite.getBuildingsCount(), 1);
}

TEST_F(CompositeBuildingTest, DisplayTest) {
    composite.addBuilding(building1);
    composite.addBuilding(building2);
    testing::internal::CaptureStdout();
    composite.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("MockBuilding Displayed"), std::string::npos);
}

TEST_F(CompositeBuildingTest, CloneTest) {
    composite.addBuilding(building1);
    Building* clonedComposite = composite.clone();
    EXPECT_NE(clonedComposite, nullptr);
    delete clonedComposite;
}

TEST_F(CompositeBuildingTest, IncreasePopulationTest) {
    composite.increasePopulation(50);
    EXPECT_EQ(composite.getPopulation(), 50);
    composite.increasePopulation(20);
    EXPECT_EQ(composite.getPopulation(), 70);
}

TEST_F(CompositeBuildingTest, IncreaseJobsTest) {
    composite.increaseJobs(30);
    EXPECT_EQ(composite.getJobs(), 30);
    composite.increaseJobs(15);
    EXPECT_EQ(composite.getJobs(), 45);
}

TEST_F(CompositeBuildingTest, ExpandUtilitiesTest) {
    testing::internal::CaptureStdout();
    composite.expandUtilities();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Expanding utilities for CompositeBuilding"), std::string::npos);
}

TEST_F(CompositeBuildingTest, DisplayCityStateTest) {
    composite.increasePopulation(200);
    composite.increaseJobs(80);
    testing::internal::CaptureStdout();
    composite.displayCityState();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Total Population: 200"), std::string::npos);
    EXPECT_NE(output.find("Total Jobs: 80"), std::string::npos);
}

TEST_F(CompositeBuildingTest, MaintainBuildingsTest) {
    composite.addBuilding(building1);
    composite.addBuilding(building2);
    testing::internal::CaptureStdout();
    composite.maintainBuildings();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Performing maintenance for each building"), std::string::npos);
}

TEST_F(CompositeBuildingTest, TrackSatisfactionTest) {
    composite.addBuilding(building1);
    composite.addBuilding(building2);
    testing::internal::CaptureStdout();
    composite.trackSatisfaction();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Tracking building satisfaction"), std::string::npos);
}

TEST_F(CompositeBuildingTest, CalculateTaxRevenueTest) {
    composite.addBuilding(building1);
    composite.addBuilding(building2);
    double totalTax = composite.calculateTaxRevenue();
    EXPECT_EQ(totalTax, 200.0);  // Assuming each building tax is fixed at 100.0
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
