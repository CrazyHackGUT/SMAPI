{
  "functions": [
    {
      "name": "OnEntityCreated",
      "docStart": 10476,
      "docEnd": 10586,
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
      "docStart": 10654,
      "docEnd": 10734,
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
      "docStart": 10780,
      "docEnd": 10985,
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
      "docStart": 11043,
      "docEnd": 11248,
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
      "docStart": 11327,
      "docEnd": 11495,
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
      "docStart": 11568,
      "docEnd": 11770,
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
      "docStart": 11845,
      "docEnd": 12017,
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
      "docStart": 12092,
      "docEnd": 12647,
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
      "docStart": 12867,
      "docEnd": 13241,
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
          "docStart": 6113,
          "docEnd": 6135
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
          "docStart": 7469,
          "docEnd": 7504
        },
        {
          "type": "function Action(int entity)",
          "docStart": 7537,
          "docEnd": 7545
        },
        {
          "type": "function void(int entity)",
          "docStart": 7580,
          "docEnd": 7652
        },
        {
          "type": "function Action(int entity, int other)",
          "docStart": 7685,
          "docEnd": 7733
        },
        {
          "type": "function void(int entity, int other)",
          "docStart": 7779,
          "docEnd": 7827
        },
        {
          "type": "function Action(int entity, int client)",
          "docStart": 7871,
          "docEnd": 7885
        },
        {
          "type": "function Action(int client, int weapon)",
          "docStart": 7932,
          "docEnd": 8017
        },
        {
          "type": "function void(int client, int weapon)",
          "docStart": 8064,
          "docEnd": 8169
        },
        {
          "type": "function Action(int entity, int& maxhealth)",
          "docStart": 8214,
          "docEnd": 8246
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype)",
          "docStart": 8297,
          "docEnd": 8496
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& weapon, float damageForce[3], float damagePosition[3])",
          "docStart": 8592,
          "docEnd": 8608
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& weapon, float damageForce[3], float damagePosition[3], int damagecustom)",
          "docStart": 8764,
          "docEnd": 8954
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype)",
          "docStart": 9132,
          "docEnd": 9177
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int weapon, const float damageForce[3], const float damagePosition[3])"
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int weapon, const float damageForce[3], const float damagePosition[3], int damagecustom)"
        },
        {
          "type": "function void(int client, int shots, const char[] weaponname)",
          "docStart": 9608,
          "docEnd": 9626
        },
        {
          "type": "function Action(int victim, int& attacker, int& inflictor, float& damage, int& damagetype, int& ammotype, int hitbox, int hitgroup)",
          "docStart": 9695,
          "docEnd": 9709
        },
        {
          "type": "function void(int victim, int attacker, int inflictor, float damage, int damagetype, int ammotype, int hitbox, int hitgroup)",
          "docStart": 9848,
          "docEnd": 9866
        },
        {
          "type": "function bool(int entity, int collisiongroup, int contentsmask, bool originalResult)",
          "docStart": 9998,
          "docEnd": 10014
        },
        {
          "type": "function Action(int entity, int activator, int caller, UseType type, float value)",
          "docStart": 10106,
          "docEnd": 10112
        },
        {
          "type": "function void(int entity, int activator, int caller, UseType type, float value)",
          "docStart": 10201,
          "docEnd": 10211
        },
        {
          "type": "function Action(int weapon)",
          "docStart": 10298,
          "docEnd": 10307
        },
        {
          "type": "function void(int weapon, bool bSuccessful)",
          "docStart": 10342,
          "docEnd": 10356
        },
        {
          "type": "function bool(int client, bool origRet)",
          "docStart": 10407,
          "docEnd": 10427
        }
      ]
    }
  ],
  "typedefs": []
}