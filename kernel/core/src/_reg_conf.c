/*++
Copyright (c) Microsoft Corporation

Module Name: Sora control registers initial value table.

Abstract: The file includes Sora register configuration entry for specical purpose, 
          i.e, Tx, Rx.

History: 
          3/12/2009: Created by senxiang
--*/

#include "sora.h"

const __PHY_CHANNEL_SELECTOR    __gc_Phy_2dot4GHz_ChannelSelectors[] = 
{
    {1,0X00A03,0X33334,0X18225},
    {2,0X20A13,0X08884,0X18225},
    {3,0X30A13,0X1DDD4,0X18225},
    {4,0X00A13,0X33334,0X18225},
    {5,0X20A23,0X08884,0X18225},
    {6,0X30A23,0X1DDD4,0X18225},
    {7,0X00A23,0X33334,0X18225},
    {8,0X20A33,0X08884,0X18225},
    {9,0X30A33,0X1DDD4,0X18225},
    {10,0X00A33,0X33334,0X18225},
    {11,0X20A43,0X08884,0X18225},
    {12,0X30A43,0X1DDD4,0X18225},
    {13,0X00A43,0X33334,0X18225},
    {14,0X10A53,0X26664,0X18225}
};

const __PHY_CHANNEL_SELECTOR    __gc_Phy_5GHz_ChannelSelectors[] = 
{
    {36,0X30CF3,0X0CCC4,0X18235},
    {37,0X20CF3,0X19994,0X18235},
    {38,0X10CF3,0X26664,0X18235},
    {39,0X00CF3,0X33334,0X18235},
    {40,0X00D03,0X00004,0X18235},
    {41,0X30D03,0X0CCC4,0X18235},
    {42,0X20D03,0X19994,0X18235},
    {43,0X10D03,0X26664,0X18235},
    {44,0X00D03,0X33334,0X18235},
    {45,0X00D13,0X00004,0X18235},
    {46,0X30D13,0X0CCC4,0X18235},
    {47,0X20D13,0X19994,0X18235},
    {48,0X10D13,0X26664,0X18235},
    {49,0X00D13,0X33334,0X18235},
    {50,0X00D23,0X00004,0X18235},
    {51,0X30D23,0X0CCC4,0X18235},
    {52,0X20D23,0X19994,0X18235},
    {53,0X10D23,0X26664,0X18235},
    {54,0X00D23,0X33334,0X18235},
    {55,0X00D33,0X00004,0X18235},
    {56,0X30D33,0X0CCC4,0X18235},
    {57,0X20D33,0X19994,0X18235},
    {58,0X10D33,0X26664,0X18235},
    {59,0X00D33,0X33334,0X18235},
    {60,0X00D43,0X00004,0X18235},
    {61,0X30D43,0X0CCC4,0X18235},
    {62,0X20D43,0X19994,0X18235},
    {63,0X10D43,0X26664,0X18235},
    {64,0X00D43,0X330F4/*0X33334*/,0X18235}, // FOE
    {65,0X00D53,0X00004,0X18235},
    {66,0X30D53,0X0CCC4,0X18235},
    {67,0X20D53,0X19994,0X18235},
    {68,0X10D53,0X26664,0X18235},
    {69,0X00D53,0X33334,0X18235},
    {70,0X00D63,0X00004,0X18235},
    {71,0X30D63,0X0CCC4,0X18235},
    {72,0X20D63,0X19994,0X18235},
    {73,0X10D63,0X26664,0X18235},
    {74,0X00D63,0X33334,0X18235},
    {75,0X00D73,0X00004,0X18235},
    {76,0X30D73,0X0CCC4,0X18235},
    {77,0X20D73,0X19994,0X18235},
    {78,0X10D73,0X26664,0X18235},
    {79,0X00D73,0X33334,0X18235},
    {80,0X00D83,0X00004,0X18235},
    {81,0X30D83,0X0CCC4,0X18235},
    {82,0X20D83,0X19994,0X18235},
    {83,0X10D83,0X26664,0X18235},
    {84,0X00D83,0X33334,0X18235},
    {85,0X00D93,0X00004,0X18235},
    {86,0X30D93,0X0CCC4,0X18235},
    {87,0X20D93,0X19994,0X18235},
    {88,0X10D93,0X26664,0X18235},
    {89,0X00D93,0X33334,0X18235},
    {90,0X00DA3,0X00004,0X18235},
    {91,0X30DA3,0X0CCC4,0X18235},
    {92,0X20DA3,0X19994,0X18235},
    {93,0X10DA3,0X26664,0X18235},
    {94,0X00DA3,0X33334,0X18235},
    {95,0X00DB3,0X00004,0X18235},
    {96,0X30DB3,0X0CCC4,0X18235},
    {97,0X20DB3,0X19994,0X18235},
    {98,0X10DB3,0X26664,0X18235},
    {99,0X00DB3,0X33334,0X18235},
    {100,0X00DC3,0X00004,0X18235},
    {101,0X30DC3,0X0CCC4,0X18235},
    {102,0X20DC3,0X19994,0X18235},
    {103,0X10DC3,0X26664,0X18235},
    {104,0X00DC3,0X33334,0X18235},
    {105,0X00DD3,0X00004,0X18235},
    {106,0X30DD3,0X0CCC4,0X18235},
    {107,0X20DD3,0X19994,0X18235},
    {108,0X10DD3,0X26664,0X18235},
    {109,0X00DD3,0X33334,0X18235},
    {110,0X00DE3,0X00004,0X18235},
    {111,0X30DE3,0X0CCC4,0X18235},
    {112,0X20DE3,0X19994,0X18235},
    {113,0X10DE3,0X26664,0X18235},
    {114,0X00DE3,0X33334,0X18235},
    {115,0X00DF3,0X00004,0X18235},
    {116,0X30DF3,0X0CCC4,0X18235},
    {117,0X20DF3,0X19994,0X18235},
    {118,0X10DF3,0X26664,0X18235},
    {119,0X00DF3,0X33334,0X18235},
    {120,0X00E03,0X00004,0X18235},
    {121,0X30E03,0X0CCC4,0X18235},
    {122,0X20E03,0X19994,0X18235},
    {123,0X10E03,0X26664,0X18235},
    {124,0X00E03,0X33334,0X18235},
    {125,0X00E13,0X00004,0X18235},
    {126,0X30E13,0X0CCC4,0X18235},
    {127,0X20E13,0X19994,0X18235},
    {128,0X10E13,0X26664,0X18235},
    {129,0X00E13,0X33334,0X18235},
    {130,0X00E23,0X00004,0X18235},
    {131,0X30E23,0X0CCC4,0X18235},
    {132,0X20E23,0X19994,0X18235},
    {133,0X10E23,0X26664,0X18235},
    {134,0X00E23,0X33334,0X18235},
    {135,0X00E33,0X00004,0X18235},
    {136,0X30E33,0X0CCC4,0X18235},
    {137,0X20E33,0X19994,0X18235},
    {138,0X10E33,0X26664,0X18235},
    {139,0X00E33,0X33334,0X18235},
    {140,0X00E43,0X00004,0X18235},
    {141,0X30E43,0X0CCC4,0X18235},
    {142,0X20E43,0X19994,0X18235},
    {143,0X10E43,0X26664,0X18235},
    {144,0X00E43,0X33334,0X18235},
    {145,0X00E53,0X00004,0X18235},
    {146,0X30E53,0X0CCC4,0X18235},
    {147,0X20E53,0X19994,0X18235},
    {148,0X10E53,0X26664,0X18235},
    {149,0X00E53,0X33334,0X18235},
    {150,0X00E63,0X00004,0X18235},
    {151,0X30E63,0X0CCC4,0X18235},
    {152,0X20E63,0X19994,0X18235},
    {153,0X10E63,0X26664,0X18235},
    {154,0X00E63,0X33334,0X18235},
    {155,0X00E73,0X00004,0X18235},
    {156,0X30E73,0X0CCC4,0X18235},
    {157,0X20E73,0X19994,0X18235},
    {158,0X10E73,0X26664,0X18235},
    {159,0X00E73,0X33334,0X18235},
    {160,0X00D243,0X00004,0X18235},
    {161,0X30D243,0X0CCC4,0X18235}
};

