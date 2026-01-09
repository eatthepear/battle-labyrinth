#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#include "constants/battle_partner.h"

enum {
    TRAINER_NONE,
    TRAINER_PBL_NINA,
    TRAINER_PBL_MARIAM,
    TRAINER_PBL_OSCAR,
    TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER,
    TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER,
    TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER,
    TRAINER_PBL_POLLY,
    TRAINER_PBL_JEREMIAH,
    TRAINER_PBL_JOSH,
    TRAINER_PBL_HARPER,
    TRAINER_PBL_SHAUN_LEVIATHAN_2,
    TRAINER_PBL_JEMMA,
    TRAINER_PBL_PATRICK,
    TRAINER_PBL_BORIS,
    TRAINER_PBL_RICHARD,
    TRAINER_PBL_LUNA_AND_NORA,
    TRAINER_PBL_MELINDA_OPTIONAL_1,
    TRAINER_PBL_PHILLIPA_LEVIATHAN_3,
    TRAINER_PBL_HERMAN,
    TRAINER_PBL_RALPH,
    TRAINER_PBL_SANTIAGO,
    TRAINER_PBL_CHLOE_AND_KAYA,
    TRAINER_PBL_FRED,
    TRAINER_PBL_LUCIA,
    TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4,
    TRAINER_PBL_REBECCA,
    TRAINER_PBL_CAITLYN,
    TRAINER_PBL_SYLVIA,
    TRAINER_PBL_THERESA,
    TRAINER_PBL_ANTHONY,
    TRAINER_PBL_BILL_OPTIONAL_2,
    TRAINER_PBL_LIZA_LEVIATHAN_5,
    TRAINER_PBL_GILBERT,
    TRAINER_PBL_MELANIE,
    TRAINER_PBL_CONSTANCE,
    TRAINER_PBL_FRANK,
    TRAINER_PBL_DAISY,
    TRAINER_PBL_VIC_AND_DELL,
    TRAINER_PBL_MINA,
    TRAINER_PBL_ZACK,
    TRAINER_PBL_COBY,
    TRAINER_PBL_JAMAL,
    TRAINER_PBL_MILLIE,
    TRAINER_PBL_PAIGE,
    TRAINER_PBL_WHITAKER,
    TRAINER_PBL_TAMARA,
    TRAINER_PBL_JIMMY,
    TRAINER_PBL_EMILIANO,
    TRAINER_PBL_BETTY_LEVIATHAN_7,
    TRAINER_PBL_GALACTIC_GRUNT_8C_1,
    TRAINER_PBL_GALACTIC_GRUNT_8C_2,
    TRAINER_PBL_GALACTIC_GRUNT_8C_3,
    TRAINER_PBL_GALACTIC_GRUNT_8C_4,
    TRAINER_PBL_MARS_LEVIATHAN_8,
    TRAINER_PBL_COOPER,
    TRAINER_PBL_CARMINE,
    TRAINER_PBL_LUIS,
    TRAINER_PBL_DEMI,
    TRAINER_PBL_CALVIN,
    TRAINER_PBL_ARI,
    TRAINER_PBL_BERTHA,
    TRAINER_PBL_CASSANDRA,
    TRAINER_PBL_DOMINIC,
    TRAINER_PBL_ERICA,
    TRAINER_PBL_ALANA,
    TRAINER_PBL_DEWEY,
    TRAINER_PBL_ELIAS,
    TRAINER_PBL_PEARLIE,
    TRAINER_PBL_CONRAD,
    TRAINER_PBL_KYLE,
    TRAINER_PBL_JASMINE_LEVIATHAN_10,
    TRAINER_PBL_JEANETTE,
    TRAINER_PBL_JOEL,
    TRAINER_PBL_MARION,
    TRAINER_PBL_REGINA,
    TRAINER_PBL_NEWTON_LEVIATHAN_10,
    TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE,
    TRAINER_PBL_ESSENCE,
    TRAINER_PBL_DOLORES,
    TRAINER_PBL_GENIE,
    TRAINER_PBL_ABIGAIL,
    TRAINER_PBL_FEDERICO,
    TRAINER_PBL_ROMULUS,
    TRAINER_PBL_JULIE,
    TRAINER_PBL_HILDA,
    TRAINER_PBL_TREVOR,
    TRAINER_PBL_RUFUS,
    TRAINER_PBL_KINLEY,
    TRAINER_PBL_REID,
    TRAINER_PBL_DECLAN_LEVIATHAN_11,
    TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE,
    TRAINER_PBL_VIOLET,
    TRAINER_PBL_WANDA,
    TRAINER_PBL_AMBER_AND_KIM,
    TRAINER_PBL_JAN_AND_ERIN,
    TRAINER_PBL_STEVE,
    TRAINER_PBL_GOULD,
    TRAINER_PBL_MENDEL,
    TRAINER_PBL_DARWIN,
    TRAINER_PBL_JENNY_LEVIATHAN_11,
    TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE,
    TRAINER_PBL_BART,
    TRAINER_PBL_NIGEL,
    TRAINER_PBL_LOLA,
    TRAINER_PBL_CHARLIE,
    TRAINER_PBL_RANDOLPH,
    TRAINER_PBL_TODD,
    TRAINER_PBL_RUSSELL,
    TRAINER_PBL_OTIS,
    TRAINER_PBL_MIGUEL_LEVIATHAN_12,
    TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE,
    TRAINER_PBL_MIRAGE_LEVIATHAN_13,
    TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE,
    TRAINER_PBL_IONA,
    TRAINER_PBL_BERKE,
    TRAINER_PBL_TANISHA,
    TRAINER_PBL_ROBERT,
    TRAINER_PBL_CHRIS,
    TRAINER_PBL_ANGUS,
    TRAINER_PBL_LILY_LEVIATHAN_14,
    TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE,
    TRAINER_PBL_AXLE,
    TRAINER_PBL_RAFAEL,
    TRAINER_PBL_GEORGINA,
    TRAINER_PBL_MIA_LEVIATHAN_15,
    TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE,
    TRAINER_PBL_DORIS,
    TRAINER_PBL_HOMER,
    TRAINER_PBL_JOHN,
    TRAINER_PBL_GLENN,
    TRAINER_PBL_JAY,
    TRAINER_PBL_TYLER,
    TRAINER_PBL_TERRENCE,
    TRAINER_PBL_MARTY,
    TRAINER_PBL_KARI,
    TRAINER_PBL_ABRAHAM,
    TRAINER_PBL_MELINDA,
    TRAINER_PBL_EMILIO,
    TRAINER_PBL_REX,
    TRAINER_PBL_LOUIS,
    TRAINER_PBL_LEROY,
    TRAINER_PBL_ELTON,
    TRAINER_PBL_WILLIE,
    TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16,
    TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE,
    TRAINER_PBL_PIRATE_1,
    TRAINER_PBL_PIRATE_2,
    TRAINER_PBL_PIRATE_3,
    TRAINER_PBL_PIRATE_4,
    TRAINER_PBL_SHAWN,
    TRAINER_PBL_FERNANDO,
    TRAINER_PBL_KANE,
    TRAINER_PBL_KIRK,
    TRAINER_PBL_DALTON,
    TRAINER_PBL_LEE,
    TRAINER_PBL_BLANCHE,
    TRAINER_PBL_TROY,
    TRAINER_PBL_ABED,
    TRAINER_PBL_TROY_BRUTAL,
    TRAINER_PBL_ABED_BRUTAL,
    TRAINER_PBL_MIRAGE_LEVIATHAN_17,
    TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE,
    TRAINER_PBL_ANITA,
    TRAINER_PBL_DESIREE,
    TRAINER_PBL_HOWARD,
    TRAINER_PBL_ELOISE,
    TRAINER_PBL_ALLY_AND_EMMY,
    TRAINER_PBL_AMIR,
    TRAINER_PBL_GETHIN,
    TRAINER_PBL_BERNARD,
    TRAINER_PBL_ELLIE,
    TRAINER_PBL_RUSTY,
    TRAINER_PBL_CODY,
    TRAINER_PBL_LEWIS,
    TRAINER_PBL_CORNELIUS,
    TRAINER_PBL_INEZ_AND_EMMA,
    TRAINER_PBL_HELEN,
    TRAINER_PBL_WESLEY,
    TRAINER_PBL_ALFREDO,
    TRAINER_PBL_IAN,
    TRAINER_PBL_AUDREY,
    TRAINER_PBL_LEVIATHAN13,
    TRAINER_PBL_EDGARDO,
    TRAINER_PBL_JEAN,
    TRAINER_PBL_ROSE,
    TRAINER_PBL_JENNIFER,
    TRAINER_PBL_MATTHEW,
    TRAINER_PBL_KERRY,
    TRAINER_PBL_ANNIE,
    TRAINER_PBL_CHRISTI,
    TRAINER_PBL_SPENCER,
    TRAINER_PBL_HAYWOOD,
    TRAINER_PBL_MONROE,
    TRAINER_PBL_DAVID,
    TRAINER_PBL_DOMINIK,
    TRAINER_PBL_DOUGLAS,
    TRAINER_PBL_NADINE,
    TRAINER_PBL_SANDY,
    TRAINER_PBL_SHELDON,
    TRAINER_PBL_LEVIATHAN14,
    TRAINER_PBL_LEVIATHAN12_BRUTAL,
    TRAINER_PBL_LEVIATHAN13_BRUTAL,
    TRAINER_PBL_LEVIATHAN14_BRUTAL,
    TRAINER_PBL_LEVIATHAN12,
    TRAINER_POOL_ZONE_1,
    TRAINER_POOL_ZONE_2,
    TRAINER_POOL_ZONE_3,
    TRAINER_POOL_ZONE_4,
    TRAINER_POOL_ZONE_5,
    TRAINER_POOL_ZONE_6,
    TRAINER_POOL_ZONE_7_AND_8,
    TRAINER_POOL_ZONE_7_AND_8_GRUNTS,
    TRAINER_POOL_ZONE_9,
    TRAINER_POOL_ZONE_10,
    TRAINER_POOL_COLLECTOR,
    TRAINER_POOL_ZONE_11,
    TRAINER_POOL_ZONE_12,
    TRAINER_POOL_ZONE_13_AND_14,
    TRAINER_POOL_ZONE_13_AND_14_GRUNTS,
    TRAINER_POOL_ZONE_15,
};

#define TRAINER_SAWYER_1                    TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_1        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_2        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_3        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_4        TRAINER_NONE
#define TRAINER_GRUNT_SEAFLOOR_CAVERN_1     TRAINER_NONE
#define TRAINER_GRUNT_SEAFLOOR_CAVERN_2     TRAINER_NONE
#define TRAINER_GRUNT_SEAFLOOR_CAVERN_3     TRAINER_NONE
#define TRAINER_GABRIELLE_1                 TRAINER_NONE
#define TRAINER_GRUNT_PETALBURG_WOODS       TRAINER_NONE
#define TRAINER_MARCEL                      TRAINER_NONE
#define TRAINER_ALBERTO                     TRAINER_NONE
#define TRAINER_ED                          TRAINER_NONE
#define TRAINER_GRUNT_SEAFLOOR_CAVERN_4     TRAINER_NONE
#define TRAINER_DECLAN                      TRAINER_NONE
#define TRAINER_GRUNT_RUSTURF_TUNNEL        TRAINER_NONE
#define TRAINER_GRUNT_WEATHER_INST_1        TRAINER_NONE
#define TRAINER_GRUNT_WEATHER_INST_2        TRAINER_NONE
#define TRAINER_GRUNT_WEATHER_INST_3        TRAINER_NONE
#define TRAINER_GRUNT_MUSEUM_1              TRAINER_NONE
#define TRAINER_GRUNT_MUSEUM_2              TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_1        TRAINER_NONE
#define TRAINER_GRUNT_MT_PYRE_1             TRAINER_NONE
#define TRAINER_GRUNT_MT_PYRE_2             TRAINER_NONE
#define TRAINER_GRUNT_MT_PYRE_3             TRAINER_NONE
#define TRAINER_GRUNT_WEATHER_INST_4        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_5        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_6        TRAINER_NONE
#define TRAINER_FREDRICK                    TRAINER_NONE
#define TRAINER_MATT                        TRAINER_NONE
#define TRAINER_ZANDER                      TRAINER_NONE
#define TRAINER_SHELLY_WEATHER_INSTITUTE    TRAINER_NONE
#define TRAINER_SHELLY_SEAFLOOR_CAVERN      TRAINER_NONE
#define TRAINER_ARCHIE                      TRAINER_NONE
#define TRAINER_LEAH                        TRAINER_NONE
#define TRAINER_DAISY                       TRAINER_NONE
#define TRAINER_ROSE_1                      TRAINER_NONE
#define TRAINER_FELIX                       TRAINER_NONE
#define TRAINER_VIOLET                      TRAINER_NONE
#define TRAINER_ROSE_2                      TRAINER_NONE
#define TRAINER_ROSE_3                      TRAINER_NONE
#define TRAINER_ROSE_4                      TRAINER_NONE
#define TRAINER_ROSE_5                      TRAINER_NONE
#define TRAINER_DUSTY_1                     TRAINER_NONE
#define TRAINER_CHIP                        TRAINER_NONE
#define TRAINER_FOSTER                      TRAINER_NONE
#define TRAINER_DUSTY_2                     TRAINER_NONE
#define TRAINER_DUSTY_3                     TRAINER_NONE
#define TRAINER_DUSTY_4                     TRAINER_NONE
#define TRAINER_DUSTY_5                     TRAINER_NONE
#define TRAINER_GABBY_AND_TY_1              TRAINER_NONE
#define TRAINER_GABBY_AND_TY_2              TRAINER_NONE
#define TRAINER_GABBY_AND_TY_3              TRAINER_NONE
#define TRAINER_GABBY_AND_TY_4              TRAINER_NONE
#define TRAINER_GABBY_AND_TY_5              TRAINER_NONE
#define TRAINER_GABBY_AND_TY_6              TRAINER_NONE
#define TRAINER_LOLA_1                      TRAINER_NONE
#define TRAINER_AUSTINA                     TRAINER_NONE
#define TRAINER_GWEN                        TRAINER_NONE
#define TRAINER_LOLA_2                      TRAINER_NONE
#define TRAINER_LOLA_3                      TRAINER_NONE
#define TRAINER_LOLA_4                      TRAINER_NONE
#define TRAINER_LOLA_5                      TRAINER_NONE
#define TRAINER_RICKY_1                     TRAINER_NONE
#define TRAINER_SIMON                       TRAINER_NONE
#define TRAINER_CHARLIE                     TRAINER_NONE
#define TRAINER_RICKY_2                     TRAINER_NONE
#define TRAINER_RICKY_3                     TRAINER_NONE
#define TRAINER_RICKY_4                     TRAINER_NONE
#define TRAINER_RICKY_5                     TRAINER_NONE
#define TRAINER_RANDALL                     TRAINER_NONE
#define TRAINER_PARKER                      TRAINER_NONE
#define TRAINER_GEORGE                      TRAINER_NONE
#define TRAINER_BERKE                       TRAINER_NONE
#define TRAINER_BRAXTON                     TRAINER_NONE
#define TRAINER_VINCENT                     TRAINER_NONE
#define TRAINER_LEROY                       TRAINER_NONE
#define TRAINER_WILTON_1                    TRAINER_NONE
#define TRAINER_EDGAR                       TRAINER_NONE
#define TRAINER_ALBERT                      TRAINER_NONE
#define TRAINER_SAMUEL                      TRAINER_NONE
#define TRAINER_VITO                        TRAINER_NONE
#define TRAINER_OWEN                        TRAINER_NONE
#define TRAINER_WILTON_2                    TRAINER_NONE
#define TRAINER_WILTON_3                    TRAINER_NONE
#define TRAINER_WILTON_4                    TRAINER_NONE
#define TRAINER_WILTON_5                    TRAINER_NONE
#define TRAINER_WARREN                      TRAINER_NONE
#define TRAINER_MARY                        TRAINER_NONE
#define TRAINER_ALEXIA                      TRAINER_NONE
#define TRAINER_JODY                        TRAINER_NONE
#define TRAINER_WENDY                       TRAINER_NONE
#define TRAINER_KEIRA                       TRAINER_NONE
#define TRAINER_BROOKE_1                    TRAINER_NONE
#define TRAINER_JENNIFER                    TRAINER_NONE
#define TRAINER_HOPE                        TRAINER_NONE
#define TRAINER_SHANNON                     TRAINER_NONE
#define TRAINER_MICHELLE                    TRAINER_NONE
#define TRAINER_CAROLINE                    TRAINER_NONE
#define TRAINER_JULIE                       TRAINER_NONE
#define TRAINER_BROOKE_2                    TRAINER_NONE
#define TRAINER_BROOKE_3                    TRAINER_NONE
#define TRAINER_BROOKE_4                    TRAINER_NONE
#define TRAINER_BROOKE_5                    TRAINER_NONE
#define TRAINER_PATRICIA                    TRAINER_NONE
#define TRAINER_KINDRA                      TRAINER_NONE
#define TRAINER_TAMMY                       TRAINER_NONE
#define TRAINER_VALERIE_1                   TRAINER_NONE
#define TRAINER_TASHA                       TRAINER_NONE
#define TRAINER_VALERIE_2                   TRAINER_NONE
#define TRAINER_VALERIE_3                   TRAINER_NONE
#define TRAINER_VALERIE_4                   TRAINER_NONE
#define TRAINER_VALERIE_5                   TRAINER_NONE
#define TRAINER_CINDY_1                     TRAINER_NONE
#define TRAINER_DAPHNE                      TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_2        TRAINER_NONE
#define TRAINER_CINDY_2                     TRAINER_NONE
#define TRAINER_BRIANNA                     TRAINER_NONE
#define TRAINER_NAOMI                       TRAINER_NONE
#define TRAINER_CINDY_3                     TRAINER_NONE
#define TRAINER_CINDY_4                     TRAINER_NONE
#define TRAINER_CINDY_5                     TRAINER_NONE
#define TRAINER_CINDY_6                     TRAINER_NONE
#define TRAINER_MELISSA                     TRAINER_NONE
#define TRAINER_SHEILA                      TRAINER_NONE
#define TRAINER_SHIRLEY                     TRAINER_NONE
#define TRAINER_JESSICA_1                   TRAINER_NONE
#define TRAINER_CONNIE                      TRAINER_NONE
#define TRAINER_BRIDGET                     TRAINER_NONE
#define TRAINER_OLIVIA                      TRAINER_NONE
#define TRAINER_TIFFANY                     TRAINER_NONE
#define TRAINER_JESSICA_2                   TRAINER_NONE
#define TRAINER_JESSICA_3                   TRAINER_NONE
#define TRAINER_JESSICA_4                   TRAINER_NONE
#define TRAINER_JESSICA_5                   TRAINER_NONE
#define TRAINER_WINSTON_1                   TRAINER_NONE
#define TRAINER_MOLLIE                      TRAINER_NONE
#define TRAINER_GARRET                      TRAINER_NONE
#define TRAINER_WINSTON_2                   TRAINER_NONE
#define TRAINER_WINSTON_3                   TRAINER_NONE
#define TRAINER_WINSTON_4                   TRAINER_NONE
#define TRAINER_WINSTON_5                   TRAINER_NONE
#define TRAINER_STEVE_1                     TRAINER_NONE
#define TRAINER_THALIA_1                    TRAINER_NONE
#define TRAINER_MARK                        TRAINER_NONE
#define TRAINER_GRUNT_MT_CHIMNEY_1          TRAINER_NONE
#define TRAINER_STEVE_2                     TRAINER_NONE
#define TRAINER_STEVE_3                     TRAINER_NONE
#define TRAINER_STEVE_4                     TRAINER_NONE
#define TRAINER_STEVE_5                     TRAINER_NONE
#define TRAINER_LUIS                        TRAINER_NONE
#define TRAINER_DOMINIK                     TRAINER_NONE
#define TRAINER_DOUGLAS                     TRAINER_NONE
#define TRAINER_DARRIN                      TRAINER_NONE
#define TRAINER_TONY_1                      TRAINER_NONE
#define TRAINER_JEROME                      TRAINER_NONE
#define TRAINER_MATTHEW                     TRAINER_NONE
#define TRAINER_DAVID                       TRAINER_NONE
#define TRAINER_SPENCER                     TRAINER_NONE
#define TRAINER_ROLAND                      TRAINER_NONE
#define TRAINER_NOLEN                       TRAINER_NONE
#define TRAINER_STAN                        TRAINER_NONE
#define TRAINER_BARRY                       TRAINER_NONE
#define TRAINER_DEAN                        TRAINER_NONE
#define TRAINER_RODNEY                      TRAINER_NONE
#define TRAINER_RICHARD                     TRAINER_NONE
#define TRAINER_HERMAN                      TRAINER_NONE
#define TRAINER_SANTIAGO                    TRAINER_NONE
#define TRAINER_GILBERT                     TRAINER_NONE
#define TRAINER_FRANKLIN                    TRAINER_NONE
#define TRAINER_KEVIN                       TRAINER_NONE
#define TRAINER_JACK                        TRAINER_NONE
#define TRAINER_DUDLEY                      TRAINER_NONE
#define TRAINER_CHAD                        TRAINER_NONE
#define TRAINER_TONY_2                      TRAINER_NONE
#define TRAINER_TONY_3                      TRAINER_NONE
#define TRAINER_TONY_4                      TRAINER_NONE
#define TRAINER_TONY_5                      TRAINER_NONE
#define TRAINER_TAKAO                       TRAINER_NONE
#define TRAINER_HITOSHI                     TRAINER_NONE
#define TRAINER_KIYO                        TRAINER_NONE
#define TRAINER_KOICHI                      TRAINER_NONE
#define TRAINER_NOB_1                       TRAINER_NONE
#define TRAINER_NOB_2                       TRAINER_NONE
#define TRAINER_NOB_3                       TRAINER_NONE
#define TRAINER_NOB_4                       TRAINER_NONE
#define TRAINER_NOB_5                       TRAINER_NONE
#define TRAINER_YUJI                        TRAINER_NONE
#define TRAINER_DAISUKE                     TRAINER_NONE
#define TRAINER_ATSUSHI                     TRAINER_NONE
#define TRAINER_KIRK                        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_7        TRAINER_NONE
#define TRAINER_GRUNT_AQUA_HIDEOUT_8        TRAINER_NONE
#define TRAINER_SHAWN                       TRAINER_NONE
#define TRAINER_FERNANDO_1                  TRAINER_NONE
#define TRAINER_DALTON_1                    TRAINER_NONE
#define TRAINER_DALTON_2                    TRAINER_NONE
#define TRAINER_DALTON_3                    TRAINER_NONE
#define TRAINER_DALTON_4                    TRAINER_NONE
#define TRAINER_DALTON_5                    TRAINER_NONE
#define TRAINER_COLE                        TRAINER_NONE
#define TRAINER_JEFF                        TRAINER_NONE
#define TRAINER_AXLE                        TRAINER_NONE
#define TRAINER_JACE                        TRAINER_NONE
#define TRAINER_KEEGAN                      TRAINER_NONE
#define TRAINER_BERNIE_1                    TRAINER_NONE
#define TRAINER_BERNIE_2                    TRAINER_NONE
#define TRAINER_BERNIE_3                    TRAINER_NONE
#define TRAINER_BERNIE_4                    TRAINER_NONE
#define TRAINER_BERNIE_5                    TRAINER_NONE
#define TRAINER_DREW                        TRAINER_NONE
#define TRAINER_BEAU                        TRAINER_NONE
#define TRAINER_LARRY                       TRAINER_NONE
#define TRAINER_SHANE                       TRAINER_NONE
#define TRAINER_JUSTIN                      TRAINER_NONE
#define TRAINER_ETHAN_1                     TRAINER_NONE
#define TRAINER_AUTUMN                      TRAINER_NONE
#define TRAINER_TRAVIS                      TRAINER_NONE
#define TRAINER_ETHAN_2                     TRAINER_NONE
#define TRAINER_ETHAN_3                     TRAINER_NONE
#define TRAINER_ETHAN_4                     TRAINER_NONE
#define TRAINER_ETHAN_5                     TRAINER_NONE
#define TRAINER_BRENT                       TRAINER_NONE
#define TRAINER_DONALD                      TRAINER_NONE
#define TRAINER_TAYLOR                      TRAINER_NONE
#define TRAINER_JEFFREY_1                   TRAINER_NONE
#define TRAINER_DEREK                       TRAINER_NONE
#define TRAINER_JEFFREY_2                   TRAINER_NONE
#define TRAINER_JEFFREY_3                   TRAINER_NONE
#define TRAINER_JEFFREY_4                   TRAINER_NONE
#define TRAINER_JEFFREY_5                   TRAINER_NONE
#define TRAINER_EDWARD                      TRAINER_NONE
#define TRAINER_PRESTON                     TRAINER_NONE
#define TRAINER_VIRGIL                      TRAINER_NONE
#define TRAINER_BLAKE                       TRAINER_NONE
#define TRAINER_WILLIAM                     TRAINER_NONE
#define TRAINER_JOSHUA                      TRAINER_NONE
#define TRAINER_CAMERON_1                   TRAINER_NONE
#define TRAINER_CAMERON_2                   TRAINER_NONE
#define TRAINER_CAMERON_3                   TRAINER_NONE
#define TRAINER_CAMERON_4                   TRAINER_NONE
#define TRAINER_CAMERON_5                   TRAINER_NONE
#define TRAINER_JACLYN                      TRAINER_NONE
#define TRAINER_HANNAH                      TRAINER_NONE
#define TRAINER_SAMANTHA                    TRAINER_NONE
#define TRAINER_MAURA                       TRAINER_NONE
#define TRAINER_KAYLA                       TRAINER_NONE
#define TRAINER_ALEXIS                      TRAINER_NONE
#define TRAINER_JACKI_1                     TRAINER_NONE
#define TRAINER_JACKI_2                     TRAINER_NONE
#define TRAINER_JACKI_3                     TRAINER_NONE
#define TRAINER_JACKI_4                     TRAINER_NONE
#define TRAINER_JACKI_5                     TRAINER_NONE
#define TRAINER_WALTER_1                    TRAINER_NONE
#define TRAINER_MICAH                       TRAINER_NONE
#define TRAINER_THOMAS                      TRAINER_NONE
#define TRAINER_WALTER_2                    TRAINER_NONE
#define TRAINER_WALTER_3                    TRAINER_NONE
#define TRAINER_WALTER_4                    TRAINER_NONE
#define TRAINER_WALTER_5                    TRAINER_NONE
#define TRAINER_SIDNEY                      TRAINER_NONE
#define TRAINER_PHOEBE                      TRAINER_NONE
#define TRAINER_GLACIA                      TRAINER_NONE
#define TRAINER_DRAKE                       TRAINER_NONE
#define TRAINER_ROXANNE_1                   TRAINER_NONE
#define TRAINER_BRAWLY_1                    TRAINER_NONE
#define TRAINER_WATTSON_1                   TRAINER_NONE
#define TRAINER_FLANNERY_1                  TRAINER_NONE
#define TRAINER_NORMAN_1                    TRAINER_NONE
#define TRAINER_WINONA_1                    TRAINER_NONE
#define TRAINER_TATE_AND_LIZA_1             TRAINER_NONE
#define TRAINER_JUAN_1                      TRAINER_NONE
#define TRAINER_JERRY_1                     TRAINER_NONE
#define TRAINER_TED                         TRAINER_NONE
#define TRAINER_PAUL                        TRAINER_NONE
#define TRAINER_JERRY_2                     TRAINER_NONE
#define TRAINER_JERRY_3                     TRAINER_NONE
#define TRAINER_JERRY_4                     TRAINER_NONE
#define TRAINER_JERRY_5                     TRAINER_NONE
#define TRAINER_KAREN_1                     TRAINER_NONE
#define TRAINER_GEORGIA                     TRAINER_NONE
#define TRAINER_KAREN_2                     TRAINER_NONE
#define TRAINER_KAREN_3                     TRAINER_NONE
#define TRAINER_KAREN_4                     TRAINER_NONE
#define TRAINER_KAREN_5                     TRAINER_NONE
#define TRAINER_KATE_AND_JOY                TRAINER_NONE
#define TRAINER_ANNA_AND_MEG_1              TRAINER_NONE
#define TRAINER_ANNA_AND_MEG_2              TRAINER_NONE
#define TRAINER_ANNA_AND_MEG_3              TRAINER_NONE
#define TRAINER_ANNA_AND_MEG_4              TRAINER_NONE
#define TRAINER_ANNA_AND_MEG_5              TRAINER_NONE
#define TRAINER_VICTOR                      TRAINER_NONE
#define TRAINER_MIGUEL_1                    TRAINER_NONE
#define TRAINER_COLTON                      TRAINER_NONE
#define TRAINER_MIGUEL_2                    TRAINER_NONE
#define TRAINER_MIGUEL_3                    TRAINER_NONE
#define TRAINER_MIGUEL_4                    TRAINER_NONE
#define TRAINER_MIGUEL_5                    TRAINER_NONE
#define TRAINER_VICTORIA                    TRAINER_NONE
#define TRAINER_VANESSA                     TRAINER_NONE
#define TRAINER_BETHANY                     TRAINER_NONE
#define TRAINER_ISABEL_1                    TRAINER_NONE
#define TRAINER_ISABEL_2                    TRAINER_NONE
#define TRAINER_ISABEL_3                    TRAINER_NONE
#define TRAINER_ISABEL_4                    TRAINER_NONE
#define TRAINER_ISABEL_5                    TRAINER_NONE
#define TRAINER_TIMOTHY_1                   TRAINER_NONE
#define TRAINER_TIMOTHY_2                   TRAINER_NONE
#define TRAINER_TIMOTHY_3                   TRAINER_NONE
#define TRAINER_TIMOTHY_4                   TRAINER_NONE
#define TRAINER_TIMOTHY_5                   TRAINER_NONE
#define TRAINER_VICKY                       TRAINER_NONE
#define TRAINER_SHELBY_1                    TRAINER_NONE
#define TRAINER_SHELBY_2                    TRAINER_NONE
#define TRAINER_SHELBY_3                    TRAINER_NONE
#define TRAINER_SHELBY_4                    TRAINER_NONE
#define TRAINER_SHELBY_5                    TRAINER_NONE
#define TRAINER_CALVIN_1                    TRAINER_NONE
#define TRAINER_BILLY                       TRAINER_NONE
#define TRAINER_JOSH                        TRAINER_NONE
#define TRAINER_TOMMY                       TRAINER_NONE
#define TRAINER_JOEY                        TRAINER_NONE
#define TRAINER_BEN                         TRAINER_NONE
#define TRAINER_QUINCY                      TRAINER_NONE
#define TRAINER_KATELYNN                    TRAINER_NONE
#define TRAINER_JAYLEN                      TRAINER_NONE
#define TRAINER_DILLON                      TRAINER_NONE
#define TRAINER_CALVIN_2                    TRAINER_NONE
#define TRAINER_CALVIN_3                    TRAINER_NONE
#define TRAINER_CALVIN_4                    TRAINER_NONE
#define TRAINER_CALVIN_5                    TRAINER_NONE
#define TRAINER_EDDIE                       TRAINER_NONE
#define TRAINER_ALLEN                       TRAINER_NONE
#define TRAINER_TIMMY                       TRAINER_NONE
#define TRAINER_WALLACE                     TRAINER_NONE
#define TRAINER_ANDREW                      TRAINER_NONE
#define TRAINER_IVAN                        TRAINER_NONE
#define TRAINER_CLAUDE                      TRAINER_NONE
#define TRAINER_ELLIOT_1                    TRAINER_NONE
#define TRAINER_NED                         TRAINER_NONE
#define TRAINER_DALE                        TRAINER_NONE
#define TRAINER_NOLAN                       TRAINER_NONE
#define TRAINER_BARNY                       TRAINER_NONE
#define TRAINER_WADE                        TRAINER_NONE
#define TRAINER_CARTER                      TRAINER_NONE
#define TRAINER_ELLIOT_2                    TRAINER_NONE
#define TRAINER_ELLIOT_3                    TRAINER_NONE
#define TRAINER_ELLIOT_4                    TRAINER_NONE
#define TRAINER_ELLIOT_5                    TRAINER_NONE
#define TRAINER_RONALD                      TRAINER_NONE
#define TRAINER_JACOB                       TRAINER_NONE
#define TRAINER_ANTHONY                     TRAINER_NONE
#define TRAINER_BENJAMIN_1                  TRAINER_NONE
#define TRAINER_BENJAMIN_2                  TRAINER_NONE
#define TRAINER_BENJAMIN_3                  TRAINER_NONE
#define TRAINER_BENJAMIN_4                  TRAINER_NONE
#define TRAINER_BENJAMIN_5                  TRAINER_NONE
#define TRAINER_ABIGAIL_1                   TRAINER_NONE
#define TRAINER_JASMINE                     TRAINER_NONE
#define TRAINER_ABIGAIL_2                   TRAINER_NONE
#define TRAINER_ABIGAIL_3                   TRAINER_NONE
#define TRAINER_ABIGAIL_4                   TRAINER_NONE
#define TRAINER_ABIGAIL_5                   TRAINER_NONE
#define TRAINER_DYLAN_1                     TRAINER_NONE
#define TRAINER_DYLAN_2                     TRAINER_NONE
#define TRAINER_DYLAN_3                     TRAINER_NONE
#define TRAINER_DYLAN_4                     TRAINER_NONE
#define TRAINER_DYLAN_5                     TRAINER_NONE
#define TRAINER_MARIA_1                     TRAINER_NONE
#define TRAINER_MARIA_2                     TRAINER_NONE
#define TRAINER_MARIA_3                     TRAINER_NONE
#define TRAINER_MARIA_4                     TRAINER_NONE
#define TRAINER_MARIA_5                     TRAINER_NONE
#define TRAINER_CAMDEN                      TRAINER_NONE
#define TRAINER_DEMETRIUS                   TRAINER_NONE
#define TRAINER_ISAIAH_1                    TRAINER_NONE
#define TRAINER_PABLO_1                     TRAINER_NONE
#define TRAINER_CHASE                       TRAINER_NONE
#define TRAINER_ISAIAH_2                    TRAINER_NONE
#define TRAINER_ISAIAH_3                    TRAINER_NONE
#define TRAINER_ISAIAH_4                    TRAINER_NONE
#define TRAINER_ISAIAH_5                    TRAINER_NONE
#define TRAINER_ISOBEL                      TRAINER_NONE
#define TRAINER_DONNY                       TRAINER_NONE
#define TRAINER_TALIA                       TRAINER_NONE
#define TRAINER_KATELYN_1                   TRAINER_NONE
#define TRAINER_ALLISON                     TRAINER_NONE
#define TRAINER_KATELYN_2                   TRAINER_NONE
#define TRAINER_KATELYN_3                   TRAINER_NONE
#define TRAINER_KATELYN_4                   TRAINER_NONE
#define TRAINER_KATELYN_5                   TRAINER_NONE
#define TRAINER_NICOLAS_1                   TRAINER_NONE
#define TRAINER_NICOLAS_2                   TRAINER_NONE
#define TRAINER_NICOLAS_3                   TRAINER_NONE
#define TRAINER_NICOLAS_4                   TRAINER_NONE
#define TRAINER_NICOLAS_5                   TRAINER_NONE
#define TRAINER_AARON                       TRAINER_NONE
#define TRAINER_PERRY                       TRAINER_NONE
#define TRAINER_HUGH                        TRAINER_NONE
#define TRAINER_PHIL                        TRAINER_NONE
#define TRAINER_JARED                       TRAINER_NONE
#define TRAINER_HUMBERTO                    TRAINER_NONE
#define TRAINER_PRESLEY                     TRAINER_NONE
#define TRAINER_EDWARDO                     TRAINER_NONE
#define TRAINER_COLIN                       TRAINER_NONE
#define TRAINER_ROBERT_1                    TRAINER_NONE
#define TRAINER_BENNY                       TRAINER_NONE
#define TRAINER_CHESTER                     TRAINER_NONE
#define TRAINER_ROBERT_2                    TRAINER_NONE
#define TRAINER_ROBERT_3                    TRAINER_NONE
#define TRAINER_ROBERT_4                    TRAINER_NONE
#define TRAINER_ROBERT_5                    TRAINER_NONE
#define TRAINER_ALEX                        TRAINER_NONE
#define TRAINER_BECK                        TRAINER_NONE
#define TRAINER_YASU                        TRAINER_NONE
#define TRAINER_TAKASHI                     TRAINER_NONE
#define TRAINER_DIANNE                      TRAINER_NONE
#define TRAINER_JANI                        TRAINER_NONE
#define TRAINER_LAO_1                       TRAINER_NONE
#define TRAINER_LUNG                        TRAINER_NONE
#define TRAINER_LAO_2                       TRAINER_NONE
#define TRAINER_LAO_3                       TRAINER_NONE
#define TRAINER_LAO_4                       TRAINER_NONE
#define TRAINER_LAO_5                       TRAINER_NONE
#define TRAINER_JOCELYN                     TRAINER_NONE
#define TRAINER_LAURA                       TRAINER_NONE
#define TRAINER_CYNDY_1                     TRAINER_NONE
#define TRAINER_CORA                        TRAINER_NONE
#define TRAINER_PAULA                       TRAINER_NONE
#define TRAINER_CYNDY_2                     TRAINER_NONE
#define TRAINER_CYNDY_3                     TRAINER_NONE
#define TRAINER_CYNDY_4                     TRAINER_NONE
#define TRAINER_CYNDY_5                     TRAINER_NONE
#define TRAINER_MADELINE_1                  TRAINER_NONE
#define TRAINER_CLARISSA                    TRAINER_NONE
#define TRAINER_ANGELICA                    TRAINER_NONE
#define TRAINER_MADELINE_2                  TRAINER_NONE
#define TRAINER_MADELINE_3                  TRAINER_NONE
#define TRAINER_MADELINE_4                  TRAINER_NONE
#define TRAINER_MADELINE_5                  TRAINER_NONE
#define TRAINER_BEVERLY                     TRAINER_NONE
#define TRAINER_IMANI                       TRAINER_NONE
#define TRAINER_KYLA                        TRAINER_NONE
#define TRAINER_DENISE                      TRAINER_NONE
#define TRAINER_BETH                        TRAINER_NONE
#define TRAINER_TARA                        TRAINER_NONE
#define TRAINER_MISSY                       TRAINER_NONE
#define TRAINER_ALICE                       TRAINER_NONE
#define TRAINER_JENNY_1                     TRAINER_NONE
#define TRAINER_GRACE                       TRAINER_NONE
#define TRAINER_TANYA                       TRAINER_NONE
#define TRAINER_SHARON                      TRAINER_NONE
#define TRAINER_NIKKI                       TRAINER_NONE
#define TRAINER_BRENDA                      TRAINER_NONE
#define TRAINER_KATIE                       TRAINER_NONE
#define TRAINER_SUSIE                       TRAINER_NONE
#define TRAINER_KARA                        TRAINER_NONE
#define TRAINER_DANA                        TRAINER_NONE
#define TRAINER_SIENNA                      TRAINER_NONE
#define TRAINER_DEBRA                       TRAINER_NONE
#define TRAINER_LINDA                       TRAINER_NONE
#define TRAINER_KAYLEE                      TRAINER_NONE
#define TRAINER_LAUREL                      TRAINER_NONE
#define TRAINER_CARLEE                      TRAINER_NONE
#define TRAINER_JENNY_2                     TRAINER_NONE
#define TRAINER_JENNY_3                     TRAINER_NONE
#define TRAINER_JENNY_4                     TRAINER_NONE
#define TRAINER_JENNY_5                     TRAINER_NONE
#define TRAINER_HEIDI                       TRAINER_NONE
#define TRAINER_BECKY                       TRAINER_NONE
#define TRAINER_CAROL                       TRAINER_NONE
#define TRAINER_NANCY                       TRAINER_NONE
#define TRAINER_MARTHA                      TRAINER_NONE
#define TRAINER_DIANA_1                     TRAINER_NONE
#define TRAINER_CEDRIC                      TRAINER_NONE
#define TRAINER_IRENE                       TRAINER_NONE
#define TRAINER_DIANA_2                     TRAINER_NONE
#define TRAINER_DIANA_3                     TRAINER_NONE
#define TRAINER_DIANA_4                     TRAINER_NONE
#define TRAINER_DIANA_5                     TRAINER_NONE
#define TRAINER_AMY_AND_LIV_1               TRAINER_NONE
#define TRAINER_AMY_AND_LIV_2               TRAINER_NONE
#define TRAINER_GINA_AND_MIA_1              TRAINER_NONE
#define TRAINER_MIU_AND_YUKI                TRAINER_NONE
#define TRAINER_AMY_AND_LIV_3               TRAINER_NONE
#define TRAINER_GINA_AND_MIA_2              TRAINER_NONE
#define TRAINER_AMY_AND_LIV_4               TRAINER_NONE
#define TRAINER_AMY_AND_LIV_5               TRAINER_NONE
#define TRAINER_AMY_AND_LIV_6               TRAINER_NONE
#define TRAINER_HUEY                        TRAINER_NONE
#define TRAINER_EDMOND                      TRAINER_NONE
#define TRAINER_ERNEST_1                    TRAINER_NONE
#define TRAINER_DWAYNE                      TRAINER_NONE
#define TRAINER_PHILLIP                     TRAINER_NONE
#define TRAINER_LEONARD                     TRAINER_NONE
#define TRAINER_DUNCAN                      TRAINER_NONE
#define TRAINER_ERNEST_2                    TRAINER_NONE
#define TRAINER_ERNEST_3                    TRAINER_NONE
#define TRAINER_ERNEST_4                    TRAINER_NONE
#define TRAINER_ERNEST_5                    TRAINER_NONE
#define TRAINER_ELI                         TRAINER_NONE
#define TRAINER_ANNIKA                      TRAINER_NONE
#define TRAINER_JAZMYN                      TRAINER_NONE
#define TRAINER_JONAS                       TRAINER_NONE
#define TRAINER_KAYLEY                      TRAINER_NONE
#define TRAINER_AURON                       TRAINER_NONE
#define TRAINER_KELVIN                      TRAINER_NONE
#define TRAINER_MARLEY                      TRAINER_NONE
#define TRAINER_REYNA                       TRAINER_NONE
#define TRAINER_HUDSON                      TRAINER_NONE
#define TRAINER_CONOR                       TRAINER_NONE
#define TRAINER_EDWIN_1                     TRAINER_NONE
#define TRAINER_HECTOR                      TRAINER_NONE
#define TRAINER_TABITHA_MOSSDEEP            TRAINER_NONE
#define TRAINER_EDWIN_2                     TRAINER_NONE
#define TRAINER_EDWIN_3                     TRAINER_NONE
#define TRAINER_EDWIN_4                     TRAINER_NONE
#define TRAINER_EDWIN_5                     TRAINER_NONE
#define TRAINER_WALLY_VR_1                  TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_103_MUDKIP    TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_110_MUDKIP    TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_119_MUDKIP    TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_103_TREECKO   TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_110_TREECKO   TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_119_TREECKO   TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_103_TORCHIC   TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_110_TORCHIC   TRAINER_NONE
#define TRAINER_BRENDAN_ROUTE_119_TORCHIC   TRAINER_NONE
#define TRAINER_MAY_ROUTE_103_MUDKIP        TRAINER_NONE
#define TRAINER_MAY_ROUTE_110_MUDKIP        TRAINER_NONE
#define TRAINER_MAY_ROUTE_119_MUDKIP        TRAINER_NONE
#define TRAINER_MAY_ROUTE_103_TREECKO       TRAINER_NONE
#define TRAINER_MAY_ROUTE_110_TREECKO       TRAINER_NONE
#define TRAINER_MAY_ROUTE_119_TREECKO       TRAINER_NONE
#define TRAINER_MAY_ROUTE_103_TORCHIC       TRAINER_NONE
#define TRAINER_MAY_ROUTE_110_TORCHIC       TRAINER_NONE
#define TRAINER_MAY_ROUTE_119_TORCHIC       TRAINER_NONE
#define TRAINER_ISAAC_1                     TRAINER_NONE
#define TRAINER_DAVIS                       TRAINER_NONE
#define TRAINER_MITCHELL                    TRAINER_NONE
#define TRAINER_ISAAC_2                     TRAINER_NONE
#define TRAINER_ISAAC_3                     TRAINER_NONE
#define TRAINER_ISAAC_4                     TRAINER_NONE
#define TRAINER_ISAAC_5                     TRAINER_NONE
#define TRAINER_LYDIA_1                     TRAINER_NONE
#define TRAINER_HALLE                       TRAINER_NONE
#define TRAINER_GARRISON                    TRAINER_NONE
#define TRAINER_LYDIA_2                     TRAINER_NONE
#define TRAINER_LYDIA_3                     TRAINER_NONE
#define TRAINER_LYDIA_4                     TRAINER_NONE
#define TRAINER_LYDIA_5                     TRAINER_NONE
#define TRAINER_JACKSON_1                   TRAINER_NONE
#define TRAINER_LORENZO                     TRAINER_NONE
#define TRAINER_SEBASTIAN                   TRAINER_NONE
#define TRAINER_JACKSON_2                   TRAINER_NONE
#define TRAINER_JACKSON_3                   TRAINER_NONE
#define TRAINER_JACKSON_4                   TRAINER_NONE
#define TRAINER_JACKSON_5                   TRAINER_NONE
#define TRAINER_CATHERINE_1                 TRAINER_NONE
#define TRAINER_JENNA                       TRAINER_NONE
#define TRAINER_SOPHIA                      TRAINER_NONE
#define TRAINER_CATHERINE_2                 TRAINER_NONE
#define TRAINER_CATHERINE_3                 TRAINER_NONE
#define TRAINER_CATHERINE_4                 TRAINER_NONE
#define TRAINER_CATHERINE_5                 TRAINER_NONE
#define TRAINER_JULIO                       TRAINER_NONE
#define TRAINER_GRUNT_SEAFLOOR_CAVERN_5     TRAINER_NONE
#define TRAINER_GRUNT_UNUSED                TRAINER_NONE
#define TRAINER_GRUNT_MT_PYRE_4             TRAINER_NONE
#define TRAINER_GRUNT_JAGGED_PASS           TRAINER_NONE
#define TRAINER_MARC                        TRAINER_NONE
#define TRAINER_BRENDEN                     TRAINER_NONE
#define TRAINER_LILITH                      TRAINER_NONE
#define TRAINER_CRISTIAN                    TRAINER_NONE
#define TRAINER_SYLVIA                      TRAINER_NONE
#define TRAINER_LEONARDO                    TRAINER_NONE
#define TRAINER_ATHENA                      TRAINER_NONE
#define TRAINER_HARRISON                    TRAINER_NONE
#define TRAINER_GRUNT_MT_CHIMNEY_2          TRAINER_NONE
#define TRAINER_CLARENCE                    TRAINER_NONE
#define TRAINER_TERRY                       TRAINER_NONE
#define TRAINER_NATE                        TRAINER_NONE
#define TRAINER_KATHLEEN                    TRAINER_NONE
#define TRAINER_CLIFFORD                    TRAINER_NONE
#define TRAINER_NICHOLAS                    TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_3        TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_4        TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_5        TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_6        TRAINER_NONE
#define TRAINER_GRUNT_SPACE_CENTER_7        TRAINER_NONE
#define TRAINER_MACEY                       TRAINER_NONE
#define TRAINER_BRENDAN_RUSTBORO_TREECKO    TRAINER_NONE
#define TRAINER_BRENDAN_RUSTBORO_MUDKIP     TRAINER_NONE
#define TRAINER_PAXTON                      TRAINER_NONE
#define TRAINER_ISABELLA                    TRAINER_NONE
#define TRAINER_GRUNT_WEATHER_INST_5        TRAINER_NONE
#define TRAINER_TABITHA_MT_CHIMNEY          TRAINER_NONE
#define TRAINER_JONATHAN                    TRAINER_NONE
#define TRAINER_BRENDAN_RUSTBORO_TORCHIC    TRAINER_NONE
#define TRAINER_MAY_RUSTBORO_MUDKIP         TRAINER_NONE
#define TRAINER_MAXIE_MAGMA_HIDEOUT         TRAINER_NONE
#define TRAINER_MAXIE_MT_CHIMNEY            TRAINER_NONE
#define TRAINER_TIANA                       TRAINER_NONE
#define TRAINER_HALEY_1                     TRAINER_NONE
#define TRAINER_JANICE                      TRAINER_NONE
#define TRAINER_VIVI                        TRAINER_NONE
#define TRAINER_HALEY_2                     TRAINER_NONE
#define TRAINER_HALEY_3                     TRAINER_NONE
#define TRAINER_HALEY_4                     TRAINER_NONE
#define TRAINER_HALEY_5                     TRAINER_NONE
#define TRAINER_SALLY                       TRAINER_NONE
#define TRAINER_ROBIN                       TRAINER_NONE
#define TRAINER_ANDREA                      TRAINER_NONE
#define TRAINER_CRISSY                      TRAINER_NONE
#define TRAINER_RICK                        TRAINER_NONE
#define TRAINER_LYLE                        TRAINER_NONE
#define TRAINER_JOSE                        TRAINER_NONE
#define TRAINER_DOUG                        TRAINER_NONE
#define TRAINER_GREG                        TRAINER_NONE
#define TRAINER_KENT                        TRAINER_NONE
#define TRAINER_JAMES_1                     TRAINER_NONE
#define TRAINER_JAMES_2                     TRAINER_NONE
#define TRAINER_JAMES_3                     TRAINER_NONE
#define TRAINER_JAMES_4                     TRAINER_NONE
#define TRAINER_JAMES_5                     TRAINER_NONE
#define TRAINER_BRICE                       TRAINER_NONE
#define TRAINER_TRENT_1                     TRAINER_NONE
#define TRAINER_LENNY                       TRAINER_NONE
#define TRAINER_LUCAS_1                     TRAINER_NONE
#define TRAINER_ALAN                        TRAINER_NONE
#define TRAINER_CLARK                       TRAINER_NONE
#define TRAINER_ERIC                        TRAINER_NONE
#define TRAINER_LUCAS_2                     TRAINER_NONE
#define TRAINER_MIKE_1                      TRAINER_NONE
#define TRAINER_MIKE_2                      TRAINER_NONE
#define TRAINER_TRENT_2                     TRAINER_NONE
#define TRAINER_TRENT_3                     TRAINER_NONE
#define TRAINER_TRENT_4                     TRAINER_NONE
#define TRAINER_TRENT_5                     TRAINER_NONE
#define TRAINER_DEZ_AND_LUKE                TRAINER_NONE
#define TRAINER_LEA_AND_JED                 TRAINER_NONE
#define TRAINER_KIRA_AND_DAN_1              TRAINER_NONE
#define TRAINER_KIRA_AND_DAN_2              TRAINER_NONE
#define TRAINER_KIRA_AND_DAN_3              TRAINER_NONE
#define TRAINER_KIRA_AND_DAN_4              TRAINER_NONE
#define TRAINER_KIRA_AND_DAN_5              TRAINER_NONE
#define TRAINER_JOHANNA                     TRAINER_NONE
#define TRAINER_GERALD                      TRAINER_NONE
#define TRAINER_VIVIAN                      TRAINER_NONE
#define TRAINER_DANIELLE                    TRAINER_NONE
#define TRAINER_HIDEO                       TRAINER_NONE
#define TRAINER_KEIGO                       TRAINER_NONE
#define TRAINER_RILEY                       TRAINER_NONE
#define TRAINER_FLINT                       TRAINER_NONE
#define TRAINER_ASHLEY                      TRAINER_NONE
#define TRAINER_WALLY_MAUVILLE              TRAINER_NONE
#define TRAINER_WALLY_VR_2                  TRAINER_NONE
#define TRAINER_WALLY_VR_3                  TRAINER_NONE
#define TRAINER_WALLY_VR_4                  TRAINER_NONE
#define TRAINER_WALLY_VR_5                  TRAINER_NONE
#define TRAINER_BRENDAN_LILYCOVE_MUDKIP     TRAINER_NONE
#define TRAINER_BRENDAN_LILYCOVE_TREECKO    TRAINER_NONE
#define TRAINER_BRENDAN_LILYCOVE_TORCHIC    TRAINER_NONE
#define TRAINER_MAY_LILYCOVE_MUDKIP         TRAINER_NONE
#define TRAINER_MAY_LILYCOVE_TREECKO        TRAINER_NONE
#define TRAINER_MAY_LILYCOVE_TORCHIC        TRAINER_NONE
#define TRAINER_JONAH                       TRAINER_NONE
#define TRAINER_HENRY                       TRAINER_NONE
#define TRAINER_ROGER                       TRAINER_NONE
#define TRAINER_ALEXA                       TRAINER_NONE
#define TRAINER_RUBEN                       TRAINER_NONE
#define TRAINER_KOJI_1                      TRAINER_NONE
#define TRAINER_WAYNE                       TRAINER_NONE
#define TRAINER_AIDAN                       TRAINER_NONE
#define TRAINER_REED                        TRAINER_NONE
#define TRAINER_TISHA                       TRAINER_NONE
#define TRAINER_TORI_AND_TIA                TRAINER_NONE
#define TRAINER_KIM_AND_IRIS                TRAINER_NONE
#define TRAINER_TYRA_AND_IVY                TRAINER_NONE
#define TRAINER_MEL_AND_PAUL                TRAINER_NONE
#define TRAINER_JOHN_AND_JAY_1              TRAINER_NONE
#define TRAINER_JOHN_AND_JAY_2              TRAINER_NONE
#define TRAINER_JOHN_AND_JAY_3              TRAINER_NONE
#define TRAINER_JOHN_AND_JAY_4              TRAINER_NONE
#define TRAINER_JOHN_AND_JAY_5              TRAINER_NONE
#define TRAINER_RELI_AND_IAN                TRAINER_NONE
#define TRAINER_LILA_AND_ROY_1              TRAINER_NONE
#define TRAINER_LILA_AND_ROY_2              TRAINER_NONE
#define TRAINER_LILA_AND_ROY_3              TRAINER_NONE
#define TRAINER_LILA_AND_ROY_4              TRAINER_NONE
#define TRAINER_LILA_AND_ROY_5              TRAINER_NONE
#define TRAINER_LISA_AND_RAY                TRAINER_NONE
#define TRAINER_CHRIS                       TRAINER_NONE
#define TRAINER_DAWSON                      TRAINER_NONE
#define TRAINER_SARAH                       TRAINER_NONE
#define TRAINER_DARIAN                      TRAINER_NONE
#define TRAINER_HAILEY                      TRAINER_NONE
#define TRAINER_CHANDLER                    TRAINER_NONE
#define TRAINER_KALEB                       TRAINER_NONE
#define TRAINER_JOSEPH                      TRAINER_NONE
#define TRAINER_ALYSSA                      TRAINER_NONE
#define TRAINER_MARCOS                      TRAINER_NONE
#define TRAINER_RHETT                       TRAINER_NONE
#define TRAINER_TYRON                       TRAINER_NONE
#define TRAINER_CELINA                      TRAINER_NONE
#define TRAINER_BIANCA                      TRAINER_NONE
#define TRAINER_HAYDEN                      TRAINER_NONE
#define TRAINER_SOPHIE                      TRAINER_NONE
#define TRAINER_COBY                        TRAINER_NONE
#define TRAINER_LAWRENCE                    TRAINER_NONE
#define TRAINER_WYATT                       TRAINER_NONE
#define TRAINER_ANGELINA                    TRAINER_NONE
#define TRAINER_KAI                         TRAINER_NONE
#define TRAINER_CHARLOTTE                   TRAINER_NONE
#define TRAINER_DEANDRE                     TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_1       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_2       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_3       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_4       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_5       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_6       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_7       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_8       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_9       TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_10      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_11      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_12      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_13      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_14      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_15      TRAINER_NONE
#define TRAINER_GRUNT_MAGMA_HIDEOUT_16      TRAINER_NONE
#define TRAINER_TABITHA_MAGMA_HIDEOUT       TRAINER_NONE
#define TRAINER_DARCY                       TRAINER_NONE
#define TRAINER_MAXIE_MOSSDEEP              TRAINER_NONE
#define TRAINER_PETE                        TRAINER_NONE
#define TRAINER_ISABELLE                    TRAINER_NONE
#define TRAINER_ANDRES_1                    TRAINER_NONE
#define TRAINER_JOSUE                       TRAINER_NONE
#define TRAINER_CAMRON                      TRAINER_NONE
#define TRAINER_CORY_1                      TRAINER_NONE
#define TRAINER_CAROLINA                    TRAINER_NONE
#define TRAINER_ELIJAH                      TRAINER_NONE
#define TRAINER_CELIA                       TRAINER_NONE
#define TRAINER_BRYAN                       TRAINER_NONE
#define TRAINER_BRANDEN                     TRAINER_NONE
#define TRAINER_BRYANT                      TRAINER_NONE
#define TRAINER_SHAYLA                      TRAINER_NONE
#define TRAINER_KYRA                        TRAINER_NONE
#define TRAINER_JAIDEN                      TRAINER_NONE
#define TRAINER_ALIX                        TRAINER_NONE
#define TRAINER_HELENE                      TRAINER_NONE
#define TRAINER_MARLENE                     TRAINER_NONE
#define TRAINER_DEVAN                       TRAINER_NONE
#define TRAINER_JOHNSON                     TRAINER_NONE
#define TRAINER_MELINA                      TRAINER_NONE
#define TRAINER_BRANDI                      TRAINER_NONE
#define TRAINER_AISHA                       TRAINER_NONE
#define TRAINER_MAKAYLA                     TRAINER_NONE
#define TRAINER_FABIAN                      TRAINER_NONE
#define TRAINER_DAYTON                      TRAINER_NONE
#define TRAINER_RACHEL                      TRAINER_NONE
#define TRAINER_LEONEL                      TRAINER_NONE
#define TRAINER_CALLIE                      TRAINER_NONE
#define TRAINER_CALE                        TRAINER_NONE
#define TRAINER_MYLES                       TRAINER_NONE
#define TRAINER_PAT                         TRAINER_NONE
#define TRAINER_CRISTIN_1                   TRAINER_NONE
#define TRAINER_MAY_RUSTBORO_TREECKO        TRAINER_NONE
#define TRAINER_MAY_RUSTBORO_TORCHIC        TRAINER_NONE
#define TRAINER_ROXANNE_2                   TRAINER_NONE
#define TRAINER_ROXANNE_3                   TRAINER_NONE
#define TRAINER_ROXANNE_4                   TRAINER_NONE
#define TRAINER_ROXANNE_5                   TRAINER_NONE
#define TRAINER_BRAWLY_2                    TRAINER_NONE
#define TRAINER_BRAWLY_3                    TRAINER_NONE
#define TRAINER_BRAWLY_4                    TRAINER_NONE
#define TRAINER_BRAWLY_5                    TRAINER_NONE
#define TRAINER_WATTSON_2                   TRAINER_NONE
#define TRAINER_WATTSON_3                   TRAINER_NONE
#define TRAINER_WATTSON_4                   TRAINER_NONE
#define TRAINER_WATTSON_5                   TRAINER_NONE
#define TRAINER_FLANNERY_2                  TRAINER_NONE
#define TRAINER_FLANNERY_3                  TRAINER_NONE
#define TRAINER_FLANNERY_4                  TRAINER_NONE
#define TRAINER_FLANNERY_5                  TRAINER_NONE
#define TRAINER_NORMAN_2                    TRAINER_NONE
#define TRAINER_NORMAN_3                    TRAINER_NONE
#define TRAINER_NORMAN_4                    TRAINER_NONE
#define TRAINER_NORMAN_5                    TRAINER_NONE
#define TRAINER_WINONA_2                    TRAINER_NONE
#define TRAINER_WINONA_3                    TRAINER_NONE
#define TRAINER_WINONA_4                    TRAINER_NONE
#define TRAINER_WINONA_5                    TRAINER_NONE
#define TRAINER_TATE_AND_LIZA_2             TRAINER_NONE
#define TRAINER_TATE_AND_LIZA_3             TRAINER_NONE
#define TRAINER_TATE_AND_LIZA_4             TRAINER_NONE
#define TRAINER_TATE_AND_LIZA_5             TRAINER_NONE
#define TRAINER_JUAN_2                      TRAINER_NONE
#define TRAINER_JUAN_3                      TRAINER_NONE
#define TRAINER_JUAN_4                      TRAINER_NONE
#define TRAINER_JUAN_5                      TRAINER_NONE
#define TRAINER_ANGELO                      TRAINER_NONE
#define TRAINER_DARIUS                      TRAINER_NONE
#define TRAINER_STEVEN                      TRAINER_NONE
#define TRAINER_ANABEL                      TRAINER_NONE
#define TRAINER_TUCKER                      TRAINER_NONE
#define TRAINER_SPENSER                     TRAINER_NONE
#define TRAINER_GRETA                       TRAINER_NONE
#define TRAINER_NOLAND                      TRAINER_NONE
#define TRAINER_LUCY                        TRAINER_NONE
#define TRAINER_BRANDON                     TRAINER_NONE
#define TRAINER_ANDRES_2                    TRAINER_NONE
#define TRAINER_ANDRES_3                    TRAINER_NONE
#define TRAINER_ANDRES_4                    TRAINER_NONE
#define TRAINER_ANDRES_5                    TRAINER_NONE
#define TRAINER_CORY_2                      TRAINER_NONE
#define TRAINER_CORY_3                      TRAINER_NONE
#define TRAINER_CORY_4                      TRAINER_NONE
#define TRAINER_CORY_5                      TRAINER_NONE
#define TRAINER_PABLO_2                     TRAINER_NONE
#define TRAINER_PABLO_3                     TRAINER_NONE
#define TRAINER_PABLO_4                     TRAINER_NONE
#define TRAINER_PABLO_5                     TRAINER_NONE
#define TRAINER_KOJI_2                      TRAINER_NONE
#define TRAINER_KOJI_3                      TRAINER_NONE
#define TRAINER_KOJI_4                      TRAINER_NONE
#define TRAINER_KOJI_5                      TRAINER_NONE
#define TRAINER_CRISTIN_2                   TRAINER_NONE
#define TRAINER_CRISTIN_3                   TRAINER_NONE
#define TRAINER_CRISTIN_4                   TRAINER_NONE
#define TRAINER_CRISTIN_5                   TRAINER_NONE
#define TRAINER_FERNANDO_2                  TRAINER_NONE
#define TRAINER_FERNANDO_3                  TRAINER_NONE
#define TRAINER_FERNANDO_4                  TRAINER_NONE
#define TRAINER_FERNANDO_5                  TRAINER_NONE
#define TRAINER_SAWYER_2                    TRAINER_NONE
#define TRAINER_SAWYER_3                    TRAINER_NONE
#define TRAINER_SAWYER_4                    TRAINER_NONE
#define TRAINER_SAWYER_5                    TRAINER_NONE
#define TRAINER_GABRIELLE_2                 TRAINER_NONE
#define TRAINER_GABRIELLE_3                 TRAINER_NONE
#define TRAINER_GABRIELLE_4                 TRAINER_NONE
#define TRAINER_GABRIELLE_5                 TRAINER_NONE
#define TRAINER_THALIA_2                    TRAINER_NONE
#define TRAINER_THALIA_3                    TRAINER_NONE
#define TRAINER_THALIA_4                    TRAINER_NONE
#define TRAINER_THALIA_5                    TRAINER_NONE
#define TRAINER_MARIELA                     TRAINER_NONE
#define TRAINER_ALVARO                      TRAINER_NONE
#define TRAINER_EVERETT                     TRAINER_NONE
#define TRAINER_RED                         TRAINER_NONE
#define TRAINER_LEAF                        TRAINER_NONE
#define TRAINER_BRENDAN_PLACEHOLDER         TRAINER_NONE
#define TRAINER_MAY_PLACEHOLDER             TRAINER_NONE

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 9 additional trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define TRAINERS_COUNT                      855
#define MAX_TRAINERS_COUNT                  864
#define TRAINER_PARTNER(partner)           (MAX_TRAINERS_COUNT + partner)

#endif  // GUARD_CONSTANTS_OPPONENTS_H
