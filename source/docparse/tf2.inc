{
  "functions": [
    {
      "name": "TF2_IgnitePlayer",
      "docStart": 13617,
      "docEnd": 13935,
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
          "name": "attacker",
          "decl": "int attacker"
        },
        {
          "type": "float",
          "name": "duration",
          "decl": "float duration"
        }
      ]
    },
    {
      "name": "TF2_RespawnPlayer",
      "docStart": 14017,
      "docEnd": 14178,
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
      "name": "TF2_RegeneratePlayer",
      "docStart": 14226,
      "docEnd": 14414,
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
      "name": "TF2_AddCondition",
      "docStart": 14465,
      "docEnd": 14949,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFCond",
          "name": "condition",
          "decl": "TFCond condition"
        },
        {
          "type": "float",
          "name": "duration",
          "decl": "float duration"
        },
        {
          "type": "int",
          "name": "inflictor",
          "decl": "int inflictor"
        }
      ]
    },
    {
      "name": "TF2_RemoveCondition",
      "docStart": 15071,
      "docEnd": 15316,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFCond",
          "name": "condition",
          "decl": "TFCond condition"
        }
      ]
    },
    {
      "name": "TF2_SetPlayerPowerPlay",
      "docStart": 15384,
      "docEnd": 15647,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "enabled",
          "decl": "bool enabled"
        }
      ]
    },
    {
      "name": "TF2_DisguisePlayer",
      "docStart": 15714,
      "docEnd": 16288,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFTeam",
          "name": "team",
          "decl": "TFTeam team"
        },
        {
          "type": "TFClassType",
          "name": "classType",
          "decl": "TFClassType classType"
        },
        {
          "type": "int",
          "name": "target",
          "decl": "int target"
        }
      ]
    },
    {
      "name": "TF2_RemovePlayerDisguise",
      "docStart": 16387,
      "docEnd": 16603,
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
      "name": "TF2_StunPlayer",
      "docStart": 16658,
      "docEnd": 17013,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float",
          "name": "duration",
          "decl": "float duration"
        },
        {
          "type": "float",
          "name": "slowdown",
          "decl": "float slowdown"
        },
        {
          "type": "int",
          "name": "stunflags",
          "decl": "int stunflags"
        },
        {
          "type": "int",
          "name": "attacker",
          "decl": "int attacker"
        }
      ]
    },
    {
      "name": "TF2_MakeBleed",
      "docStart": 17125,
      "docEnd": 17322,
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
          "name": "attacker",
          "decl": "int attacker"
        },
        {
          "type": "float",
          "name": "duration",
          "decl": "float duration"
        }
      ]
    },
    {
      "name": "TF2_GetResourceEntity",
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "TF2_GetClass",
      "docStart": 17687,
      "docEnd": 17872,
      "kind": "native",
      "returnType": "TFClassType",
      "arguments": [
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        }
      ]
    },
    {
      "name": "TF2_CalcIsAttackCritical",
      "docStart": 17934,
      "docEnd": 18686,
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
          "name": "weapon",
          "decl": "int weapon"
        },
        {
          "type": "char[]",
          "name": "weaponname",
          "decl": "char[] weaponname"
        },
        {
          "type": "bool&",
          "name": "result",
          "decl": "bool& result"
        }
      ]
    },
    {
      "name": "TF2_OnGetHoliday",
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "TFHoliday&",
          "name": "holiday",
          "decl": "TFHoliday& holiday"
        }
      ]
    },
    {
      "name": "TF2_OnIsHolidayActive",
      "docStart": 18990,
      "docEnd": 19446,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "TFHoliday",
          "name": "holiday",
          "decl": "TFHoliday holiday"
        },
        {
          "type": "bool&",
          "name": "result",
          "decl": "bool& result"
        }
      ]
    },
    {
      "name": "TF2_IsHolidayActive",
      "docStart": 19522,
      "docEnd": 19703,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "TFHoliday",
          "name": "holiday",
          "decl": "TFHoliday holiday"
        }
      ]
    },
    {
      "name": "TF2_IsPlayerInDuel",
      "docStart": 19760,
      "docEnd": 19947,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "TF2_RemoveWearable",
      "docStart": 19996,
      "docEnd": 20316,
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
          "name": "wearable",
          "decl": "int wearable"
        }
      ]
    },
    {
      "name": "TF2_OnConditionAdded",
      "docStart": 20379,
      "docEnd": 20581,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFCond",
          "name": "condition",
          "decl": "TFCond condition"
        }
      ]
    },
    {
      "name": "TF2_OnConditionRemoved",
      "docStart": 20651,
      "docEnd": 20861,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFCond",
          "name": "condition",
          "decl": "TFCond condition"
        }
      ]
    },
    {
      "name": "TF2_OnWaitingForPlayersStart",
      "docStart": 20933,
      "docEnd": 21011,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "TF2_OnWaitingForPlayersEnd",
      "docStart": 21061,
      "docEnd": 21138,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "TF2_OnPlayerTeleport",
      "docStart": 21186,
      "docEnd": 21810,
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
          "name": "teleporter",
          "decl": "int teleporter"
        },
        {
          "type": "bool&",
          "name": "result",
          "decl": "bool& result"
        }
      ]
    },
    {
      "name": "__ext_tf2_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "TFClassType",
      "entries": [
        {
          "name": "TFClass_Unknown"
        },
        {
          "name": "TFClass_Scout"
        },
        {
          "name": "TFClass_Sniper"
        },
        {
          "name": "TFClass_Soldier"
        },
        {
          "name": "TFClass_DemoMan"
        },
        {
          "name": "TFClass_Medic"
        },
        {
          "name": "TFClass_Heavy"
        },
        {
          "name": "TFClass_Pyro"
        },
        {
          "name": "TFClass_Spy"
        },
        {
          "name": "TFClass_Engineer"
        }
      ]
    },
    {
      "name": "TFTeam",
      "entries": [
        {
          "name": "TFTeam_Unassigned"
        },
        {
          "name": "TFTeam_Spectator"
        },
        {
          "name": "TFTeam_Red"
        },
        {
          "name": "TFTeam_Blue"
        }
      ]
    },
    {
      "name": "TFCond",
      "entries": [
        {
          "name": "TFCond_Slowed",
          "docStart": 3014,
          "docEnd": 3074
        },
        {
          "name": "TFCond_Zoomed",
          "docStart": 3092,
          "docEnd": 3117
        },
        {
          "name": "TFCond_Disguising",
          "docStart": 3139,
          "docEnd": 3158
        },
        {
          "name": "TFCond_Disguised",
          "docStart": 3179,
          "docEnd": 3192
        },
        {
          "name": "TFCond_Cloaked",
          "docStart": 3211,
          "docEnd": 3228
        },
        {
          "name": "TFCond_Ubercharged",
          "docStart": 3251,
          "docEnd": 3324
        },
        {
          "name": "TFCond_TeleportedGlow",
          "docStart": 3350,
          "docEnd": 3376
        },
        {
          "name": "TFCond_Taunting",
          "docStart": 3396,
          "docEnd": 3447
        },
        {
          "name": "TFCond_UberchargeFading",
          "docStart": 3475,
          "docEnd": 3513
        },
        {
          "name": "TFCond_Unknown1",
          "docStart": 3533,
          "docEnd": 3536
        },
        {
          "name": "TFCond_CloakFlicker",
          "docStart": 3564,
          "docEnd": 3592
        },
        {
          "name": "TFCond_Teleporting",
          "docStart": 3615,
          "docEnd": 3664
        },
        {
          "name": "TFCond_Kritzkrieged",
          "docStart": 3688,
          "docEnd": 3754
        },
        {
          "name": "TFCond_Unknown2",
          "docStart": 3774,
          "docEnd": 3778
        },
        {
          "name": "TFCond_TmpDamageBonus",
          "docStart": 3809,
          "docEnd": 3871
        },
        {
          "name": "TFCond_DeadRingered",
          "docStart": 3895,
          "docEnd": 3952
        },
        {
          "name": "TFCond_Bonked",
          "docStart": 3970,
          "docEnd": 4001
        },
        {
          "name": "TFCond_Dazed",
          "docStart": 4018,
          "docEnd": 4070
        },
        {
          "name": "TFCond_Buffed",
          "docStart": 4088,
          "docEnd": 4132
        },
        {
          "name": "TFCond_Charging",
          "docStart": 4152,
          "docEnd": 4187
        },
        {
          "name": "TFCond_DemoBuff",
          "docStart": 4207,
          "docEnd": 4231
        },
        {
          "name": "TFCond_CritCola",
          "docStart": 4251,
          "docEnd": 4273
        },
        {
          "name": "TFCond_InHealRadius",
          "docStart": 4297,
          "docEnd": 4350
        },
        {
          "name": "TFCond_Healing",
          "docStart": 4369,
          "docEnd": 4414
        },
        {
          "name": "TFCond_OnFire",
          "docStart": 4432,
          "docEnd": 4493
        },
        {
          "name": "TFCond_Overhealed",
          "docStart": 4515,
          "docEnd": 4561
        },
        {
          "name": "TFCond_Jarated",
          "docStart": 4580,
          "docEnd": 4599
        },
        {
          "name": "TFCond_Bleeding",
          "docStart": 4619,
          "docEnd": 4637
        },
        {
          "name": "TFCond_DefenseBuffed",
          "docStart": 4662,
          "docEnd": 4712
        },
        {
          "name": "TFCond_Milked",
          "docStart": 4730,
          "docEnd": 4751
        },
        {
          "name": "TFCond_MegaHeal",
          "docStart": 4771,
          "docEnd": 4841
        },
        {
          "name": "TFCond_RegenBuffed",
          "docStart": 4864,
          "docEnd": 4922
        },
        {
          "name": "TFCond_MarkedForDeath",
          "docStart": 4948,
          "docEnd": 4988
        },
        {
          "name": "TFCond_NoHealingDamageBuff",
          "docStart": 5019,
          "docEnd": 5086
        },
        {
          "name": "TFCond_SpeedBuffAlly",
          "docStart": 5111,
          "docEnd": 5148
        },
        {
          "name": "TFCond_HalloweenCritCandy",
          "docStart": 5178,
          "docEnd": 5212
        },
        {
          "name": "TFCond_CritCanteen",
          "docStart": 5235,
          "docEnd": 5284
        },
        {
          "name": "TFCond_CritDemoCharge",
          "docStart": 5310,
          "docEnd": 5378
        },
        {
          "name": "TFCond_CritHype",
          "docStart": 5398,
          "docEnd": 5433
        },
        {
          "name": "TFCond_CritOnFirstBlood",
          "docStart": 5461,
          "docEnd": 5495
        },
        {
          "name": "TFCond_CritOnWin",
          "docStart": 5516,
          "docEnd": 5573
        },
        {
          "name": "TFCond_CritOnFlagCapture",
          "docStart": 5602,
          "docEnd": 5639
        },
        {
          "name": "TFCond_CritOnKill",
          "docStart": 5661,
          "docEnd": 5703
        },
        {
          "name": "TFCond_RestrictToMelee",
          "docStart": 5730,
          "docEnd": 5772
        },
        {
          "name": "TFCond_DefenseBuffNoCritBlock",
          "docStart": 5806,
          "docEnd": 5888
        },
        {
          "name": "TFCond_Reprogrammed",
          "docStart": 5912,
          "docEnd": 5937
        },
        {
          "name": "TFCond_CritMmmph",
          "docStart": 5958,
          "docEnd": 5989
        },
        {
          "name": "TFCond_DefenseBuffMmmph",
          "docStart": 6017,
          "docEnd": 6054
        },
        {
          "name": "TFCond_FocusBuff",
          "docStart": 6075,
          "docEnd": 6135
        },
        {
          "name": "TFCond_DisguiseRemoved",
          "docStart": 6162,
          "docEnd": 6197
        },
        {
          "name": "TFCond_MarkedForDeathSilent",
          "docStart": 6229,
          "docEnd": 6272
        },
        {
          "name": "TFCond_DisguisedAsDispenser",
          "docStart": 6304,
          "docEnd": 6387
        },
        {
          "name": "TFCond_Sapped",
          "docStart": 6405,
          "docEnd": 6439
        },
        {
          "name": "TFCond_UberchargedHidden",
          "docStart": 6468,
          "docEnd": 6516
        },
        {
          "name": "TFCond_UberchargedCanteen",
          "docStart": 6546,
          "docEnd": 6607
        },
        {
          "name": "TFCond_HalloweenBombHead",
          "docStart": 6636,
          "docEnd": 6677
        },
        {
          "name": "TFCond_HalloweenThriller",
          "docStart": 6706,
          "docEnd": 6736
        },
        {
          "name": "TFCond_RadiusHealOnDamage",
          "docStart": 6766,
          "docEnd": 6898
        },
        {
          "name": "TFCond_CritOnDamage",
          "docStart": 6922,
          "docEnd": 6952
        },
        {
          "name": "TFCond_UberchargedOnTakeDamage",
          "docStart": 6987,
          "docEnd": 7022
        },
        {
          "name": "TFCond_UberBulletResist",
          "docStart": 7050,
          "docEnd": 7089
        },
        {
          "name": "TFCond_UberBlastResist",
          "docStart": 7116,
          "docEnd": 7154
        },
        {
          "name": "TFCond_UberFireResist",
          "docStart": 7180,
          "docEnd": 7217
        },
        {
          "name": "TFCond_SmallBulletResist",
          "docStart": 7246,
          "docEnd": 7288
        },
        {
          "name": "TFCond_SmallBlastResist",
          "docStart": 7316,
          "docEnd": 7357
        },
        {
          "name": "TFCond_SmallFireResist",
          "docStart": 7384,
          "docEnd": 7424
        },
        {
          "name": "TFCond_Stealthed",
          "docStart": 7445,
          "docEnd": 7476
        },
        {
          "name": "TFCond_MedigunDebuff",
          "docStart": 7501,
          "docEnd": 7514
        },
        {
          "name": "TFCond_StealthedUserBuffFade",
          "docStart": 7547,
          "docEnd": 7617
        },
        {
          "name": "TFCond_BulletImmune",
          "docStart": 7641,
          "docEnd": 7667
        },
        {
          "name": "TFCond_BlastImmune",
          "docStart": 7690,
          "docEnd": 7715
        },
        {
          "name": "TFCond_FireImmune",
          "docStart": 7737,
          "docEnd": 7761
        },
        {
          "name": "TFCond_PreventDeath",
          "docStart": 7785,
          "docEnd": 7841
        },
        {
          "name": "TFCond_MVMBotRadiowave",
          "docStart": 7868,
          "docEnd": 7909
        },
        {
          "name": "TFCond_HalloweenSpeedBoost",
          "docStart": 7940,
          "docEnd": 8009
        },
        {
          "name": "TFCond_HalloweenQuickHeal",
          "docStart": 8039,
          "docEnd": 8119
        },
        {
          "name": "TFCond_HalloweenGiant",
          "docStart": 8145,
          "docEnd": 8230
        },
        {
          "name": "TFCond_HalloweenTiny",
          "docStart": 8255,
          "docEnd": 8294
        },
        {
          "name": "TFCond_HalloweenInHell",
          "docStart": 8321,
          "docEnd": 8381
        },
        {
          "name": "TFCond_HalloweenGhostMode",
          "docStart": 8411,
          "docEnd": 8461
        },
        {
          "name": "TFCond_MiniCritOnKill",
          "docStart": 8487,
          "docEnd": 8510
        },
        {
          "name": "TFCond_DodgeChance",
          "docStart": 8533,
          "docEnd": 8537
        },
        {
          "name": "TFCond_ObscuredSmoke",
          "docStart": 8567,
          "docEnd": 8602
        },
        {
          "name": "TFCond_Parachute",
          "docStart": 8623,
          "docEnd": 8679
        },
        {
          "name": "TFCond_BlastJumping",
          "docStart": 8703,
          "docEnd": 8732
        },
        {
          "name": "TFCond_HalloweenKart",
          "docStart": 8757,
          "docEnd": 8798
        },
        {
          "name": "TFCond_HalloweenKartDash",
          "docStart": 8827,
          "docEnd": 8911
        },
        {
          "name": "TFCond_BalloonHead",
          "docStart": 8934,
          "docEnd": 8968
        },
        {
          "name": "TFCond_MeleeOnly",
          "docStart": 8989,
          "docEnd": 9065
        },
        {
          "name": "TFCond_SwimmingCurse",
          "docStart": 9090,
          "docEnd": 9131
        },
        {
          "name": "TFCond_HalloweenKartNoTurn",
          "docStart": 9162,
          "docEnd": 9166
        },
        {
          "name": "TFCond_FreezeInput",
          "docStart": 9194,
          "docEnd": 9235
        },
        {
          "name": "TFCond_HalloweenKartCage",
          "docStart": 9264,
          "docEnd": 9345
        },
        {
          "name": "TFCond_HasRune",
          "docStart": 9364,
          "docEnd": 9383
        },
        {
          "name": "TFCond_RuneStrength",
          "docStart": 9407,
          "docEnd": 9448
        },
        {
          "name": "TFCond_RuneHaste",
          "docStart": 9469,
          "docEnd": 9556
        },
        {
          "name": "TFCond_RuneRegen",
          "docStart": 9577,
          "docEnd": 9612
        },
        {
          "name": "TFCond_RuneResist",
          "docStart": 9634,
          "docEnd": 9678
        },
        {
          "name": "TFCond_RuneVampire",
          "docStart": 9701,
          "docEnd": 9778
        },
        {
          "name": "TFCond_RuneWarlock",
          "docStart": 9801,
          "docEnd": 9895
        },
        {
          "name": "TFCond_RunePrecision",
          "docStart": 9920,
          "docEnd": 10060
        },
        {
          "name": "TFCond_RuneAgility",
          "docStart": 10083,
          "docEnd": 10175
        },
        {
          "name": "TFCond_GrapplingHook",
          "docStart": 10200,
          "docEnd": 10283
        },
        {
          "name": "TFCond_GrapplingHookSafeFall",
          "docStart": 10316,
          "docEnd": 10406
        },
        {
          "name": "TFCond_GrapplingHookLatched",
          "docStart": 10438,
          "docEnd": 10515
        },
        {
          "name": "TFCond_GrapplingHookBleeding",
          "docStart": 10548,
          "docEnd": 10609
        },
        {
          "name": "TFCond_AfterburnImmune",
          "docStart": 10636,
          "docEnd": 10672
        },
        {
          "name": "TFCond_RuneKnockout",
          "docStart": 10696,
          "docEnd": 10854
        },
        {
          "name": "TFCond_RuneImbalance",
          "docStart": 10879,
          "docEnd": 10932
        },
        {
          "name": "TFCond_CritRuneTemp",
          "docStart": 10956,
          "docEnd": 10980
        },
        {
          "name": "TFCond_PasstimeInterception",
          "docStart": 11012,
          "docEnd": 11062
        },
        {
          "name": "TFCond_SwimmingNoEffects",
          "docStart": 11091,
          "docEnd": 11147
        },
        {
          "name": "TFCond_EyeaductUnderworld",
          "docStart": 11177,
          "docEnd": 11257
        },
        {
          "name": "TFCond_KingRune",
          "docStart": 11277,
          "docEnd": 11332
        },
        {
          "name": "TFCond_PlagueRune",
          "docStart": 11354,
          "docEnd": 11445
        },
        {
          "name": "TFCond_SupernovaRune",
          "docStart": 11470,
          "docEnd": 11559
        },
        {
          "name": "TFCond_Plague",
          "docStart": 11577,
          "docEnd": 11649
        },
        {
          "name": "TFCond_KingAura",
          "docStart": 11669,
          "docEnd": 11750
        },
        {
          "name": "TFCond_SpawnOutline",
          "docStart": 11774,
          "docEnd": 11840
        },
        {
          "name": "TFCond_KnockedIntoAir",
          "docStart": 11866,
          "docEnd": 11905
        },
        {
          "name": "TFCond_CompetitiveWinner",
          "docStart": 11934,
          "docEnd": 11948
        },
        {
          "name": "TFCond_CompetitiveLoser",
          "docStart": 11976,
          "docEnd": 11990
        },
        {
          "name": "TFCond_NoTaunting_DEPRECATED",
          "docStart": 12023,
          "docEnd": 12028
        },
        {
          "name": "TFCond_HealingDebuff",
          "docStart": 12059,
          "docEnd": 12107
        },
        {
          "name": "TFCond_PasstimePenaltyDebuff",
          "docStart": 12140,
          "docEnd": 12170
        },
        {
          "name": "TFCond_GrappledToPlayer",
          "docStart": 12198,
          "docEnd": 12254
        },
        {
          "name": "TFCond_GrappledByPlayer",
          "docStart": 12282,
          "docEnd": 12296
        },
        {
          "name": "TFCond_ParachuteDeployed",
          "docStart": 12325,
          "docEnd": 12373
        },
        {
          "name": "TFCond_Gas",
          "docStart": 12388,
          "docEnd": 12412
        },
        {
          "name": "TFCond_BurningPyro",
          "docStart": 12435,
          "docEnd": 12474
        },
        {
          "name": "TFCond_RocketPack",
          "docStart": 12496,
          "docEnd": 12554
        },
        {
          "name": "TFCond_LostFooting",
          "docStart": 12577,
          "docEnd": 12604
        },
        {
          "name": "TFCond_AirCurrent",
          "docStart": 12625,
          "docEnd": 12664
        }
      ]
    },
    {
      "name": "TFHoliday",
      "entries": [
        {
          "name": "TFHoliday_Invalid"
        }
      ]
    },
    {
      "name": "TFObjectType",
      "entries": [
        {
          "name": "TFObject_CartDispenser"
        },
        {
          "name": "TFObject_Dispenser"
        },
        {
          "name": "TFObject_Teleporter"
        },
        {
          "name": "TFObject_Sentry"
        },
        {
          "name": "TFObject_Sapper"
        }
      ]
    },
    {
      "name": "TFObjectMode",
      "entries": [
        {
          "name": "TFObjectMode_None"
        },
        {
          "name": "TFObjectMode_Entrance"
        },
        {
          "name": "TFObjectMode_Exit"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}