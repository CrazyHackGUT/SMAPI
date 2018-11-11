{
  "functions": [
    {
      "name": "TF2_IgnitePlayer",
      "docStart": 7112,
      "docEnd": 7315,
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
        }
      ]
    },
    {
      "name": "TF2_RespawnPlayer",
      "docStart": 7376,
      "docEnd": 7520,
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
      "docStart": 7568,
      "docEnd": 7739,
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
      "docStart": 7790,
      "docEnd": 8247,
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
      "docStart": 8369,
      "docEnd": 8594,
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
      "docStart": 8662,
      "docEnd": 8903,
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
      "docStart": 8970,
      "docEnd": 9511,
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
      "docStart": 9610,
      "docEnd": 9809,
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
      "docStart": 9864,
      "docEnd": 10182,
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
      "docStart": 10294,
      "docEnd": 10477,
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
      "docStart": 10771,
      "docEnd": 10943,
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
      "docStart": 11005,
      "docEnd": 11724,
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
      "docStart": 12020,
      "docEnd": 12455,
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
      "docStart": 12531,
      "docEnd": 12697,
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
      "docStart": 12754,
      "docEnd": 12937,
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
      "docStart": 12986,
      "docEnd": 13282,
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
      "docStart": 13345,
      "docEnd": 13541,
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
      "docStart": 13611,
      "docEnd": 13812,
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
      "docStart": 13884,
      "docEnd": 13962,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "TF2_OnWaitingForPlayersEnd",
      "docStart": 14012,
      "docEnd": 14089,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "TF2_OnPlayerTeleport",
      "docStart": 14137,
      "docEnd": 14720,
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
          "name": "TFCond_Slowed"
        },
        {
          "name": "TFCond_Zoomed"
        },
        {
          "name": "TFCond_Disguising"
        },
        {
          "name": "TFCond_Disguised"
        },
        {
          "name": "TFCond_Cloaked"
        },
        {
          "name": "TFCond_Ubercharged"
        },
        {
          "name": "TFCond_TeleportedGlow"
        },
        {
          "name": "TFCond_Taunting"
        },
        {
          "name": "TFCond_UberchargeFading"
        },
        {
          "name": "TFCond_Unknown1",
          "docStart": 3179,
          "docEnd": 3182
        },
        {
          "name": "TFCond_CloakFlicker"
        },
        {
          "name": "TFCond_Teleporting"
        },
        {
          "name": "TFCond_Kritzkrieged"
        },
        {
          "name": "TFCond_Unknown2",
          "docStart": 3274,
          "docEnd": 3278
        },
        {
          "name": "TFCond_TmpDamageBonus"
        },
        {
          "name": "TFCond_DeadRingered"
        },
        {
          "name": "TFCond_Bonked"
        },
        {
          "name": "TFCond_Dazed"
        },
        {
          "name": "TFCond_Buffed"
        },
        {
          "name": "TFCond_Charging"
        },
        {
          "name": "TFCond_DemoBuff"
        },
        {
          "name": "TFCond_CritCola"
        },
        {
          "name": "TFCond_InHealRadius"
        },
        {
          "name": "TFCond_Healing"
        },
        {
          "name": "TFCond_OnFire"
        },
        {
          "name": "TFCond_Overhealed"
        },
        {
          "name": "TFCond_Jarated"
        },
        {
          "name": "TFCond_Bleeding"
        },
        {
          "name": "TFCond_DefenseBuffed"
        },
        {
          "name": "TFCond_Milked"
        },
        {
          "name": "TFCond_MegaHeal"
        },
        {
          "name": "TFCond_RegenBuffed"
        },
        {
          "name": "TFCond_MarkedForDeath"
        },
        {
          "name": "TFCond_NoHealingDamageBuff"
        },
        {
          "name": "TFCond_SpeedBuffAlly",
          "docStart": 3716,
          "docEnd": 3721
        },
        {
          "name": "TFCond_HalloweenCritCandy"
        },
        {
          "name": "TFCond_CritCanteen"
        },
        {
          "name": "TFCond_CritDemoCharge"
        },
        {
          "name": "TFCond_CritHype"
        },
        {
          "name": "TFCond_CritOnFirstBlood"
        },
        {
          "name": "TFCond_CritOnWin"
        },
        {
          "name": "TFCond_CritOnFlagCapture"
        },
        {
          "name": "TFCond_CritOnKill"
        },
        {
          "name": "TFCond_RestrictToMelee"
        },
        {
          "name": "TFCond_DefenseBuffNoCritBlock"
        },
        {
          "name": "TFCond_Reprogrammed"
        },
        {
          "name": "TFCond_CritMmmph"
        },
        {
          "name": "TFCond_DefenseBuffMmmph"
        },
        {
          "name": "TFCond_FocusBuff"
        },
        {
          "name": "TFCond_DisguiseRemoved"
        },
        {
          "name": "TFCond_MarkedForDeathSilent"
        },
        {
          "name": "TFCond_DisguisedAsDispenser"
        },
        {
          "name": "TFCond_Sapped"
        },
        {
          "name": "TFCond_UberchargedHidden"
        },
        {
          "name": "TFCond_UberchargedCanteen"
        },
        {
          "name": "TFCond_HalloweenBombHead"
        },
        {
          "name": "TFCond_HalloweenThriller"
        },
        {
          "name": "TFCond_RadiusHealOnDamage"
        },
        {
          "name": "TFCond_CritOnDamage"
        },
        {
          "name": "TFCond_UberchargedOnTakeDamage"
        },
        {
          "name": "TFCond_UberBulletResist"
        },
        {
          "name": "TFCond_UberBlastResist"
        },
        {
          "name": "TFCond_UberFireResist"
        },
        {
          "name": "TFCond_SmallBulletResist"
        },
        {
          "name": "TFCond_SmallBlastResist"
        },
        {
          "name": "TFCond_SmallFireResist"
        },
        {
          "name": "TFCond_Stealthed",
          "docStart": 4545,
          "docEnd": 4550
        },
        {
          "name": "TFCond_MedigunDebuff"
        },
        {
          "name": "TFCond_StealthedUserBuffFade"
        },
        {
          "name": "TFCond_BulletImmune"
        },
        {
          "name": "TFCond_BlastImmune"
        },
        {
          "name": "TFCond_FireImmune"
        },
        {
          "name": "TFCond_PreventDeath"
        },
        {
          "name": "TFCond_MVMBotRadiowave"
        },
        {
          "name": "TFCond_HalloweenSpeedBoost"
        },
        {
          "name": "TFCond_HalloweenQuickHeal"
        },
        {
          "name": "TFCond_HalloweenGiant"
        },
        {
          "name": "TFCond_HalloweenTiny"
        },
        {
          "name": "TFCond_HalloweenInHell"
        },
        {
          "name": "TFCond_HalloweenGhostMode"
        },
        {
          "name": "TFCond_MiniCritOnKill"
        },
        {
          "name": "TFCond_DodgeChance",
          "docStart": 4932,
          "docEnd": 4936
        },
        {
          "name": "TFCond_ObscuredSmoke"
        },
        {
          "name": "TFCond_Parachute"
        },
        {
          "name": "TFCond_BlastJumping"
        },
        {
          "name": "TFCond_HalloweenKart"
        },
        {
          "name": "TFCond_HalloweenKartDash"
        },
        {
          "name": "TFCond_BalloonHead"
        },
        {
          "name": "TFCond_MeleeOnly"
        },
        {
          "name": "TFCond_SwimmingCurse"
        },
        {
          "name": "TFCond_HalloweenKartNoTurn",
          "docStart": 5157,
          "docEnd": 5161
        },
        {
          "name": "TFCond_FreezeInput"
        },
        {
          "name": "TFCond_HalloweenKartCage"
        },
        {
          "name": "TFCond_HasRune"
        },
        {
          "name": "TFCond_RuneStrength"
        },
        {
          "name": "TFCond_RuneHaste"
        },
        {
          "name": "TFCond_RuneRegen"
        },
        {
          "name": "TFCond_RuneResist"
        },
        {
          "name": "TFCond_RuneVampire"
        },
        {
          "name": "TFCond_RuneWarlock"
        },
        {
          "name": "TFCond_RunePrecision",
          "docStart": 5387,
          "docEnd": 5392
        },
        {
          "name": "TFCond_RuneAgility"
        },
        {
          "name": "TFCond_GrapplingHook"
        },
        {
          "name": "TFCond_GrapplingHookSafeFall"
        },
        {
          "name": "TFCond_GrapplingHookLatched"
        },
        {
          "name": "TFCond_GrapplingHookBleeding"
        },
        {
          "name": "TFCond_AfterburnImmune"
        },
        {
          "name": "TFCond_RuneKnockout"
        },
        {
          "name": "TFCond_RuneImbalance"
        },
        {
          "name": "TFCond_CritRuneTemp"
        },
        {
          "name": "TFCond_PasstimeInterception"
        },
        {
          "name": "TFCond_SwimmingNoEffects"
        },
        {
          "name": "TFCond_EyeaductUnderworld"
        },
        {
          "name": "TFCond_KingRune"
        },
        {
          "name": "TFCond_PlagueRune"
        },
        {
          "name": "TFCond_SupernovaRune"
        },
        {
          "name": "TFCond_Plague"
        },
        {
          "name": "TFCond_KingAura"
        },
        {
          "name": "TFCond_SpawnOutline",
          "docStart": 5841,
          "docEnd": 5846
        },
        {
          "name": "TFCond_KnockedIntoAir"
        },
        {
          "name": "TFCond_CompetitiveWinner"
        },
        {
          "name": "TFCond_CompetitiveLoser"
        },
        {
          "name": "TFCond_NoTaunting_DEPRECATED"
        },
        {
          "name": "TFCond_HealingDebuff"
        },
        {
          "name": "TFCond_PasstimePenaltyDebuff"
        },
        {
          "name": "TFCond_GrappledToPlayer"
        },
        {
          "name": "TFCond_GrappledByPlayer"
        },
        {
          "name": "TFCond_ParachuteDeployed"
        },
        {
          "name": "TFCond_Gas"
        },
        {
          "name": "TFCond_BurningPyro"
        },
        {
          "name": "TFCond_RocketPack"
        },
        {
          "name": "TFCond_LostFooting"
        },
        {
          "name": "TFCond_AirCurrent"
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