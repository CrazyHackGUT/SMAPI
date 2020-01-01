{
  "functions": [
    {
      "name": "CS_OnBuyCommand",
      "docStart": 6511,
      "docEnd": 6756,
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
      "docStart": 6826,
      "docEnd": 7038,
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
      "docStart": 7106,
      "docEnd": 7606,
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
      "docStart": 7692,
      "docEnd": 8054,
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
      "docStart": 8135,
      "docEnd": 8278,
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
      "docStart": 8325,
      "docEnd": 8514,
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
      "docStart": 8568,
      "docEnd": 8983,
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
      "docStart": 9079,
      "docEnd": 9393,
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
      "docStart": 9492,
      "docEnd": 9822,
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
      "docStart": 9914,
      "docEnd": 10427,
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
      "docStart": 10517,
      "docEnd": 10823,
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
      "docStart": 10897,
      "docEnd": 11094,
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
      "docStart": 11162,
      "docEnd": 11355,
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
      "docStart": 11398,
      "docEnd": 11785,
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
      "docStart": 11840,
      "docEnd": 12048,
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
      "docStart": 12092,
      "docEnd": 12296,
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
      "docStart": 12352,
      "docEnd": 12565,
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
      "docStart": 12624,
      "docEnd": 12842,
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
      "docStart": 12913,
      "docEnd": 13119,
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
      "docStart": 13168,
      "docEnd": 13379,
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
      "docStart": 13440,
      "docEnd": 13730,
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
      "docStart": 13793,
      "docEnd": 14076,
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
      "docStart": 14162,
      "docEnd": 14513,
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
      "docStart": 14565,
      "docEnd": 14740,
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
      "docStart": 14791,
      "docEnd": 15169,
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
      "docStart": 15228,
      "docEnd": 15595,
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
          "docStart": 2473,
          "docEnd": 2508
        },
        {
          "name": "CSRoundEnd_VIPEscaped",
          "docStart": 2550,
          "docEnd": 2603
        },
        {
          "name": "CSRoundEnd_VIPKilled",
          "docStart": 2645,
          "docEnd": 2704
        },
        {
          "name": "CSRoundEnd_TerroristsEscaped",
          "docStart": 2746,
          "docEnd": 2782
        },
        {
          "name": "CSRoundEnd_CTStoppedEscape",
          "docStart": 2824,
          "docEnd": 2892
        },
        {
          "name": "CSRoundEnd_TerroristsStopped",
          "docStart": 2934,
          "docEnd": 2988
        },
        {
          "name": "CSRoundEnd_BombDefused",
          "docStart": 3030,
          "docEnd": 3064
        },
        {
          "name": "CSRoundEnd_CTWin",
          "docStart": 3106,
          "docEnd": 3137
        },
        {
          "name": "CSRoundEnd_TerroristWin",
          "docStart": 3179,
          "docEnd": 3202
        },
        {
          "name": "CSRoundEnd_Draw",
          "docStart": 3244,
          "docEnd": 3263
        },
        {
          "name": "CSRoundEnd_HostagesRescued",
          "docStart": 3305,
          "docEnd": 3344
        },
        {
          "name": "CSRoundEnd_TargetSaved",
          "docStart": 3386,
          "docEnd": 3416
        },
        {
          "name": "CSRoundEnd_HostagesNotRescued",
          "docStart": 3458,
          "docEnd": 3497
        },
        {
          "name": "CSRoundEnd_TerroristsNotEscaped",
          "docStart": 3539,
          "docEnd": 3575
        },
        {
          "name": "CSRoundEnd_VIPNotEscaped",
          "docStart": 3617,
          "docEnd": 3670
        },
        {
          "name": "CSRoundEnd_GameStart",
          "docStart": 3712,
          "docEnd": 3736
        },
        {
          "name": "CSRoundEnd_TerroristsSurrender",
          "docStart": 3742,
          "docEnd": 3774
        },
        {
          "name": "CSRoundEnd_CTSurrender",
          "docStart": 3886,
          "docEnd": 3907
        },
        {
          "name": "CSRoundEnd_TerroristsPlanted",
          "docStart": 3949,
          "docEnd": 3984
        },
        {
          "name": "CSRoundEnd_CTsReachedHostage",
          "docStart": 4026,
          "docEnd": 4057
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
          "docStart": 4716,
          "docEnd": 4746
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
          "docStart": 5169,
          "docEnd": 5224
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
          "name": "CSWeapon_SNOWBALL"
        },
        {
          "name": "CSWeapon_BUMPMINE"
        },
        {
          "name": "CSWeapon_MAX_WEAPONS_NO_KNIFES",
          "docStart": 5808,
          "docEnd": 5895
        },
        {
          "name": "CSWeapon_BAYONET"
        },
        {
          "name": "CSWeapon_KNIFE_CLASSIC"
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
          "docStart": 6407,
          "docEnd": 6503
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}