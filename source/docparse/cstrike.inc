{
  "functions": [
    {
      "name": "CS_OnBuyCommand",
      "docStart": 6186,
      "docEnd": 6417,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "weapon",
          "decl": "const char[] weapon"
        }
      ]
    },
    {
      "name": "CS_OnCSWeaponDrop",
      "docStart": 6487,
      "docEnd": 6690,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "weaponIndex",
          "decl": "int weaponIndex"
        }
      ]
    },
    {
      "name": "CS_OnGetWeaponPrice",
      "docStart": 6758,
      "docEnd": 7239,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "weapon",
          "decl": "const char[] weapon"
        },
        {
          "type": "int&",
          "name": "price",
          "decl": "int& price"
        }
      ]
    },
    {
      "name": "CS_OnTerminateRound",
      "docStart": 7325,
      "docEnd": 7673,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "float&",
          "name": "delay",
          "decl": "float& delay"
        },
        {
          "type": "CSRoundEndReason&",
          "name": "reason",
          "decl": "CSRoundEndReason& reason"
        }
      ]
    },
    {
      "name": "CS_RespawnPlayer",
      "docStart": 7754,
      "docEnd": 7879,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CS_SwitchTeam",
      "docStart": 7926,
      "docEnd": 8090,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "team",
          "decl": "int team"
        }
      ]
    },
    {
      "name": "CS_DropWeapon",
      "docStart": 8144,
      "docEnd": 8535,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "weaponIndex",
          "decl": "int weaponIndex"
        },
        {
          "type": "bool",
          "name": "toss",
          "decl": "bool toss"
        },
        {
          "type": "bool",
          "name": "blockhook",
          "decl": "bool blockhook"
        }
      ]
    },
    {
      "name": "CS_TerminateRound",
      "docStart": 8631,
      "docEnd": 8914,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        },
        {
          "type": "CSRoundEndReason",
          "name": "reason",
          "decl": "CSRoundEndReason reason"
        },
        {
          "type": "bool",
          "name": "blockhook",
          "decl": "bool blockhook"
        }
      ]
    },
    {
      "name": "CS_GetTranslatedWeaponAlias",
      "docStart": 9013,
      "docEnd": 9327,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "alias",
          "decl": "const char[] alias"
        },
        {
          "type": "char[]",
          "name": "weapon",
          "decl": "char[] weapon"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "CS_GetWeaponPrice",
      "docStart": 9419,
      "docEnd": 9898,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "CSWeaponID",
          "name": "id",
          "decl": "CSWeaponID id"
        },
        {
          "type": "bool",
          "name": "defaultprice",
          "decl": "bool defaultprice"
        }
      ]
    },
    {
      "name": "CS_GetClientClanTag",
      "docStart": 9988,
      "docEnd": 10254,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "CS_SetClientClanTag",
      "docStart": 10328,
      "docEnd": 10500,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "tag",
          "decl": "const char[] tag"
        }
      ]
    },
    {
      "name": "CS_GetTeamScore",
      "docStart": 10568,
      "docEnd": 10733,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "team",
          "decl": "int team"
        }
      ]
    },
    {
      "name": "CS_SetTeamScore",
      "docStart": 10776,
      "docEnd": 11128,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "team",
          "decl": "int team"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "CS_GetMVPCount",
      "docStart": 11183,
      "docEnd": 11364,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CS_SetMVPCount",
      "docStart": 11408,
      "docEnd": 11589,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "CS_GetClientContributionScore",
      "docStart": 11645,
      "docEnd": 11831,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CS_SetClientContributionScore",
      "docStart": 11890,
      "docEnd": 12085,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "CS_GetClientAssists",
      "docStart": 12156,
      "docEnd": 12335,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CS_SetClientAssists",
      "docStart": 12384,
      "docEnd": 12572,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "CS_AliasToWeaponID",
      "docStart": 12633,
      "docEnd": 12903,
      "kind": "native",
      "returnType": "CSWeaponID",
      "arguments": [
        {
          "type": "const char[]",
          "name": "alias",
          "decl": "const char[] alias"
        }
      ]
    },
    {
      "name": "CS_WeaponIDToAlias",
      "docStart": 12966,
      "docEnd": 13221,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "CSWeaponID",
          "name": "weaponID",
          "decl": "CSWeaponID weaponID"
        },
        {
          "type": "char[]",
          "name": "destination",
          "decl": "char[] destination"
        },
        {
          "type": "int",
          "name": "len",
          "decl": "int len"
        }
      ]
    },
    {
      "name": "CS_IsValidWeaponID",
      "docStart": 13307,
      "docEnd": 13640,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "CSWeaponID",
          "name": "id",
          "decl": "CSWeaponID id"
        }
      ]
    },
    {
      "name": "CS_UpdateClientModel",
      "docStart": 13692,
      "docEnd": 13849,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CS_ItemDefIndexToID",
      "docStart": 13900,
      "docEnd": 14254,
      "kind": "native",
      "returnType": "CSWeaponID",
      "arguments": [
        {
          "type": "int",
          "name": "iDefIndex",
          "decl": "int iDefIndex"
        }
      ]
    },
    {
      "name": "CS_WeaponIDToItemDefIndex",
      "docStart": 14313,
      "docEnd": 14649,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "CSWeaponID",
          "name": "id",
          "decl": "CSWeaponID id"
        }
      ]
    },
    {
      "name": "__ext_cstrike_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "CSRoundEndReason",
      "entries": [
        {
          "name": "CSRoundEnd_TargetBombed",
          "docStart": 2242,
          "docEnd": 2277
        },
        {
          "name": "CSRoundEnd_VIPEscaped",
          "docStart": 2319,
          "docEnd": 2372
        },
        {
          "name": "CSRoundEnd_VIPKilled",
          "docStart": 2414,
          "docEnd": 2473
        },
        {
          "name": "CSRoundEnd_TerroristsEscaped",
          "docStart": 2515,
          "docEnd": 2551
        },
        {
          "name": "CSRoundEnd_CTStoppedEscape",
          "docStart": 2593,
          "docEnd": 2661
        },
        {
          "name": "CSRoundEnd_TerroristsStopped",
          "docStart": 2703,
          "docEnd": 2757
        },
        {
          "name": "CSRoundEnd_BombDefused",
          "docStart": 2799,
          "docEnd": 2833
        },
        {
          "name": "CSRoundEnd_CTWin",
          "docStart": 2875,
          "docEnd": 2906
        },
        {
          "name": "CSRoundEnd_TerroristWin",
          "docStart": 2948,
          "docEnd": 2971
        },
        {
          "name": "CSRoundEnd_Draw",
          "docStart": 3013,
          "docEnd": 3032
        },
        {
          "name": "CSRoundEnd_HostagesRescued",
          "docStart": 3074,
          "docEnd": 3113
        },
        {
          "name": "CSRoundEnd_TargetSaved",
          "docStart": 3155,
          "docEnd": 3185
        },
        {
          "name": "CSRoundEnd_HostagesNotRescued",
          "docStart": 3227,
          "docEnd": 3266
        },
        {
          "name": "CSRoundEnd_TerroristsNotEscaped",
          "docStart": 3308,
          "docEnd": 3344
        },
        {
          "name": "CSRoundEnd_VIPNotEscaped",
          "docStart": 3386,
          "docEnd": 3439
        },
        {
          "name": "CSRoundEnd_GameStart",
          "docStart": 3481,
          "docEnd": 3505
        },
        {
          "name": "CSRoundEnd_TerroristsSurrender",
          "docStart": 3511,
          "docEnd": 3543
        },
        {
          "name": "CSRoundEnd_CTSurrender",
          "docStart": 3655,
          "docEnd": 3676
        },
        {
          "name": "CSRoundEnd_TerroristsPlanted",
          "docStart": 3713,
          "docEnd": 3748
        },
        {
          "name": "CSRoundEnd_CTsReachedHostage",
          "docStart": 3785,
          "docEnd": 3816
        }
      ]
    },
    {
      "name": "CSWeaponID",
      "entries": [
        {
          "name": "CSWeapon_NONE"
        },
        {
          "name": "CSWeapon_P228"
        },
        {
          "name": "CSWeapon_GLOCK"
        },
        {
          "name": "CSWeapon_SCOUT"
        },
        {
          "name": "CSWeapon_HEGRENADE"
        },
        {
          "name": "CSWeapon_XM1014"
        },
        {
          "name": "CSWeapon_C4"
        },
        {
          "name": "CSWeapon_MAC10"
        },
        {
          "name": "CSWeapon_AUG"
        },
        {
          "name": "CSWeapon_SMOKEGRENADE"
        },
        {
          "name": "CSWeapon_ELITE"
        },
        {
          "name": "CSWeapon_FIVESEVEN"
        },
        {
          "name": "CSWeapon_UMP45"
        },
        {
          "name": "CSWeapon_SG550"
        },
        {
          "name": "CSWeapon_GALIL"
        },
        {
          "name": "CSWeapon_FAMAS"
        },
        {
          "name": "CSWeapon_USP"
        },
        {
          "name": "CSWeapon_AWP"
        },
        {
          "name": "CSWeapon_MP5NAVY"
        },
        {
          "name": "CSWeapon_M249"
        },
        {
          "name": "CSWeapon_M3"
        },
        {
          "name": "CSWeapon_M4A1"
        },
        {
          "name": "CSWeapon_TMP"
        },
        {
          "name": "CSWeapon_G3SG1"
        },
        {
          "name": "CSWeapon_FLASHBANG"
        },
        {
          "name": "CSWeapon_DEAGLE"
        },
        {
          "name": "CSWeapon_SG552"
        },
        {
          "name": "CSWeapon_AK47"
        },
        {
          "name": "CSWeapon_KNIFE"
        },
        {
          "name": "CSWeapon_P90"
        },
        {
          "name": "CSWeapon_SHIELD"
        },
        {
          "name": "CSWeapon_KEVLAR"
        },
        {
          "name": "CSWeapon_ASSAULTSUIT"
        },
        {
          "name": "CSWeapon_NIGHTVISION",
          "docStart": 4475,
          "docEnd": 4505
        },
        {
          "name": "CSWeapon_GALILAR"
        },
        {
          "name": "CSWeapon_BIZON"
        },
        {
          "name": "CSWeapon_MAG7"
        },
        {
          "name": "CSWeapon_NEGEV"
        },
        {
          "name": "CSWeapon_SAWEDOFF"
        },
        {
          "name": "CSWeapon_TEC9"
        },
        {
          "name": "CSWeapon_TASER"
        },
        {
          "name": "CSWeapon_HKP2000"
        },
        {
          "name": "CSWeapon_MP7"
        },
        {
          "name": "CSWeapon_MP9"
        },
        {
          "name": "CSWeapon_NOVA"
        },
        {
          "name": "CSWeapon_P250"
        },
        {
          "name": "CSWeapon_SCAR17"
        },
        {
          "name": "CSWeapon_SCAR20"
        },
        {
          "name": "CSWeapon_SG556"
        },
        {
          "name": "CSWeapon_SSG08"
        },
        {
          "name": "CSWeapon_KNIFE_GG"
        },
        {
          "name": "CSWeapon_MOLOTOV"
        },
        {
          "name": "CSWeapon_DECOY"
        },
        {
          "name": "CSWeapon_INCGRENADE"
        },
        {
          "name": "CSWeapon_DEFUSER"
        },
        {
          "name": "CSWeapon_HEAVYASSAULTSUIT"
        },
        {
          "name": "CSWeapon_CUTTERS",
          "docStart": 4928,
          "docEnd": 4983
        },
        {
          "name": "CSWeapon_HEALTHSHOT"
        },
        {
          "name": "CSWeapon_KNIFE_T"
        },
        {
          "name": "CSWeapon_M4A1_SILENCER"
        },
        {
          "name": "CSWeapon_USP_SILENCER"
        },
        {
          "name": "CSWeapon_CZ75A"
        },
        {
          "name": "CSWeapon_REVOLVER"
        },
        {
          "name": "CSWeapon_TAGGRENADE"
        },
        {
          "name": "CSWeapon_FISTS"
        },
        {
          "name": "CSWeapon_BREACHCHARGE"
        },
        {
          "name": "CSWeapon_TABLET"
        },
        {
          "name": "CSWeapon_MELEE"
        },
        {
          "name": "CSWeapon_AXE"
        },
        {
          "name": "CSWeapon_HAMMER"
        },
        {
          "name": "CSWeapon_SPANNER"
        },
        {
          "name": "CSWeapon_KNIFE_GHOST"
        },
        {
          "name": "CSWeapon_FIREBOMB"
        },
        {
          "name": "CSWeapon_DIVERSION"
        },
        {
          "name": "CSWeapon_FRAGGRENADE"
        },
        {
          "name": "CSWeapon_MAX_WEAPONS_NO_KNIFES",
          "docStart": 5515,
          "docEnd": 5602
        },
        {
          "name": "CSWeapon_BAYONET"
        },
        {
          "name": "CSWeapon_KNIFE_FLIP"
        },
        {
          "name": "CSWeapon_KNIFE_GUT"
        },
        {
          "name": "CSWeapon_KNIFE_KARAMBIT"
        },
        {
          "name": "CSWeapon_KNIFE_M9_BAYONET"
        },
        {
          "name": "CSWeapon_KNIFE_TATICAL"
        },
        {
          "name": "CSWeapon_KNIFE_FALCHION"
        },
        {
          "name": "CSWeapon_KNIFE_SURVIVAL_BOWIE"
        },
        {
          "name": "CSWeapon_KNIFE_BUTTERFLY"
        },
        {
          "name": "CSWeapon_KNIFE_PUSH"
        },
        {
          "name": "CSWeapon_KNIFE_URSUS"
        },
        {
          "name": "CSWeapon_KNIFE_GYPSY_JACKKNIFE"
        },
        {
          "name": "CSWeapon_KNIFE_STILETTO"
        },
        {
          "name": "CSWeapon_KNIFE_WIDOWMAKER"
        },
        {
          "name": "CSWeapon_MAX_WEAPONS",
          "docStart": 6082,
          "docEnd": 6178
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}