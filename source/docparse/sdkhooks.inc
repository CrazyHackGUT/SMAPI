{
  "functions": [
    {
      "name": "OnEntityCreated",
      "docStart": 11357,
      "docEnd": 11468,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        }
      ]
    },
    {
      "name": "OnEntityDestroyed",
      "docStart": 11536,
      "docEnd": 11614,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "OnGetGameDescription",
      "docStart": 11660,
      "docEnd": 11872,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "char[64]",
          "name": "gameDesc",
          "decl": "char gameDesc[64]"
        }
      ]
    },
    {
      "name": "OnLevelInit",
      "docStart": 11930,
      "docEnd": 12144,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "const char[]",
          "name": "mapName",
          "decl": "const char[] mapName"
        },
        {
          "type": "char[2097152]",
          "name": "mapEntities",
          "decl": "char mapEntities[2097152]"
        }
      ]
    },
    {
      "name": "SDKHook",
      "docStart": 12223,
      "docEnd": 12399,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "SDKHookType",
          "name": "type",
          "decl": "SDKHookType type"
        },
        {
          "type": "SDKHookCB",
          "name": "callback",
          "decl": "SDKHookCB callback"
        }
      ]
    },
    {
      "name": "SDKHookEx",
      "docStart": 12472,
      "docEnd": 12688,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "SDKHookType",
          "name": "type",
          "decl": "SDKHookType type"
        },
        {
          "type": "SDKHookCB",
          "name": "callback",
          "decl": "SDKHookCB callback"
        }
      ]
    },
    {
      "name": "SDKUnhook",
      "docStart": 12763,
      "docEnd": 12919,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "SDKHookType",
          "name": "type",
          "decl": "SDKHookType type"
        },
        {
          "type": "SDKHookCB",
          "name": "callback",
          "decl": "SDKHookCB callback"
        }
      ]
    },
    {
      "name": "SDKHooks_TakeDamage",
      "docStart": 12994,
      "docEnd": 13518,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "inflictor",
          "decl": "int inflictor"
        },
        {
          "type": "int",
          "name": "attacker",
          "decl": "int attacker"
        },
        {
          "type": "float",
          "name": "damage",
          "decl": "float damage"
        },
        {
          "type": "int",
          "name": "damageType",
          "decl": "int damageType"
        },
        {
          "type": "int",
          "name": "weapon",
          "decl": "int weapon"
        },
        {
          "type": "const float[3]",
          "name": "damageForce",
          "decl": "const float damageForce[3]"
        },
        {
          "type": "const float[3]",
          "name": "damagePosition",
          "decl": "const float damagePosition[3]"
        }
      ]
    },
    {
      "name": "SDKHooks_DropWeapon",
      "docStart": 13738,
      "docEnd": 14130,
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
          "name": "weapon",
          "decl": "int weapon"
        },
        {
          "type": "const float[3]",
          "name": "vecTarget",
          "decl": "const float vecTarget[3]"
        },
        {
          "type": "const float[3]",
          "name": "vecVelocity",
          "decl": "const float vecVelocity[3]"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "SDKHookType",
      "entries": [
        {
          "name": "SDKHook_EndTouch"
        },
        {
          "name": "SDKHook_FireBulletsPost"
        },
        {
          "name": "SDKHook_OnTakeDamage"
        },
        {
          "name": "SDKHook_OnTakeDamagePost"
        },
        {
          "name": "SDKHook_PreThink"
        },
        {
          "name": "SDKHook_PostThink"
        },
        {
          "name": "SDKHook_SetTransmit"
        },
        {
          "name": "SDKHook_Spawn"
        },
        {
          "name": "SDKHook_StartTouch"
        },
        {
          "name": "SDKHook_Think"
        },
        {
          "name": "SDKHook_Touch"
        },
        {
          "name": "SDKHook_TraceAttack"
        },
        {
          "name": "SDKHook_TraceAttackPost"
        },
        {
          "name": "SDKHook_WeaponCanSwitchTo"
        },
        {
          "name": "SDKHook_WeaponCanUse"
        },
        {
          "name": "SDKHook_WeaponDrop"
        },
        {
          "name": "SDKHook_WeaponEquip"
        },
        {
          "name": "SDKHook_WeaponSwitch"
        },
        {
          "name": "SDKHook_ShouldCollide"
        },
        {
          "name": "SDKHook_PreThinkPost"
        },
        {
          "name": "SDKHook_PostThinkPost"
        },
        {
          "name": "SDKHook_ThinkPost"
        },
        {
          "name": "SDKHook_EndTouchPost"
        },
        {
          "name": "SDKHook_GroundEntChangedPost"
        },
        {
          "name": "SDKHook_SpawnPost"
        },
        {
          "name": "SDKHook_StartTouchPost"
        },
        {
          "name": "SDKHook_TouchPost"
        },
        {
          "name": "SDKHook_VPhysicsUpdate"
        },
        {
          "name": "SDKHook_VPhysicsUpdatePost"
        },
        {
          "name": "SDKHook_WeaponCanSwitchToPost"
        },
        {
          "name": "SDKHook_WeaponCanUsePost"
        },
        {
          "name": "SDKHook_WeaponDropPost"
        },
        {
          "name": "SDKHook_WeaponEquipPost"
        },
        {
          "name": "SDKHook_WeaponSwitchPost"
        },
        {
          "name": "SDKHook_Use"
        },
        {
          "name": "SDKHook_UsePost"
        },
        {
          "name": "SDKHook_Reload"
        },
        {
          "name": "SDKHook_ReloadPost"
        },
        {
          "name": "SDKHook_GetMaxHealth",
          "docStart": 6719,
          "docEnd": 6741
        },
        {
          "name": "SDKHook_Blocked"
        },
        {
          "name": "SDKHook_BlockedPost"
        },
        {
          "name": "SDKHook_OnTakeDamageAlive"
        },
        {
          "name": "SDKHook_OnTakeDamageAlivePost"
        },
        {
          "name": "SDKHook_CanBeAutobalanced"
        }
      ]
    },
    {
      "name": "UseType",
      "entries": [
        {
          "name": "Use_Off"
        },
        {
          "name": "Use_On"
        },
        {
          "name": "Use_Set"
        },
        {
          "name": "Use_Toggle"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "SDKHookCB",
      "types": [
        {
          "type": "function void(int client)",
          "docStart": 8050,
          "docEnd": 8085
        },
        {
          "type": "function Action(int entity)",
          "docStart": 8117,
          "docEnd": 8125
        },
        {
          "type": "function void(int entity)",
          "docStart": 8159,
          "docEnd": 8231
        },
        {
          "type": "function Action(int entity, int other)",
          "docStart": 8263,
          "docEnd": 8311
        },
        {
          "type": "function void(int entity, int other)",
          "docStart": 8356,
          "docEnd": 8404
        },
        {
          "type": "function Action(int entity, int client)",
          "docStart": 8447,
          "docEnd": 8461
        },
        {
          "type": "function Action(int client, int weapon)",
          "docStart": 8507,
          "docEnd": 8592
        },
        {
          "type": "function void(int client, int weapon)",
          "docStart": 8638,
          "docEnd": 8743
        },
        {
          "type": "function Action(int entity, int& maxhealth)",
          "docStart": 8787,
          "docEnd": 8819
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype)",
          "docStart": 8869,
          "docEnd": 8924
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& weapon, float damageForce[3], float damagePosition[3])",
          "docStart": 9021,
          "docEnd": 9220
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& weapon, float damageForce[3], float damagePosition[3], int damagecustom)",
          "docStart": 9377,
          "docEnd": 9750
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype)",
          "docStart": 9927,
          "docEnd": 9972
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int weapon, const float damageForce[3], const float damagePosition[3])",
          "docStart": 10063,
          "docEnd": 10108
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int weapon, const float damageForce[3], const float damagePosition[3], int damagecustom)",
          "docStart": 10270,
          "docEnd": 10315
        },
        {
          "type": "function void(int client, int shots, const char[] weaponname)",
          "docStart": 10497,
          "docEnd": 10515
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& ammotype, int hitbox, int hitgroup)",
          "docStart": 10583,
          "docEnd": 10597
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int ammotype, int hitbox, int hitgroup)",
          "docStart": 10735,
          "docEnd": 10753
        },
        {
          "type": "function bool(int entity, int collisiongroup, int contentsmask, bool originalResult)",
          "docStart": 10884,
          "docEnd": 10900
        },
        {
          "type": "function Action(int entity, int activator, int caller, UseType type, float value)",
          "docStart": 10991,
          "docEnd": 10997
        },
        {
          "type": "function void(int entity, int activator, int caller, UseType type, float value)",
          "docStart": 11085,
          "docEnd": 11095
        },
        {
          "type": "function Action(int weapon)",
          "docStart": 11181,
          "docEnd": 11190
        },
        {
          "type": "function void(int weapon, bool bSuccessful)",
          "docStart": 11224,
          "docEnd": 11238
        },
        {
          "type": "function bool(int client, bool origRet)",
          "docStart": 11288,
          "docEnd": 11308
        }
      ]
    }
  ],
  "typedefs": []
}