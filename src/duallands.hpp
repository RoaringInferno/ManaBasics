#pragma once

#include "mana.hpp"
#include "land.hpp"

const Land SurveilLandData[] = {
    {"Meticulous Archive", ColorCombination::Azorius},
    {"Undercity Sewers", ColorCombination::Dimir},
    {"Raucous Theater", ColorCombination::Rakdos},
    {"Commercial District", ColorCombination::Gruul},
    {"Lush Portico", ColorCombination::Selesnya},
    {"Shadowy Backstreet", ColorCombination::Orzhov},
    {"Thundering Falls", ColorCombination::Izzet},
    {"Underground Mortuary", ColorCombination::Golgari},
    {"Elegant Parlor", ColorCombination::Boros},
    {"Hedge Maze", ColorCombination::Simic}
};

const Land GainLandData[] = {
    {"Tranquil Cove", ColorCombination::Azorius},
    {"Dismal Backwater", ColorCombination::Dimir},
    {"Bloodfell Caves", ColorCombination::Rakdos},
    {"Rugged Highlands", ColorCombination::Gruul},
    {"Blossoming Sands", ColorCombination::Selesnya},

    {"Scoured Barrens", ColorCombination::Orzhov},
    {"Swiftwater Cliffs", ColorCombination::Izzet},
    {"Jungle Hollow", ColorCombination::Golgari},
    {"Wind-Scarred Crag", ColorCombination::Boros},
    {"Thornwood Falls", ColorCombination::Simic}
};

const Land FastLandData[] = {
    {"Seachrome Coast", ColorCombination::Azorius},
    {"Darkslick Shores", ColorCombination::Dimir},
    {"Blackcleave Cliffs", ColorCombination::Rakdos},
    {"Copperline Gorge", ColorCombination::Gruul},
    {"Razorverge Thicket", ColorCombination::Selesnya},
    {"Concealed Courtyard", ColorCombination::Orzhov},
    {"Spirebluff Canal", ColorCombination::Izzet},
    {"Blooming Marsh", ColorCombination::Golgari},
    {"Inspiring Vantage", ColorCombination::Boros},
    {"Botanical Sanctum", ColorCombination::Simic}
};

const Land PainLandData[] = {
    {"Adarkar Wastes", ColorCombination::Azorius},
    {"Underground River", ColorCombination::Dimir},
    {"Sulfurous Springs", ColorCombination::Rakdos},
    {"Karplusan Forest", ColorCombination::Gruul},
    {"Brushland", ColorCombination::Selesnya},
    {"Caves of Koilos", ColorCombination::Orzhov},
    {"Shivan Reef", ColorCombination::Izzet},
    {"Llanowar Wastes", ColorCombination::Golgari},
    {"Battlefield Forge", ColorCombination::Boros},
    {"Yavimaya Coast", ColorCombination::Simic}
};

const Land FetchableTappedLandData[] = {
    {"Idyllic Beachfront", ColorCombination::Azorius},
    {"Contaminated Aquifer", ColorCombination::Dimir},
    {"Geothermal Bog", ColorCombination::Rakdos},
    {"Wooded Ridgeline", ColorCombination::Gruul},
    {"Radiant Grove", ColorCombination::Selesnya},
    {"Sunlit Marsh", ColorCombination::Orzhov},
    {"Molten Tributary", ColorCombination::Izzet},
    {"Haunted Mire", ColorCombination::Golgari},
    {"Sacred Peaks", ColorCombination::Boros},
    {"Tangled Islet", ColorCombination::Simic}
};

const Land SlowLandData[] = {
    {"Deserted Beach", ColorCombination::Azorius},
    {"Shipwreck Marsh", ColorCombination::Dimir},
    {"Haunted Ridge", ColorCombination::Rakdos},
    {"Rockfall Vale", ColorCombination::Gruul},
    {"Overgrown Farmland", ColorCombination::Selesnya},
    {"Shattered Sanctum", ColorCombination::Orzhov},
    {"Stormcarved Coast", ColorCombination::Izzet},
    {"Deathcap Glade", ColorCombination::Golgari},
    {"Sundown Pass", ColorCombination::Boros},
    {"Dreamroot Cascade", ColorCombination::Simic}
};

const Land RevealLandData[] = {
    // Allied colored
    {"Port Town", ColorCombination::Azorius},
    {"Choked Estuary", ColorCombination::Dimir},
    {"Foreboding Ruins", ColorCombination::Rakdos},
    {"Game Trail", ColorCombination::Gruul},
    {"Fortified Village", ColorCombination::Selesnya},

    // Enemy colored
    {"Shineshadow Snarl", ColorCombination::Orzhov},
    {"Frostboil Snarl", ColorCombination::Izzet},
    {"Necroblossom Snarl", ColorCombination::Golgari},
    {"Furycalm Snarl", ColorCombination::Boros},
    {"Vineglimmer Snarl", ColorCombination::Simic}
};

const Land KaldheimSnowLandData[] = {
    {"Glacial Floodplain", ColorCombination::Azorius},
    {"Ice Tunnel", ColorCombination::Dimir},
    {"Sulfurous Mire", ColorCombination::Rakdos},
    {"Highland Forest", ColorCombination::Gruul},
    {"Arctic Treeline", ColorCombination::Selesnya},
    {"Snowfield Sinkhole", ColorCombination::Orzhov},
    {"Volatile Fjord", ColorCombination::Izzet},
    {"Woodland Chasm", ColorCombination::Golgari},
    {"Alpine Meadow", ColorCombination::Boros},
    {"Rimewood Falls", ColorCombination::Simic}
};

const Land PathwayLandData[] = {
    {"Hengegate Pathway // Mistgate Pathway", ColorCombination::Azorius},
    {"Clearwater Pathway // Murkwater Pathway", ColorCombination::Dimir},
    {"Blightstep Pathway // Searstep Pathway", ColorCombination::Rakdos},
    {"Cragcrown Pathway // Timbercrown Pathway", ColorCombination::Gruul},
    {"Branchloft Pathway // Boulderloft Pathway", ColorCombination::Selesnya},
    {"Brightclimb Pathway // Grimclimb Pathway", ColorCombination::Orzhov},
    {"Riverglide Pathway // Lavaglide Pathway", ColorCombination::Izzet},
    {"Darkbore Pathway // Slitherbore Pathway", ColorCombination::Golgari},
    {"Needleverge Pathway // Pillarverge Pathway", ColorCombination::Boros},
    {"Barkchannel Pathway // Tidechannel Pathway", ColorCombination::Simic},
};

const Land ScryLandData[] = {
    {"Temple of Enlightenment", ColorCombination::Azorius},
    {"Temple of Deceit", ColorCombination::Dimir},
    {"Temple of Malice", ColorCombination::Rakdos},
    {"Temple of Abandon", ColorCombination::Gruul},
    {"Temple of Plenty", ColorCombination::Selesnya},
    {"Temple of Silence", ColorCombination::Orzhov},
    {"Temple of Epiphany", ColorCombination::Izzet},
    {"Temple of Malady", ColorCombination::Golgari},
    {"Temple of Triumph", ColorCombination::Boros},
    {"Temple of Mystery", ColorCombination::Simic}
};

const Land ShockLandData[] = {
    {"Hallowed Fountain", ColorCombination::Azorius},
    {"Watery Grave", ColorCombination::Dimir},
    {"Blood Crypt", ColorCombination::Rakdos},
    {"Stomping Ground", ColorCombination::Gruul},
    {"Temple Garden", ColorCombination::Selesnya},
    {"Godless Shrine", ColorCombination::Orzhov},
    {"Steam Vents", ColorCombination::Izzet},
    {"Overgrown Tomb", ColorCombination::Golgari},
    {"Sacred Foundry", ColorCombination::Boros},
    {"Breeding Pool", ColorCombination::Simic}
};

const Land GuildgateLandData[] = {
    {"Azorius Guildgate", ColorCombination::Azorius},
    {"Dimir Guildgate", ColorCombination::Dimir},
    {"Rakdos Guildgate", ColorCombination::Rakdos},
    {"Gruul Guildgate", ColorCombination::Gruul},
    {"Selesnya Guildgate", ColorCombination::Selesnya},
    {"Orzhov Guildgate", ColorCombination::Orzhov},
    {"Izzet Guildgate", ColorCombination::Izzet},
    {"Golgari Guildgate", ColorCombination::Golgari},
    {"Boros Guildgate", ColorCombination::Boros},
    {"Simic Guildgate", ColorCombination::Simic}
};

const Land CheckLandData[] = {
    {"Glacial Fortress", ColorCombination::Azorius},
    {"Drowned Catacomb", ColorCombination::Dimir},
    {"Dragonskull Summit", ColorCombination::Rakdos},
    {"Rootbound Crag", ColorCombination::Gruul},
    {"Sunpetal Grove", ColorCombination::Selesnya},
    {"Isolated Chapel", ColorCombination::Orzhov},
    {"Sulfur Falls", ColorCombination::Izzet},
    {"Woodland Cemetery", ColorCombination::Golgari},
    {"Clifftop Retreat", ColorCombination::Boros},
    {"Hinterland Harbor", ColorCombination::Simic}
};

const Land GenericLandData[] = {
    {"Meandering River", ColorCombination::Azorius},
    {"Submerged Boneyard", ColorCombination::Dimir},
    {"Cinder Barrens", ColorCombination::Rakdos},
    {"Timber Gorge", ColorCombination::Gruul},
    {"Tranquil Expanse", ColorCombination::Selesnya},
    {"Forsaken Sanctuary", ColorCombination::Orzhov},
    {"Highland Lake", ColorCombination::Izzet},
    {"Foul Orchard", ColorCombination::Golgari},
    {"Stone Quarry", ColorCombination::Boros},
    {"Woodland Stream", ColorCombination::Simic}
};

const Land FetchLandData[] = {
    {"Flooded Strand", ColorCombination::Azorius},
    {"Polluted Delta", ColorCombination::Dimir},
    {"Bloodstained Mire", ColorCombination::Rakdos},
    {"Wooded Foothills", ColorCombination::Gruul},
    {"Windswept Heath", ColorCombination::Selesnya},
    {"Marsh Flats", ColorCombination::Orzhov},
    {"Scalding Tarn", ColorCombination::Izzet},
    {"Verdant Catacombs", ColorCombination::Golgari},
    {"Arid Mesa", ColorCombination::Boros},
    {"Misty Rainforest", ColorCombination::Simic}
};

const Land ArtifactLandData[] = {
    {"Razortide Bridge", ColorCombination::Azorius},
    {"Mistvault Bridge", ColorCombination::Dimir},
    {"Drossforge Bridge", ColorCombination::Rakdos},
    {"Slagwoods Bridge", ColorCombination::Gruul},
    {"Thornglint Bridge", ColorCombination::Selesnya},
    {"Goldmire Bridge", ColorCombination::Orzhov},
    {"Silverbluff Bridge", ColorCombination::Izzet},
    {"Darkmoss Bridge", ColorCombination::Golgari},
    {"Rustvale Bridge", ColorCombination::Boros},
    {"Tanglepool Bridge", ColorCombination::Simic}
};

const Land FilterLandData[] = {
    {"Mystic Gate", ColorCombination::Azorius},
    {"Sunken Ruins", ColorCombination::Dimir},
    {"Graven Cairns", ColorCombination::Rakdos},
    {"Fire-Lit Thicket", ColorCombination::Gruul},
    {"Wooded Bastion", ColorCombination::Selesnya},
    {"Fetid Heath", ColorCombination::Orzhov},
    {"Cascade Bluffs", ColorCombination::Izzet},
    {"Twilight Mire", ColorCombination::Golgari},
    {"Rugged Prairie", ColorCombination::Boros},
    {"Flooded Grove", ColorCombination::Simic}
};

const Land BounceLandData[] = {
    {"Azorius Chancery", ColorCombination::Azorius},
    {"Dimir Aqueduct", ColorCombination::Dimir},
    {"Rakdos Carnarium", ColorCombination::Rakdos},
    {"Gruul Turf", ColorCombination::Gruul},
    {"Selesnya Sanctuary", ColorCombination::Selesnya},
    {"Orzhov Basilica", ColorCombination::Orzhov},
    {"Izzet Boilerworks", ColorCombination::Izzet},
    {"Golgari Rot Farm", ColorCombination::Golgari},
    {"Boros Garrison", ColorCombination::Boros},
    {"Simic Growth Chamber", ColorCombination::Simic}
};

const Land BattlebondLandData[] = {
    {"Sea of Clouds", ColorCombination::Azorius},
    {"Morphic Pool", ColorCombination::Dimir},
    {"Luxury Suite", ColorCombination::Rakdos},
    {"Spire Garden", ColorCombination::Gruul},
    {"Bountiful Promenade", ColorCombination::Selesnya},
    {"Vault of Champions", ColorCombination::Orzhov},
    {"Training Center", ColorCombination::Izzet},
    {"Undergrowth Stadium", ColorCombination::Golgari},
    {"Spectator Seating", ColorCombination::Boros},
    {"Rejuvenating Springs", ColorCombination::Simic}
};

const Land OdysseyFilterLandData[] = {
    {"Skycloud Expanse", ColorCombination::Azorius},
    {"Darkwater Catacombs", ColorCombination::Dimir},
    {"Shadowblood Ridge", ColorCombination::Rakdos},
    {"Mossfire Valley", ColorCombination::Gruul},
    {"Sungrass Prairie", ColorCombination::Selesnya},
    {"Desolate Mire", ColorCombination::Orzhov},
    {"Ferrous Lake", ColorCombination::Izzet},
    {"Viridescent Bog", ColorCombination::Golgari},
    {"Sunscorched Divide", ColorCombination::Boros},
    {"Overflowing Basin", ColorCombination::Simic}
};

const Land DualLandData[] = {
    {"Tundra", ColorCombination::Azorius},
    {"Underground Sea", ColorCombination::Dimir},
    {"Badlands", ColorCombination::Rakdos},
    {"Taiga", ColorCombination::Gruul},
    {"Savannah", ColorCombination::Selesnya},
    {"Scrubland", ColorCombination::Orzhov},
    {"Volcanic Island", ColorCombination::Izzet},
    {"Bayou", ColorCombination::Golgari},
    {"Plateau", ColorCombination::Boros},
    {"Tropical Island", ColorCombination::Simic}
};