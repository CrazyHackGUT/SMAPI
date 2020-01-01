{
  "functions": [
    {
      "name": "TF2_GetClientTeam",
      "docStart": 9955,
      "docEnd": 10132,
      "kind": "stock",
      "returnType": "TFTeam",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "TF2_ChangeClientTeam",
      "docStart": 10229,
      "docEnd": 10403,
      "kind": "stock",
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
        }
      ]
    },
    {
      "name": "TF2_GetPlayerClass",
      "docStart": 10516,
      "docEnd": 10701,
      "kind": "stock",
      "returnType": "TFClassType",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "TF2_SetPlayerClass",
      "docStart": 10829,
      "docEnd": 11244,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFClassType",
          "name": "classType",
          "decl": "TFClassType classType"
        },
        {
          "type": "bool",
          "name": "weapons",
          "decl": "bool weapons"
        },
        {
          "type": "bool",
          "name": "persistent",
          "decl": "bool persistent"
        }
      ]
    },
    {
      "name": "TF2_GetPlayerResourceData",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFResourceType",
          "name": "type",
          "decl": "TFResourceType type"
        }
      ]
    },
    {
      "name": "TF2_SetPlayerResourceData",
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFResourceType",
          "name": "type",
          "decl": "TFResourceType type"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "TF2_RemoveWeaponSlot",
      "docStart": 13290,
      "docEnd": 13508,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "slot",
          "decl": "int slot"
        }
      ]
    },
    {
      "name": "TF2_RemoveAllWeapons",
      "docStart": 14198,
      "docEnd": 14285,
      "kind": "stock",
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
      "name": "TF2_GetPlayerConditionFlags",
      "kind": "stock",
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
      "name": "TF2_IsPlayerInCondition",
      "docStart": 14816,
      "docEnd": 15014,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "TFCond",
          "name": "cond",
          "decl": "TFCond cond"
        }
      ]
    },
    {
      "name": "TF2_GetObjectType",
      "docStart": 16157,
      "docEnd": 16340,
      "kind": "stock",
      "returnType": "TFObjectType",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TF2_GetObjectMode",
      "docStart": 16597,
      "docEnd": 16780,
      "kind": "stock",
      "returnType": "TFObjectMode",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "TFResourceType",
      "entries": [
        {
          "name": "TFResource_Ping"
        },
        {
          "name": "TFResource_Score"
        },
        {
          "name": "TFResource_Deaths"
        },
        {
          "name": "TFResource_TotalScore"
        },
        {
          "name": "TFResource_Captures"
        },
        {
          "name": "TFResource_Defenses"
        },
        {
          "name": "TFResource_Dominations"
        },
        {
          "name": "TFResource_Revenge"
        },
        {
          "name": "TFResource_BuildingsDestroyed"
        },
        {
          "name": "TFResource_Headshots"
        },
        {
          "name": "TFResource_Backstabs"
        },
        {
          "name": "TFResource_HealPoints"
        },
        {
          "name": "TFResource_Invulns"
        },
        {
          "name": "TFResource_Teleports"
        },
        {
          "name": "TFResource_ResupplyPoints"
        },
        {
          "name": "TFResource_KillAssists"
        },
        {
          "name": "TFResource_MaxHealth"
        },
        {
          "name": "TFResource_PlayerClass"
        }
      ]
    }
  ],
  "constants": [
    {
      "name": "TF_CUSTOM_HEADSHOT"
    },
    {
      "name": "TF_CUSTOM_BACKSTAB"
    },
    {
      "name": "TF_CUSTOM_BURNING"
    },
    {
      "name": "TF_CUSTOM_WRENCH_FIX"
    },
    {
      "name": "TF_CUSTOM_MINIGUN"
    },
    {
      "name": "TF_CUSTOM_SUICIDE"
    },
    {
      "name": "TF_CUSTOM_TAUNT_HADOUKEN"
    },
    {
      "name": "TF_CUSTOM_BURNING_FLARE"
    },
    {
      "name": "TF_CUSTOM_TAUNT_HIGH_NOON"
    },
    {
      "name": "TF_CUSTOM_TAUNT_GRAND_SLAM"
    },
    {
      "name": "TF_CUSTOM_PENETRATE_MY_TEAM"
    },
    {
      "name": "TF_CUSTOM_PENETRATE_ALL_PLAYERS"
    },
    {
      "name": "TF_CUSTOM_TAUNT_FENCING"
    },
    {
      "name": "TF_CUSTOM_PENETRATE_HEADSHOT"
    },
    {
      "name": "TF_CUSTOM_TAUNT_ARROW_STAB"
    },
    {
      "name": "TF_CUSTOM_TELEFRAG"
    },
    {
      "name": "TF_CUSTOM_BURNING_ARROW"
    },
    {
      "name": "TF_CUSTOM_FLYINGBURN"
    },
    {
      "name": "TF_CUSTOM_PUMPKIN_BOMB"
    },
    {
      "name": "TF_CUSTOM_DECAPITATION"
    },
    {
      "name": "TF_CUSTOM_TAUNT_GRENADE"
    },
    {
      "name": "TF_CUSTOM_BASEBALL"
    },
    {
      "name": "TF_CUSTOM_CHARGE_IMPACT"
    },
    {
      "name": "TF_CUSTOM_TAUNT_BARBARIAN_SWING"
    },
    {
      "name": "TF_CUSTOM_AIR_STICKY_BURST"
    },
    {
      "name": "TF_CUSTOM_DEFENSIVE_STICKY"
    },
    {
      "name": "TF_CUSTOM_PICKAXE"
    },
    {
      "name": "TF_CUSTOM_ROCKET_DIRECTHIT"
    },
    {
      "name": "TF_CUSTOM_TAUNT_UBERSLICE"
    },
    {
      "name": "TF_CUSTOM_PLAYER_SENTRY"
    },
    {
      "name": "TF_CUSTOM_STANDARD_STICKY"
    },
    {
      "name": "TF_CUSTOM_SHOTGUN_REVENGE_CRIT"
    },
    {
      "name": "TF_CUSTOM_TAUNT_ENGINEER_SMASH"
    },
    {
      "name": "TF_CUSTOM_BLEEDING"
    },
    {
      "name": "TF_CUSTOM_GOLD_WRENCH"
    },
    {
      "name": "TF_CUSTOM_CARRIED_BUILDING"
    },
    {
      "name": "TF_CUSTOM_COMBO_PUNCH"
    },
    {
      "name": "TF_CUSTOM_TAUNT_ENGINEER_ARM"
    },
    {
      "name": "TF_CUSTOM_FISH_KILL"
    },
    {
      "name": "TF_CUSTOM_TRIGGER_HURT"
    },
    {
      "name": "TF_CUSTOM_DECAPITATION_BOSS"
    },
    {
      "name": "TF_CUSTOM_STICKBOMB_EXPLOSION"
    },
    {
      "name": "TF_CUSTOM_AEGIS_ROUND"
    },
    {
      "name": "TF_CUSTOM_FLARE_EXPLOSION"
    },
    {
      "name": "TF_CUSTOM_BOOTS_STOMP"
    },
    {
      "name": "TF_CUSTOM_PLASMA"
    },
    {
      "name": "TF_CUSTOM_PLASMA_CHARGED"
    },
    {
      "name": "TF_CUSTOM_PLASMA_GIB"
    },
    {
      "name": "TF_CUSTOM_PRACTICE_STICKY"
    },
    {
      "name": "TF_CUSTOM_EYEBALL_ROCKET"
    },
    {
      "name": "TF_CUSTOM_HEADSHOT_DECAPITATION"
    },
    {
      "name": "TF_CUSTOM_TAUNT_ARMAGEDDON"
    },
    {
      "name": "TF_CUSTOM_FLARE_PELLET"
    },
    {
      "name": "TF_CUSTOM_CLEAVER"
    },
    {
      "name": "TF_CUSTOM_CLEAVER_CRIT"
    },
    {
      "name": "TF_CUSTOM_SAPPER_RECORDER_DEATH"
    },
    {
      "name": "TF_CUSTOM_MERASMUS_PLAYER_BOMB"
    },
    {
      "name": "TF_CUSTOM_MERASMUS_GRENADE"
    },
    {
      "name": "TF_CUSTOM_MERASMUS_ZAP"
    },
    {
      "name": "TF_CUSTOM_MERASMUS_DECAPITATION"
    },
    {
      "name": "TF_CUSTOM_CANNONBALL_PUSH"
    },
    {
      "name": "TF_CUSTOM_TAUNT_ALLCLASS_GUITAR_RIFF"
    },
    {
      "name": "TF_CUSTOM_THROWABLE"
    },
    {
      "name": "TF_CUSTOM_THROWABLE_KILL"
    },
    {
      "name": "TF_CUSTOM_SPELL_TELEPORT"
    },
    {
      "name": "TF_CUSTOM_SPELL_SKELETON"
    },
    {
      "name": "TF_CUSTOM_SPELL_MIRV"
    },
    {
      "name": "TF_CUSTOM_SPELL_METEOR"
    },
    {
      "name": "TF_CUSTOM_SPELL_LIGHTNING"
    },
    {
      "name": "TF_CUSTOM_SPELL_FIREBALL"
    },
    {
      "name": "TF_CUSTOM_SPELL_MONOCULUS"
    },
    {
      "name": "TF_CUSTOM_SPELL_BLASTJUMP"
    },
    {
      "name": "TF_CUSTOM_SPELL_BATS"
    },
    {
      "name": "TF_CUSTOM_SPELL_TINY"
    },
    {
      "name": "TF_CUSTOM_KART"
    },
    {
      "name": "TF_CUSTOM_GIANT_HAMMER"
    },
    {
      "name": "TF_CUSTOM_RUNE_REFLECT"
    },
    {
      "name": "TF_CUSTOM_DRAGONS_FURY_IGNITE"
    },
    {
      "name": "TF_CUSTOM_DRAGONS_FURY_BONUS_BURNING"
    },
    {
      "name": "TF_CUSTOM_SLAP_KILL"
    },
    {
      "name": "TF_CUSTOM_CROC"
    },
    {
      "name": "TF_CUSTOM_TAUNTATK_GASBLAST"
    },
    {
      "name": "TF_CUSTOM_AXTINGUISHER_BOOSTED"
    },
    {
      "name": "TF_WEAPON_NONE"
    },
    {
      "name": "TF_WEAPON_BAT"
    },
    {
      "name": "TF_WEAPON_BAT_WOOD"
    },
    {
      "name": "TF_WEAPON_BOTTLE"
    },
    {
      "name": "TF_WEAPON_FIREAXE"
    },
    {
      "name": "TF_WEAPON_CLUB"
    },
    {
      "name": "TF_WEAPON_CROWBAR"
    },
    {
      "name": "TF_WEAPON_KNIFE"
    },
    {
      "name": "TF_WEAPON_FISTS"
    },
    {
      "name": "TF_WEAPON_SHOVEL"
    },
    {
      "name": "TF_WEAPON_WRENCH"
    },
    {
      "name": "TF_WEAPON_BONESAW"
    },
    {
      "name": "TF_WEAPON_SHOTGUN_PRIMARY"
    },
    {
      "name": "TF_WEAPON_SHOTGUN_SOLDIER"
    },
    {
      "name": "TF_WEAPON_SHOTGUN_HWG"
    },
    {
      "name": "TF_WEAPON_SHOTGUN_PYRO"
    },
    {
      "name": "TF_WEAPON_SCATTERGUN"
    },
    {
      "name": "TF_WEAPON_SNIPERRIFLE"
    },
    {
      "name": "TF_WEAPON_MINIGUN"
    },
    {
      "name": "TF_WEAPON_SMG"
    },
    {
      "name": "TF_WEAPON_SYRINGEGUN_MEDIC"
    },
    {
      "name": "TF_WEAPON_TRANQ"
    },
    {
      "name": "TF_WEAPON_ROCKETLAUNCHER"
    },
    {
      "name": "TF_WEAPON_GRENADELAUNCHER"
    },
    {
      "name": "TF_WEAPON_PIPEBOMBLAUNCHER"
    },
    {
      "name": "TF_WEAPON_FLAMETHROWER"
    },
    {
      "name": "TF_WEAPON_GRENADE_NORMAL"
    },
    {
      "name": "TF_WEAPON_GRENADE_CONCUSSION"
    },
    {
      "name": "TF_WEAPON_GRENADE_NAIL"
    },
    {
      "name": "TF_WEAPON_GRENADE_MIRV"
    },
    {
      "name": "TF_WEAPON_GRENADE_MIRV_DEMOMAN"
    },
    {
      "name": "TF_WEAPON_GRENADE_NAPALM"
    },
    {
      "name": "TF_WEAPON_GRENADE_GAS"
    },
    {
      "name": "TF_WEAPON_GRENADE_EMP"
    },
    {
      "name": "TF_WEAPON_GRENADE_CALTROP"
    },
    {
      "name": "TF_WEAPON_GRENADE_PIPEBOMB"
    },
    {
      "name": "TF_WEAPON_GRENADE_SMOKE_BOMB"
    },
    {
      "name": "TF_WEAPON_GRENADE_HEAL"
    },
    {
      "name": "TF_WEAPON_GRENADE_STUNBALL"
    },
    {
      "name": "TF_WEAPON_GRENADE_JAR"
    },
    {
      "name": "TF_WEAPON_GRENADE_JAR_MILK"
    },
    {
      "name": "TF_WEAPON_PISTOL"
    },
    {
      "name": "TF_WEAPON_PISTOL_SCOUT"
    },
    {
      "name": "TF_WEAPON_REVOLVER"
    },
    {
      "name": "TF_WEAPON_NAILGUN"
    },
    {
      "name": "TF_WEAPON_PDA"
    },
    {
      "name": "TF_WEAPON_PDA_ENGINEER_BUILD"
    },
    {
      "name": "TF_WEAPON_PDA_ENGINEER_DESTROY"
    },
    {
      "name": "TF_WEAPON_PDA_SPY"
    },
    {
      "name": "TF_WEAPON_BUILDER"
    },
    {
      "name": "TF_WEAPON_MEDIGUN"
    },
    {
      "name": "TF_WEAPON_GRENADE_MIRVBOMB"
    },
    {
      "name": "TF_WEAPON_FLAMETHROWER_ROCKET"
    },
    {
      "name": "TF_WEAPON_GRENADE_DEMOMAN"
    },
    {
      "name": "TF_WEAPON_SENTRY_BULLET"
    },
    {
      "name": "TF_WEAPON_SENTRY_ROCKET"
    },
    {
      "name": "TF_WEAPON_DISPENSER"
    },
    {
      "name": "TF_WEAPON_INVIS"
    },
    {
      "name": "TF_WEAPON_FLAREGUN"
    },
    {
      "name": "TF_WEAPON_LUNCHBOX"
    },
    {
      "name": "TF_WEAPON_JAR"
    },
    {
      "name": "TF_WEAPON_COMPOUND_BOW"
    },
    {
      "name": "TF_WEAPON_BUFF_ITEM"
    },
    {
      "name": "TF_WEAPON_PUMPKIN_BOMB"
    },
    {
      "name": "TF_WEAPON_SWORD"
    },
    {
      "name": "TF_WEAPON_DIRECTHIT"
    },
    {
      "name": "TF_WEAPON_LIFELINE"
    },
    {
      "name": "TF_WEAPON_LASER_POINTER"
    },
    {
      "name": "TF_WEAPON_DISPENSER_GUN"
    },
    {
      "name": "TF_WEAPON_SENTRY_REVENGE"
    },
    {
      "name": "TF_WEAPON_JAR_MILK"
    },
    {
      "name": "TF_WEAPON_HANDGUN_SCOUT_PRIMARY"
    },
    {
      "name": "TF_WEAPON_BAT_FISH"
    },
    {
      "name": "TF_WEAPON_CROSSBOW"
    },
    {
      "name": "TF_WEAPON_STICKBOMB"
    },
    {
      "name": "TF_WEAPON_HANDGUN_SCOUT_SEC"
    },
    {
      "name": "TF_WEAPON_SODA_POPPER"
    },
    {
      "name": "TF_WEAPON_SNIPERRIFLE_DECAP"
    },
    {
      "name": "TF_WEAPON_RAYGUN"
    },
    {
      "name": "TF_WEAPON_PARTICLE_CANNON"
    },
    {
      "name": "TF_WEAPON_MECHANICAL_ARM"
    },
    {
      "name": "TF_WEAPON_DRG_POMSON"
    },
    {
      "name": "TF_WEAPON_BAT_GIFTWRAP"
    },
    {
      "name": "TF_WEAPON_GRENADE_ORNAMENT"
    },
    {
      "name": "TF_WEAPON_RAYGUN_REVENGE"
    },
    {
      "name": "TF_WEAPON_PEP_BRAWLER_BLASTER"
    },
    {
      "name": "TF_WEAPON_CLEAVER"
    },
    {
      "name": "TF_WEAPON_GRENADE_CLEAVER"
    },
    {
      "name": "TF_WEAPON_STICKY_BALL_LAUNCHER"
    },
    {
      "name": "TF_WEAPON_GRENADE_STICKY_BALL"
    },
    {
      "name": "TF_WEAPON_SHOTGUN_BUILDING_RESCUE"
    },
    {
      "name": "TF_WEAPON_CANNON"
    },
    {
      "name": "TF_WEAPON_THROWABLE"
    },
    {
      "name": "TF_WEAPON_GRENADE_THROWABLE"
    },
    {
      "name": "TF_WEAPON_PDA_SPY_BUILD"
    },
    {
      "name": "TF_WEAPON_GRENADE_WATERBALLOON"
    },
    {
      "name": "TF_WEAPON_HARVESTER_SAW"
    },
    {
      "name": "TF_WEAPON_SPELLBOOK"
    },
    {
      "name": "TF_WEAPON_SPELLBOOK_PROJECTILE"
    },
    {
      "name": "TF_WEAPON_SNIPERRIFLE_CLASSIC"
    },
    {
      "name": "TF_WEAPON_PARACHUTE"
    },
    {
      "name": "TF_WEAPON_GRAPPLINGHOOK"
    },
    {
      "name": "TF_WEAPON_PASSTIME_GUN"
    },
    {
      "name": "TF_WEAPON_CHARGED_SMG"
    },
    {
      "name": "TF_WEAPON_BREAKABLE_SIGN"
    },
    {
      "name": "TF_WEAPON_ROCKETPACK"
    },
    {
      "name": "TF_WEAPON_SLAP"
    },
    {
      "name": "TF_WEAPON_JAR_GAS"
    },
    {
      "name": "TF_WEAPON_GRENADE_JAR_GAS"
    },
    {
      "name": "TF_WEAPON_FLAME_BALL"
    },
    {
      "name": "TFWeaponSlot_Primary"
    },
    {
      "name": "TFWeaponSlot_Secondary"
    },
    {
      "name": "TFWeaponSlot_Melee"
    },
    {
      "name": "TFWeaponSlot_Grenade"
    },
    {
      "name": "TFWeaponSlot_Building"
    },
    {
      "name": "TFWeaponSlot_PDA"
    },
    {
      "name": "TFWeaponSlot_Item1"
    },
    {
      "name": "TFWeaponSlot_Item2"
    },
    {
      "name": "TF_FLAGEVENT_PICKEDUP"
    },
    {
      "name": "TF_FLAGEVENT_CAPTURED"
    },
    {
      "name": "TF_FLAGEVENT_DEFENDED"
    },
    {
      "name": "TF_FLAGEVENT_DROPPED"
    },
    {
      "name": "TF_FLAGEVENT_RETURNED"
    }
  ],
  "typesets": [],
  "typedefs": []
}