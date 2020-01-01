{
  "functions": [
    {
      "name": "NominateMap",
      "docStart": 2284,
      "docEnd": 2720,
      "kind": "native",
      "returnType": "NominateResult",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        },
        {
          "type": "bool",
          "name": "force",
          "decl": "bool force"
        },
        {
          "type": "int",
          "name": "owner",
          "decl": "int owner"
        }
      ]
    },
    {
      "name": "RemoveNominationByMap",
      "docStart": 2801,
      "docEnd": 3024,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        }
      ]
    },
    {
      "name": "RemoveNominationByOwner",
      "docStart": 3082,
      "docEnd": 3321,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "owner",
          "decl": "int owner"
        }
      ]
    },
    {
      "name": "GetExcludeMapList",
      "docStart": 3374,
      "docEnd": 3502,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "ArrayList",
          "name": "array",
          "decl": "ArrayList array"
        }
      ]
    },
    {
      "name": "GetNominatedMapList",
      "docStart": 3555,
      "docEnd": 3778,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "ArrayList",
          "name": "maparray",
          "decl": "ArrayList maparray"
        },
        {
          "type": "ArrayList",
          "name": "ownerarray",
          "decl": "ArrayList ownerarray"
        }
      ]
    },
    {
      "name": "CanMapChooserStartVote",
      "docStart": 3865,
      "docEnd": 4023,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "InitiateMapChooserVote",
      "docStart": 4066,
      "docEnd": 4437,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "MapChange",
          "name": "when",
          "decl": "MapChange when"
        },
        {
          "type": "ArrayList",
          "name": "inputarray",
          "decl": "ArrayList inputarray"
        }
      ]
    },
    {
      "name": "HasEndOfMapVoteFinished",
      "docStart": 4521,
      "docEnd": 4651,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "EndOfMapVoteEnabled",
      "docStart": 4695,
      "docEnd": 4825,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "OnNominationRemoved",
      "docStart": 4865,
      "docEnd": 5003,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        },
        {
          "type": "int",
          "name": "owner",
          "decl": "int owner"
        }
      ]
    },
    {
      "name": "OnMapVoteStarted",
      "docStart": 5071,
      "docEnd": 5125,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "__pl_mapchooser_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "NominateResult",
      "entries": [
        {
          "name": "Nominate_Added",
          "docStart": 1694,
          "docEnd": 1739
        },
        {
          "name": "Nominate_Replaced",
          "docStart": 1766,
          "docEnd": 1815
        },
        {
          "name": "Nominate_AlreadyInVote",
          "docStart": 1842,
          "docEnd": 1886
        },
        {
          "name": "Nominate_InvalidMap",
          "docStart": 1913,
          "docEnd": 1956
        },
        {
          "name": "Nominate_VoteFull",
          "docStart": 1983,
          "docEnd": 2036
        }
      ]
    },
    {
      "name": "MapChange",
      "entries": [
        {
          "name": "MapChange_Instant",
          "docStart": 2088,
          "docEnd": 2148
        },
        {
          "name": "MapChange_RoundEnd",
          "docStart": 2175,
          "docEnd": 2216
        },
        {
          "name": "MapChange_MapEnd",
          "docStart": 2243,
          "docEnd": 2276
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}