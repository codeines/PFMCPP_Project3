 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    struct Limb
    {
        int stepSize();
        void stepForward();
    };

    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    Limb leftFoot;
    Limb rightFoot;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    int timeRunning = distanceTraveled / howFast;
    std::cout << "Time Spent Running" << timeRunning;
}

int Person::Limb::stepSize()
{
    int size = 6;
    return size;
}

void Person::Limb::stepForward()
{
    std::cout << "Begin Running";
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */

struct Restaurant
{
    int numMenuItems = 16;
    int numStaffMembers = 6;
    int numCustomersPerWeek = 115;
    double amountProfitPerWeek = 1123.52;
    int numHoursOpenPerWeek = 60;

    void prepareMenuMeal();
    void makeMoney();
    void payTaxes();
};

void Restaurant::prepareMenuMeal()
{
     std::cout << "Lasagna";
}

void Restaurant::makeMoney()
{
     std::cout << "$4000";
}

void Restaurant::payTaxes()
{
     std::cout << "25% tax";
}

struct Drummer
{
    int numDrums = 10;
    std::string styleMusic = "Rock";
    float tempoMusic = 116.5f;
    int numTechniquesUsed = 5;
    float durationPlay = 23.3f;

    void makeMusic();
    void applyDrumSetTechnique();
    void createConsistentBodyMotions();
};

void Drummer::makeMusic()
{
     std::cout << "Play Drums";
}

void Drummer::applyDrumSetTechnique()
{
    std::cout << "Moeller Technqie";
}

void Drummer::createConsistentBodyMotions()
{
    std::cout << "Whipping Motion";
}

struct RomanticRelationship
{
    struct Romance
    {
        int kissingStyle = 4;
        int attachmentStyle = 2;
        double experienceLevel = 33.43;
        float communicationStyle = 12.5f;
        double loveAttunability = 553.51;
        std::string romanceMental = "";
        std::string romancePhysical = "";

        float courtRomanticPartner(float extroversion, float presence = 22.5f, float honesty = 22.3f);
        float engageEmotions(float intelligence, bool gender, float openness = 12.1f);
        float interpretBodyLanguage(float awareness = 38.9f, float knowledgeOfHumanBehavior = 67.3f);
    };

    int numGoodTimes = 88;
    int numBadTimes = 11;
    int matchCompatabilityScale = 43;
    int sexEnjoymentScale = 92;
    int numDates = 99;

    int engageInConversation(int setting);
    void goOnDate(Romance romance);
    void haveSex(Romance romance);

    Romance growLove;
};

int RomanticRelationship::engageInConversation(int setting)
{
    std::cout << "Type of Conversation" << (matchCompatabilityScale + setting);
    return 6;
}

void RomanticRelationship::goOnDate(Romance romance)
{
    std::cout << "Date Type" << (matchCompatabilityScale + numDates);
    std::cout << romance.romanceMental;
}

void RomanticRelationship::haveSex(Romance romance)
{
    std::cout << "Have Sex" << (sexEnjoymentScale + numGoodTimes);
    std::cout << romance.romancePhysical;
}

float RomanticRelationship::Romance::courtRomanticPartner(float extroversion, float presence, float honesty)
{
    std::cout << "Your Ability To Flirt" << (extroversion + presence + honesty);
    return 76.3f;
}

float RomanticRelationship::Romance::engageEmotions(float intelligence, bool gender, float openness)
{
    if(gender == true)
    {
        std::string genderType = "Male";
    }
    else
    {
        std::string genderType = "Female";
    }
    std::cout << "Your Ability To Engage Emotions" << (intelligence + openness);
    return 22.0f;
}

float RomanticRelationship::Romance::interpretBodyLanguage(float awareness, float knowledgeOfHumanBehavior)
{
    std::cout << "Your Ability To Interpret Body Language" << (awareness + knowledgeOfHumanBehavior);
    return 32.4f;
}

struct SoccorTeam
{
    struct Soccor
    {
        std::string jerseyColor = "Gold";
        float cleatSize = 10.5f;
        char strategy = 'A';
        double abilityToBeATeamPlayer = 12.05;
        bool homeFieldAdvantage = true;
        std::string soccorStrategy = "";
        std::string soccorDevelopment = "";

        float releaseEndorphins(float intensityOfActivity, float levelOfPleasure, float brainFunction = 84.3f);
        float buildFriendships(float abilityToInvestOneself = 33.2f, float likeability = 56.7f);
        float boostOrganFunction(float hydration, float energy = 12.0f, float durationOfFieldTime = 7.9f);
    };

    int playerSkillLevel = 228;
    int poolSelectionSize = 101;
    std::string league = "World Cup";
    int amountFunding = 22000;
    int numPlayers = 24;

    int participateInSoccorTournament(int teamAbility);
    void applyDetailedGameStrategies(Soccor soccor);
    void developMotorFunction(Soccor soccor);

    Soccor buildExperiencePlayingSoccor;
};

int SoccorTeam::participateInSoccorTournament(int teamAbility)
{
    std::cout << "The Highest Qualified Tournament Level" << (teamAbility + amountFunding);
    return 15;
}

void SoccorTeam::applyDetailedGameStrategies(Soccor soccor)
{
    std::cout << "Applied Detailed Game Strategies" << (playerSkillLevel + amountFunding);
    std::cout << soccor.soccorStrategy;
}

void SoccorTeam::developMotorFunction(Soccor soccor)
{
    std::cout << soccor.soccorDevelopment;
}

float SoccorTeam::Soccor::releaseEndorphins(float intensityOfActivity, float levelOfPleasure, float brainFunction)
{
    std::cout << "Your Endorphin Level" << (intensityOfActivity + levelOfPleasure + brainFunction);
    return 87.4f;
}

float SoccorTeam::Soccor::buildFriendships(float abilityToInvestOneself, float likeability)
{
    std::cout << "The Depth Of Connection In Your Friendships" << (abilityToInvestOneself + likeability);
    return 43.1f;
}

float SoccorTeam::Soccor::boostOrganFunction(float hydration, float energy, float durationOfFieldTime)
{
    std::cout << "Maximum Level Of Organ Function" << (hydration + energy + durationOfFieldTime);
    return 92.1f;
}

struct Appendages
{
    int numLegs = 4;
    float lengthTrunk = 14.7f;
    double trunkDexterityLevel = 555.42;
    double vibrationSensitivity = 773.12;
    float tuskLength = 12.1f;

    void communicateLongDistancesThroughVibration();
    void defendYoungWithTusks();
    void eatFoodWithTrunk();
};

void Appendages::communicateLongDistancesThroughVibration()
{
    std::cout << "Sense Vibration";
}

void Appendages::defendYoungWithTusks()
{
    std::cout << "Defense Stance";
}

void Appendages::eatFoodWithTrunk()
{
    std::cout << "Pull Leaves From The Tree";
}

struct Personality
{
    int socialSkillLevel = 54;
    double intelligenceLevel = 84.11;
    int numStrongBondsWithOtherElephants = 4;
    float leadershipPropensityScale = 66.0f;
    double playfulnessScale = 65.33;

    int engageInPlayWithOtherElephants(int numElephantsAvailable);
    void leadFamilyToFoodWater();
    void respondToDangerFightOrFlight();
};

int Personality::engageInPlayWithOtherElephants(int numElephantsAvailable)
{
    std::cout << "Style Of Play Possible" << (numElephantsAvailable + socialSkillLevel);
    return 14;
}

void Personality::leadFamilyToFoodWater()
{
    std::cout << "Begin Trail To Food And Water";
}

void Personality::respondToDangerFightOrFlight()
{
    std::cout << "Prepare For Action";
}

struct Behaviors
{
    std::string forage = "Leaves";
    int runSpeed = 11;
    double teachingAbilityLevel = 90.09;
    double learningAbilityLevel = 77.88;
    float fightStrength = 44.9f;

    void findSpecificPlantsThatMakeUpDiet();
    void teachVitalSurvivalBehaviorsToOtherElephants();
    void escapeDanger();
};

void Behaviors::findSpecificPlantsThatMakeUpDiet()
{
    std::cout << "Tree Matches Knowledge Archetype";
}

void Behaviors::teachVitalSurvivalBehaviorsToOtherElephants()
{
    std::cout << "How To Cross A River";
}

void Behaviors::escapeDanger()
{
    std::cout << "Run!";
}

struct Strengths
{
    char bodySize = 'A';
    float elementalResistance = 667.5f;
    float levelBondStrenth = 45.4f;
    std::string communicationMethod = "Modeling";
    double sensePerceptionLevel = 989.41;

    void maintainFamilyHealthThroughFamilyBonds();
    void commandsHigherPlaceOnFoodChain();
    void sensesWeatherPatternsToInformTravelDirection();
};

void Strengths::maintainFamilyHealthThroughFamilyBonds()
{
    std::cout << "Caress Family Member";
}

void Strengths::commandsHigherPlaceOnFoodChain()
{
    std::cout << "Only The Deadliest Predators Are A Threat";
}

void Strengths::sensesWeatherPatternsToInformTravelDirection()
{
    std::cout << "Storm Coming From The East";
}

struct Weaknesses
{
    double necessaryCaloricIntakeAmount = 2250.51;
    float likelinessSweptAwayByRiver = 43.1f;
    int numBrokenTusks = 1;
    int requiredNumberLearnedBehaviorsForSurvival = 15;
    float heatToleranceLevel = 84.6f;
    int bodySize;

    bool getSweptAwayInLargeRiverDependingOnSize(int sizeOfRiver);
    void dieOfStarvation();
    void passOutFromOverheating();
};

bool Weaknesses::getSweptAwayInLargeRiverDependingOnSize(int sizeOfRiver)
{
    if(sizeOfRiver - bodySize >= 40 == true)
    {
        std::cout << "Get Swept Away By River";
    }
    else
    {
        std::cout << "Cross River Safely";
    }
    return true;
}

void Weaknesses::dieOfStarvation()
{
    std::cout << "You Died";
}

void Weaknesses::passOutFromOverheating()
{
    std::cout << "You Passed Out";
}

struct Elephant
{
    Appendages appendages;
    Personality personality;
    Behaviors behaviors;
    Strengths strengths;
    Weaknesses weaknesses;
    double abilityToFindFood;
    double amountOfFoodAvailable;
    float travelTime;

    float raiseYoung(float attentiveness, float parentingSkillLevel); 
    double findFood(double resourcefulness, bool foodAvailable); 
    float travelGreatDistances(float stamina);
};

float Elephant::raiseYoung(float attentiveness, float parentingSkillLevel)
{
    std::cout << "Your Quality Of Parenting" << (attentiveness + parentingSkillLevel);
    return 26.5f;
}

double Elephant::findFood(double resourcefulness, bool foodAvailable)
{
    if(foodAvailable == true)
    {
       abilityToFindFood = resourcefulness + amountOfFoodAvailable;
    }
    else
    {
        abilityToFindFood = 00.00;
    }
    return 55.23;
}

float Elephant::travelGreatDistances(float stamina)
{
    std::cout << "How Far You Traveled" << (stamina + travelTime);
    return 78.6f;
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
