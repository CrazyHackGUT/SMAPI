{
  "functions": [
    {
      "name": "NominateMap",
      "docStart": 2257,
      "docEnd": 2634,
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
      "docStart": 2715,
      "docEnd": 2918,
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
      "docStart": 2976,
      "docEnd": 3197,
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
      "docStart": 3250,
      "docEnd": 3371,
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
      "docStart": 3424,
      "docEnd": 3640,
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
      "docStart": 3727,
      "docEnd": 3874,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "InitiateMapChooserVote",
      "docStart": 3917,
      "docEnd": 4278,
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
      "docStart": 4362,
      "docEnd": 4481,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "EndOfMapVoteEnabled",
      "docStart": 4525,
      "docEnd": 4644,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "OnNominationRemoved",
      "docStart": 4684,
      "docEnd": 4822,
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
      "docStart": 4890,
      "docEnd": 4944,
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
          "docStart": 1690,
          "docEnd": 1735
        },
        {
          "name": "Nominate_Replaced",
          "docStart": 1758,
          "docEnd": 1807
        },
        {
          "name": "Nominate_AlreadyInVote",
          "docStart": 1834,
          "docEnd": 1878
        },
        {
          "name": "Nominate_InvalidMap",
          "docStart": 1902,
          "docEnd": 1945
        },
        {
          "name": "Nominate_VoteFull",
          "docStart": 1968,
          "docEnd": 2021
        }
      ]
    },
    {
      "name": "MapChange",
      "entries": [
        {
          "name": "MapChange_Instant",
          "docStart": 2069,
          "docEnd": 2129
        },
        {
          "name": "MapChange_RoundEnd",
          "docStart": 2153,
          "docEnd": 2194
        },
        {
          "name": "MapChange_MapEnd",
          "docStart": 2216,
          "docEnd": 2249
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}