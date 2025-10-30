PokemonCenter_Alt_MapScripts::
	.byte 0

PokemonCenter_Alt_EventScript_Nurse::
    setvar VAR_0x800B, LOCALID_ALT_NURSE
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end
