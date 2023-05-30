/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();
    
    
    std::cout << "good to go!" << std::endl;
}
