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


/*
Thing 1) Restaurant
5 properties:
    1) Number of Menu Items (int)
    2) Number of Staff Members (int)
    3) Number of Customers per Week (int)
    4) Amount of Profit per Week (double)
    5) Number of Hours Open per Week (int)
3 things it can do:
    1) prepare menu item meals
    2) make money
    3) pay taxes
*/
struct Restaurant
{
    //5 properties:
    //    - number of menu items
    int numMenuItems = 16;
    //    - number of staff members
    int numStaffMembers = 6;
    //    - number of customers per week
    int numCustomersPerWeek = 115;
    //    - amount of profit per week
    double amountProfitPerWeek = 1123.52;
    //    - number of hours open per week
    int numHoursOpenPerWeek = 60;
    //3 things it can do:
    //    - prepare menu item meals
    void prepareMenuMeal();
    //    - make money
    void makeMoney();
    //    - pay taxes
    void payTaxes();
};

/*
Thing 2) Drummer
5 properties:
    1) Number of Drums (int)
    2) Style of Music (std::string)
    3) Tempo of the Music (float)
    4) Number of Techniques Used (int)
    5) Duration of Play (float)
3 things it can do:
    1) make music
    2) apply drum set technique
    3) create consistent body motions
*/
struct Drummer
{
    //5 properties:
    //    - number of drums
    int numDrums = 10;
    //    - style of music
    std::string styleMusic = "Rock";
    //    - tempo of the music
    float tempoMusic = 116.5f;
    //    - number of techniques used
    int numTechniquesUsed = 5;
    //    - duration of play
    float durationPlay = 2.33f;
    //3 things it can do:
    //    - make music
    void makeMusic();
    //    - apply drum set technique
    void applyDrumSetTechnique();
    //    - create consistent body motions
    void createConsistentBodyMotions();
};

/*
Thing 3) Romantic Relationship
5 properties:
    1) Number of Good Times (int)
    2) Number of Bad Times (int)
    3) Match Compatability Scale (float)
    4) Sex Enjoyment Scale (float)
    5) Number of Dates (int)
3 things it can do:
    1) engage in conversation
    2) go on a date
    3) have sex
*/
struct RomanticRelationship
{
    //5 properties:
    //    - number of good times
    int numGoodTimes = 88;
    //    - number of bad times
    int numBadTimes = 11;
    //    - match compatability scale
    float matchCompatabilityScale = 43.21f;
    //    - sex enjoyment scale
    float sexEnjoymentScale = 92.33f;
    //    - number of dates
    int numbDates = 99;
  
    struct Romance
    {
        int kissingStyle = 4;
        int attachmentStyle = 2;
        double experienceLevel = 33.43;
        float communicationStyle = 12.5f;
        double loveAttunability = 553.54;
        float courtRomanticPartner(float extroversion, double presence = 22.55, float honesty = 22.3f);
        double engageEmotions(double intelligence, bool gender, float openness = 12.1f);
        double interpretBodyLanguage(float awareness = 38.9f, double knowledgeOfHumanBehavior = 67.32);
    };
      //3 things it can do:
    //    - engage in conversation       //function parameter modifies function work
    int engageInConversation(int setting); //returns more specific conversation type
    //    - go on a date
    void goOnDate(Romance romance);
    //    - have sex
    void haveSex(Romance romance);
    Romance growLove;
};

/*
Thing 4) Soccor Team
5 properties:
    1) Player Skill Level (double)
    2) Pool Selection Size (int)
    3) League (std::string)
    4) Amount of Funding (float)
    5) Number of Players (int)
3 things it can do:
    1) participate in a soccor tournament
    2) apply detailed game strategies
    3) develop motor function
*/
struct SoccorTeam
{
    //5 properties:
    //    - player skill level
    double playerSkillLevel = 228.12;
    //    - pool selection size
    int poolSelectionSize = 101;
    //    - league
    std::string league = "World Cup";
    //    - amount of funding
    float amountFunding = 22000;
    //    - number of players
    int numPlayers = 24;
    struct Soccor
    {
        std::string jerseyColor = "Gold";
        float cleatSize = 10.5f;
        char strategy = 'A';
        double abilityToBeATeamPlayer = 12.05;
        bool homeFieldAdvantage = true;
        float releaseEndorphins(double intensityOfActivity, float levelOfPleasure, float brainFunction = 84.3f);
        double buildFriendships(double abilityToInvestOneself = 33.21, float likeability = 56.7f);
        float boostOrganFunction(float hydration, double energy = 12.01, float durationOfFieldTime = 7.98f);
    };
      //3 things it can do:
    //    - participate in a soccor tournament       //function parameter informs function work
    double participateInSoccorTournament(double teamAbility); //returns best tournament possibility
    //    - apply detailed game strategies
    void applyDetailedGameStrategies(Soccor soccor);
    //    - develop motor function
    void developMotorFunction(Soccor soccor);
    Soccor buildExperiencePlayingSoccor;
};

/*
Thing 5) Appendages
5 properties:
    1) Number of Legs (int)
    2) Length of Trunk (float)
    3) Trunk Dexterity Level (double)
    4) Vibration Sensitivity (double)
    5) Tusk Length (float)
3 things it can do:
    1) communicate long distances through vibration
    2) defend their young with their tusks
    3) eat food with their trunk
*/
struct Appendages
{
    //5 properties:
    //    - number of legs
    int numLegs = 4;
    //    - length of trunk
    float lengthTrunk = 14.76f;
    //    - trunk dexterity level
    double trunkDexterityLevel = 555.42;
    //    - vibration sensitivity
    double vibrationSensitivity = 773.12;
    //    - tusk length
    float tuskLength = 12.13f;
    //3 things it can do:
    //    - communicate long distances through vibration
    void communicateLongDistancesThroughVibration();
    //    - defend their young with their tusks
    void defendYoungWithTusks();
    //    - eat food with their trunk
    void eatFoodWithTrunk();
};

/*
Thing 6) Personality
5 properties:
    1) Social Skill Level (float)
    2) Intelligence Level (double)
    3) Number of Strong Bonds with Other Elephants (int)
    4) Leadership Propensity Scale (float)
    5) Playfulness Scale (double)
3 things it can do:
    1) engage in play with other elephants
    2) lead the family to food and water
    3) respond to danger with fight or flight
*/
struct Personality
{
    //5 properties:
    //    - social skill level
    float socialSkillLevel = 54.1f;
    //    - intelligence level
    double intelligenceLevel = 84.11;
    //    - number of strong bonds with other elephants
    int numStrongBondsWithOtherElephants = 4;
    //    - leadership propensity scale
    float leadershipPropensityScale = 66.01f;
    //    - playfulness scale
    double playfulnessScale = 65.33;
    //3 things it can do:
    //    - engage in play with other elephants       //function parameter informs function work
    int engageInPlayWithOtherElephants(int numElephantsAvailable); //returns best play type available
    //    - lead the family to food and water
    void leadFamilyToFoodWater();
    //    - respond to danger with fight or flight
    void respondToDangerFightOrFlight();
};

/*
Thing 7) Behaviors
5 properties:
    1) Forage (std::string)
    2) Run Speed (int)
    3) Teaching Abilitiy Level (double)
    4) Learning Ability Level (double)
    5) Fight Strength (float)
3 things it can do:
    1) find specific plants that make up their diet
    2) teach vital survival behaviors to other elephants
    3) escape danger
*/
struct Behaviors
{
    //5 properties:
    //    - forage
    std::string forage = "Leaves";
    //    - run speed
    int runSpeed = 11;
    //    - teaching abilitiy level
    double teachingAbilityLevel = 90.09;
    //    - learning ability level
    double learningAbilityLevel = 77.88;
    //    - fight strength
    float fightStrength = 44.9f;
    //3 things it can do:
    //    - find specific plants that make up their diet
    void findSpecificPlantsThatMakeUpDiet();
    //    - teach vital survival behaviors to other elephants
    void teachVitalSurvivalBehaviorsToOtherElephants();
    //    - escape danger
    void escapeDanger();
};

/*
Thing 8) Strengths
5 properties:
    1) Body Size (char)
    2) Elemental Resistance (float)
    3) Level of Bond Strength (float)
    4) Communication Method (std::string)
    5) Sense Perception Level (double)
3 things it can do:
    1) maintain family health through family bonds
    2) commands a higher place on the food chain
    3) senses weather patterns to inform travel direction
*/
struct Strengths
{
    //5 properties:
    //    - body size
    char bodySize = 'A';
    //    - elemental resistance
    float elementalResistance = 667.5f;
    //    - level of bond strength
    float levelBondStrenth = 45.43f;
    //    - communication method
    std::string communicationMethod = "Modeling";
    //    - sense perception level
    double sensePerceptionLevel = 989.4;
    //3 things it can do:
    //    - maintain family health through family bonds
    void maintainFamilyHealthThroughFamilyBonds();
    //    - commands a higher place on the food chain
    void commandsHigherPlaceOnFoodChain();
    //    - senses weather patterns to inform travel direction
    void sensesWeatherPatternsToInformTravelDirection();
};

/*
Thing 9) Weaknesses
5 properties:
    1) Necessary Caloric Intake Amount (double)
    2) Likeliness to be Swept Away by a River (float)
    3) Number of Broken Tusks (int)
    4) Required Number of Learned Behaviors for Survival (int)
    5) Heat Tolerance Level (float)
3 things it can do:
    1) get swept away in a large river depending on size
    2) die of starvation
    3) pass out from overheating
*/
struct Weaknesses
{
    //5 properties:
    //    - necessary caloric intake amount
    double necessaryCaloricIntakeAmount = 2250.5;
    //    - likeliness to be swept away by a river
    float likelinessSweptAwayByRiver = 43.11f;
    //    - number of broken tusks
    int numBrokenTusks = 1;
    //    - required number of learned behaviors for survival
    int requiredNumberLearnedBehaviorsForSurvival = 15;
    //    - heat tolerance level
    float heatToleranceLevel = 84.6f;
    //3 things it can do:
    //    - get swept away in a large river depending on size      //function parameter modifies function work
    bool getSweptAwayInLargeRiverDependingOnSize(int sizeOfRiver); //returns if swept away by the river depending on your size and river size
    //    - die of starvation
    void dieOfStarvation();
    //    - pass out from overheating
    void passOutFromOverheating();
};

/*
Thing 10) Elephant
5 properties:
    1) Appendages
    2) Personality
    3) Behaviors
    4) Strengths
    5) Weaknesses
3 things it can do:
    1) raise young
    2) find food
    3) travel great distances
*/
struct Elephant
{
    //5 properties:
    //    - appendages
    Appendages appendages;
    //    - personality
    Personality personality;
    //    - behaviors
    Behaviors behaviors;
    //    - strengths
    Strengths strengths;
    //    - weaknesses
    Weaknesses weaknesses;
    //3 things it can do:
    //    - raise young
    float raiseYoung(float attentiveness, float parentingSkillLevel); //returns the ability to raise young
    //    - find food
    double findFood(double resourcefulness, bool foodAvailable); //returns the ability to find food
    //    - travel great distances
    float travelGreatDistances(float stamina, std::string nearestSourceOfFoodOrWater); //returns the ability to travel great distances
};

int main()
{
    std::cout << "good to go!" << std::endl;
}
