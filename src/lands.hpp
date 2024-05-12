#pragma once

#include "mana.hpp"
#include "land.hpp"
#include "landcycle.hpp"

const Land lands[] = {
    {"Tranquil Cove", ColorCombination::AZORIUS, LandCycle::Gain},
    {"Dismal Backwater", ColorCombination::DIMIR, LandCycle::Gain},
    {"Bloodfell Caves", ColorCombination::RAKDOS, LandCycle::Gain},
    {"Rugged Highlands", ColorCombination::GRUUL, LandCycle::Gain},
    {"Blossoming Sands", ColorCombination::SELESNYA, LandCycle::Gain},
    {"Scoured Barrens", ColorCombination::ORZHOV, LandCycle::Gain},
    {"Swiftwater Cliffs", ColorCombination::IZZET, LandCycle::Gain},
    {"Jungle Hollow", ColorCombination::GOLGARI, LandCycle::Gain},
    {"Wind-Scarred Crag", ColorCombination::BOROS, LandCycle::Gain},
    {"Thornwood Falls", ColorCombination::SIMIC, LandCycle::Gain},
    {"Seachrome Coast", ColorCombination::AZORIUS, LandCycle::Fast},
    {"Darkslick Shores", ColorCombination::DIMIR, LandCycle::Fast},
    {"Blackcleave Cliffs", ColorCombination::RAKDOS, LandCycle::Fast},
    {"Copperline Gorge", ColorCombination::GRUUL, LandCycle::Fast},
    {"Razorverge Thicket", ColorCombination::SELESNYA, LandCycle::Fast},
    {"Concealed Courtyard", ColorCombination::ORZHOV, LandCycle::Fast},
    {"Spirebluff Canal", ColorCombination::IZZET, LandCycle::Fast},
    {"Blooming Marsh", ColorCombination::GOLGARI, LandCycle::Fast},
    {"Inspiring Vantage", ColorCombination::BOROS, LandCycle::Fast},
    {"Botanical Sanctum", ColorCombination::SIMIC, LandCycle::Fast},
    {"Adarkar Wastes", ColorCombination::AZORIUS, LandCycle::Pain},
    {"Underground River", ColorCombination::DIMIR, LandCycle::Pain},
    {"Sulfurous Springs", ColorCombination::RAKDOS, LandCycle::Pain},
    {"Karplusan Forest", ColorCombination::GRUUL, LandCycle::Pain},
    {"Brushland", ColorCombination::SELESNYA, LandCycle::Pain},
    {"Caves of Koilos", ColorCombination::ORZHOV, LandCycle::Pain},
    {"Shivan Reef", ColorCombination::IZZET, LandCycle::Pain},
    {"Llanowar Wastes", ColorCombination::GOLGARI, LandCycle::Pain},
    {"Battlefield Forge", ColorCombination::BOROS, LandCycle::Pain},
    {"Yavimaya Coast", ColorCombination::SIMIC, LandCycle::Pain},
    {"Idyllic Beachfront", ColorCombination::AZORIUS, LandCycle::FetchableTapped},
    {"Contaminated Aquifer", ColorCombination::DIMIR, LandCycle::FetchableTapped},
    {"Geothermal Bog", ColorCombination::RAKDOS, LandCycle::FetchableTapped},
    {"Wooded Ridgeline", ColorCombination::GRUUL, LandCycle::FetchableTapped},
    {"Radiant Grove", ColorCombination::SELESNYA, LandCycle::FetchableTapped},
    {"Sunlit Marsh", ColorCombination::ORZHOV, LandCycle::FetchableTapped},
    {"Molten Tributary", ColorCombination::IZZET, LandCycle::FetchableTapped},
    {"Haunted Mire", ColorCombination::GOLGARI, LandCycle::FetchableTapped},
    {"Sacred Peaks", ColorCombination::BOROS, LandCycle::FetchableTapped},
    {"Tangled Islet", ColorCombination::SIMIC, LandCycle::FetchableTapped},
    {"Deserted Beach", ColorCombination::AZORIUS, LandCycle::Slow},
    {"Shipwreck Marsh", ColorCombination::DIMIR, LandCycle::Slow},
    {"Haunted Ridge", ColorCombination::RAKDOS, LandCycle::Slow},
    {"Rockfall Vale", ColorCombination::GRUUL, LandCycle::Slow},
    {"Overgrown Farmland", ColorCombination::SELESNYA, LandCycle::Slow},
    {"Shattered Sanctum", ColorCombination::ORZHOV, LandCycle::Slow},
    {"Stormcarved Coast", ColorCombination::IZZET, LandCycle::Slow},
    {"Deathcap Glade", ColorCombination::GOLGARI, LandCycle::Slow},
    {"Sundown Pass", ColorCombination::BOROS, LandCycle::Slow},
    {"Dreamroot Cascade", ColorCombination::SIMIC, LandCycle::Slow},
    {"Shineshadow Snarl", ColorCombination::ORZHOV, LandCycle::Reveal},
    {"Frostboil Snarl", ColorCombination::IZZET, LandCycle::Reveal},
    {"Necroblossom Snarl", ColorCombination::GOLGARI, LandCycle::Reveal},
    {"Furycalm Snarl", ColorCombination::BOROS, LandCycle::Reveal},
    {"Vineglimmer Snarl", ColorCombination::SIMIC, LandCycle::Reveal},
    {"Glacial Floodplain", ColorCombination::AZORIUS, LandCycle::KaldheimSnow},
    {"Ice Tunnel", ColorCombination::DIMIR, LandCycle::KaldheimSnow},
    {"Sulfurous Mire", ColorCombination::RAKDOS, LandCycle::KaldheimSnow},
    {"Highland Forest", ColorCombination::GRUUL, LandCycle::KaldheimSnow},
    {"Arctic Treeline", ColorCombination::SELESNYA, LandCycle::KaldheimSnow},
    {"Snowfield Sinkhole", ColorCombination::ORZHOV, LandCycle::KaldheimSnow},
    {"Volatile Fjord", ColorCombination::IZZET, LandCycle::KaldheimSnow},
    {"Woodland Chasm", ColorCombination::GOLGARI, LandCycle::KaldheimSnow},
    {"Alpine Meadow", ColorCombination::BOROS, LandCycle::KaldheimSnow},
    {"Rimewood Falls", ColorCombination::SIMIC, LandCycle::KaldheimSnow},
    {"Hengegate Pathway // Mistgate Pathway", ColorCombination::AZORIUS, LandCycle::Pathway},
    {"Clearwater Pathway // Murkwater Pathway", ColorCombination::DIMIR, LandCycle::Pathway},
    {"Blightstep Pathway // Searstep Pathway", ColorCombination::RAKDOS, LandCycle::Pathway},
    {"Cragcrown Pathway // Timbercrown Pathway", ColorCombination::GRUUL, LandCycle::Pathway},
    {"Branchloft Pathway // Boulderloft Pathway", ColorCombination::SELESNYA, LandCycle::Pathway},
    {"Brightclimb Pathway // Grimclimb Pathway", ColorCombination::ORZHOV, LandCycle::Pathway},
    {"Riverglide Pathway // Lavaglide Pathway", ColorCombination::IZZET, LandCycle::Pathway},
    {"Darkbore Pathway // Slitherbore Pathway", ColorCombination::GOLGARI, LandCycle::Pathway},
    {"Needleverge Pathway // Pillarverge Pathway", ColorCombination::BOROS, LandCycle::Pathway},
    {"Barkchannel Pathway // Tidechannel Pathway", ColorCombination::SIMIC, LandCycle::Pathway},
    {"Temple of Enlightenment", ColorCombination::AZORIUS, LandCycle::Scry},
    {"Temple of Deceit", ColorCombination::DIMIR, LandCycle::Scry},
    {"Temple of Malice", ColorCombination::RAKDOS, LandCycle::Scry},
    {"Temple of Abandon", ColorCombination::GRUUL, LandCycle::Scry},
    {"Temple of Plenty", ColorCombination::SELESNYA, LandCycle::Scry},
    {"Temple of Silence", ColorCombination::ORZHOV, LandCycle::Scry},
    {"Temple of Epiphany", ColorCombination::IZZET, LandCycle::Scry},
    {"Temple of Malady", ColorCombination::GOLGARI, LandCycle::Scry},
    {"Temple of Triumph", ColorCombination::BOROS, LandCycle::Scry},
    {"Temple of Mystery", ColorCombination::SIMIC, LandCycle::Scry},
    {"Hallowed Fountain", ColorCombination::AZORIUS, LandCycle::Shock},
    {"Watery Grave", ColorCombination::DIMIR, LandCycle::Shock},
    {"Blood Crypt", ColorCombination::RAKDOS, LandCycle::Shock},
    {"Stomping Ground", ColorCombination::GRUUL, LandCycle::Shock},
    {"Temple Garden", ColorCombination::SELESNYA, LandCycle::Shock},
    {"Godless Shrine", ColorCombination::ORZHOV, LandCycle::Shock},
    {"Steam Vents", ColorCombination::IZZET, LandCycle::Shock},
    {"Overgrown Tomb", ColorCombination::GOLGARI, LandCycle::Shock},
    {"Sacred Foundry", ColorCombination::BOROS, LandCycle::Shock},
    {"Breeding Pool", ColorCombination::SIMIC, LandCycle::Shock},
    {"Azorius Guildgate", ColorCombination::AZORIUS, LandCycle::Guildgate},
    {"Dimir Guildgate", ColorCombination::DIMIR, LandCycle::Guildgate},
    {"Rakdos Guildgate", ColorCombination::RAKDOS, LandCycle::Guildgate},
    {"Gruul Guildgate", ColorCombination::GRUUL, LandCycle::Guildgate},
    {"Selesnya Guildgate", ColorCombination::SELESNYA, LandCycle::Guildgate},
    {"Orzhov Guildgate", ColorCombination::ORZHOV, LandCycle::Guildgate},
    {"Izzet Guildgate", ColorCombination::IZZET, LandCycle::Guildgate},
    {"Golgari Guildgate", ColorCombination::GOLGARI, LandCycle::Guildgate},
    {"Boros Guildgate", ColorCombination::BOROS, LandCycle::Guildgate},
    {"Simic Guildgate", ColorCombination::SIMIC, LandCycle::Guildgate},
    {"Glacial Fortress", ColorCombination::AZORIUS, LandCycle::Check},
    {"Drowned Catacomb", ColorCombination::DIMIR, LandCycle::Check},
    {"Dragonskull Summit", ColorCombination::RAKDOS, LandCycle::Check},
    {"Rootbound Crag", ColorCombination::GRUUL, LandCycle::Check},
    {"Sunpetal Grove", ColorCombination::SELESNYA, LandCycle::Check},
    {"Isolated Chapel", ColorCombination::ORZHOV, LandCycle::Check},
    {"Sulfur Falls", ColorCombination::IZZET, LandCycle::Check},
    {"Woodland Cemetery", ColorCombination::GOLGARI, LandCycle::Check},
    {"Clifftop Retreat", ColorCombination::BOROS, LandCycle::Check},
    {"Hinterland Harbor", ColorCombination::SIMIC, LandCycle::Check},
    {"Meandering River", ColorCombination::AZORIUS, LandCycle::Generic},
    {"Submerged Boneyard", ColorCombination::DIMIR, LandCycle::Generic},
    {"Cinder Barrens", ColorCombination::RAKDOS, LandCycle::Generic},
    {"Timber Gorge", ColorCombination::GRUUL, LandCycle::Generic},
    {"Tranquil Expanse", ColorCombination::SELESNYA, LandCycle::Generic},
    {"Forsaken Sanctuary", ColorCombination::ORZHOV, LandCycle::Generic},
    {"Highland Lake", ColorCombination::IZZET, LandCycle::Generic},
    {"Foul Orchard", ColorCombination::GOLGARI, LandCycle::Generic},
    {"Stone Quarry", ColorCombination::BOROS, LandCycle::Generic},
    {"Woodland Stream", ColorCombination::SIMIC, LandCycle::Generic},
    {"Flooded Strand", ColorCombination::AZORIUS, LandCycle::Fetch},
    {"Polluted Delta", ColorCombination::DIMIR, LandCycle::Fetch},
    {"Bloodstained Mire", ColorCombination::RAKDOS, LandCycle::Fetch},
    {"Wooded Foothills", ColorCombination::GRUUL, LandCycle::Fetch},
    {"Windswept Heath", ColorCombination::SELESNYA, LandCycle::Fetch},
    {"Marsh Flats", ColorCombination::ORZHOV, LandCycle::Fetch},
    {"Scalding Tarn", ColorCombination::IZZET, LandCycle::Fetch},
    {"Verdant Catacombs", ColorCombination::GOLGARI, LandCycle::Fetch},
    {"Arid Mesa", ColorCombination::BOROS, LandCycle::Fetch},
    {"Misty Rainforest", ColorCombination::SIMIC, LandCycle::Fetch},
    {"Razortide Bridge", ColorCombination::AZORIUS, LandCycle::Artifact},
    {"Mistvault Bridge", ColorCombination::DIMIR, LandCycle::Artifact},
    {"Drossforge Bridge", ColorCombination::RAKDOS, LandCycle::Artifact},
    {"Slagwoods Bridge", ColorCombination::GRUUL, LandCycle::Artifact},
    {"Thornglint Bridge", ColorCombination::SELESNYA, LandCycle::Artifact},
    {"Goldmire Bridge", ColorCombination::ORZHOV, LandCycle::Artifact},
    {"Silverbluff Bridge", ColorCombination::IZZET, LandCycle::Artifact},
    {"Darkmoss Bridge", ColorCombination::GOLGARI, LandCycle::Artifact},
    {"Rustvale Bridge", ColorCombination::BOROS, LandCycle::Artifact},
    {"Tanglepool Bridge", ColorCombination::SIMIC, LandCycle::Artifact},
    {"Mystic Gate", ColorCombination::AZORIUS, LandCycle::Filter},
    {"Sunken Ruins", ColorCombination::DIMIR, LandCycle::Filter},
    {"Graven Cairns", ColorCombination::RAKDOS, LandCycle::Filter},
    {"Fire-Lit Thicket", ColorCombination::GRUUL, LandCycle::Filter},
    {"Wooded Bastion", ColorCombination::SELESNYA, LandCycle::Filter},
    {"Fetid Heath", ColorCombination::ORZHOV, LandCycle::Filter},
    {"Cascade Bluffs", ColorCombination::IZZET, LandCycle::Filter},
    {"Twilight Mire", ColorCombination::GOLGARI, LandCycle::Filter},
    {"Rugged Prairie", ColorCombination::BOROS, LandCycle::Filter},
    {"Flooded Grove", ColorCombination::SIMIC, LandCycle::Filter},
    {"Azorius Chancery", ColorCombination::AZORIUS, LandCycle::Bounce},
    {"Dimir Aqueduct", ColorCombination::DIMIR, LandCycle::Bounce},
    {"Rakdos Carnarium", ColorCombination::RAKDOS, LandCycle::Bounce},
    {"Gruul Turf", ColorCombination::GRUUL, LandCycle::Bounce},
    {"Selesnya Sanctuary", ColorCombination::SELESNYA, LandCycle::Bounce},
    {"Orzhov Basilica", ColorCombination::ORZHOV, LandCycle::Bounce},
    {"Izzet Boilerworks", ColorCombination::IZZET, LandCycle::Bounce},
    {"Golgari Rot Farm", ColorCombination::GOLGARI, LandCycle::Bounce},
    {"Boros Garrison", ColorCombination::BOROS, LandCycle::Bounce},
    {"Simic Growth Chamber", ColorCombination::SIMIC, LandCycle::Bounce},
    {"Sea of Clouds", ColorCombination::AZORIUS, LandCycle::Battlebond},
    {"Morphic Pool", ColorCombination::DIMIR, LandCycle::Battlebond},
    {"Luxury Suite", ColorCombination::RAKDOS, LandCycle::Battlebond},
    {"Spire Garden", ColorCombination::GRUUL, LandCycle::Battlebond},
    {"Bountiful Promenade", ColorCombination::SELESNYA, LandCycle::Battlebond},
    {"Vault of Champions", ColorCombination::ORZHOV, LandCycle::Battlebond},
    {"Training Center", ColorCombination::IZZET, LandCycle::Battlebond},
    {"Undergrowth Stadium", ColorCombination::GOLGARI, LandCycle::Battlebond},
    {"Spectator Seating", ColorCombination::BOROS, LandCycle::Battlebond},
    {"Rejuvenating Springs", ColorCombination::SIMIC, LandCycle::Battlebond},
    {"Skycloud Expanse", ColorCombination::AZORIUS, LandCycle::OdysseyFilter},
    {"Darkwater Catacombs", ColorCombination::DIMIR, LandCycle::OdysseyFilter},
    {"Shadowblood Ridge", ColorCombination::RAKDOS, LandCycle::OdysseyFilter},
    {"Mossfire Valley", ColorCombination::GRUUL, LandCycle::OdysseyFilter},
    {"Sungrass Prairie", ColorCombination::SELESNYA, LandCycle::OdysseyFilter},
    {"Desolate Mire", ColorCombination::ORZHOV, LandCycle::OdysseyFilter},
    {"Ferrous Lake", ColorCombination::IZZET, LandCycle::OdysseyFilter},
    {"Viridescent Bog", ColorCombination::GOLGARI, LandCycle::OdysseyFilter},
    {"Sunscorched Divide", ColorCombination::BOROS, LandCycle::OdysseyFilter},
    {"Overflowing Basin", ColorCombination::SIMIC, LandCycle::OdysseyFilter},
    {"Tundra", ColorCombination::AZORIUS, LandCycle::Dual},
    {"Underground Sea", ColorCombination::DIMIR, LandCycle::Dual},
    {"Badlands", ColorCombination::RAKDOS, LandCycle::Dual},
    {"Taiga", ColorCombination::GRUUL, LandCycle::Dual},
    {"Savannah", ColorCombination::SELESNYA, LandCycle::Dual},
    {"Scrubland", ColorCombination::ORZHOV, LandCycle::Dual},
    {"Volcanic Island", ColorCombination::IZZET, LandCycle::Dual},
    {"Bayou", ColorCombination::GOLGARI, LandCycle::Dual},
    {"Plateau", ColorCombination::BOROS, LandCycle::Dual},
    {"Tropical Island", ColorCombination::SIMIC, LandCycle::Dual},
    {"Plains", ColorCombination::WHITE, LandCycle::Basic},
    {"Island", ColorCombination::BLUE, LandCycle::Basic},
    {"Swamp", ColorCombination::BLACK, LandCycle::Basic},
    {"Mountain", ColorCombination::RED, LandCycle::Basic},
    {"Forest", ColorCombination::GREEN, LandCycle::Basic},
    {"Indatha Triome", ColorCombination::ABZAN, LandCycle::TriCycle}, //White/Black/Green
    {"Spara's Headquarters", ColorCombination::BANT, LandCycle::TriCycle}, //White/Blue/Green
    {"Raffine's Tower", ColorCombination::ESPER, LandCycle::TriCycle}, //White/Blue/Black
    {"Xander's Lounge", ColorCombination::GRIXIS, LandCycle::TriCycle}, //Blue/Black/Red
    {"Savai Triome", ColorCombination::JESKAI, LandCycle::TriCycle}, //White/Blue/Red
    {"Ziatora's Proving Ground", ColorCombination::JUND, LandCycle::TriCycle}, //Black/Red/Green
    {"Raugrin Triome", ColorCombination::MARDU, LandCycle::TriCycle}, //White/Black/Red
    {"Jetmir's Garden", ColorCombination::NAYA, LandCycle::TriCycle}, //White/Red/Green
    {"Zagoth Triome", ColorCombination::SULTAI, LandCycle::TriCycle}, //Blue/Black/Green
    {"Ketria Triome", ColorCombination::TEMUR, LandCycle::TriCycle}, //Blue/Red/Green
    {"Seaside Citadel", ColorCombination::BANT, LandCycle::Tri}, //White/Blue/Green
    {"Arcane Sanctum", ColorCombination::ESPER, LandCycle::Tri}, //White/Blue/Black
    {"Crumbling Necropolis", ColorCombination::GRIXIS, LandCycle::Tri}, //Blue/Black/Red
    {"Savage Lands", ColorCombination::JUND, LandCycle::Tri}, //Black/Red/Green
    {"Jungle Shrine", ColorCombination::NAYA, LandCycle::Tri}, //White/Red/Green
    {"Nomad Outpost", ColorCombination::MARDU, LandCycle::Tri}, //White/Black/Red
    {"Sandsteppe Citadel", ColorCombination::ABZAN, LandCycle::Tri}, //White/Black/Green
    {"Opulent Palace", ColorCombination::SULTAI, LandCycle::Tri}, //Blue/Black/Green
    {"Frontier Bivouac", ColorCombination::TEMUR, LandCycle::Tri}, //Blue/Red/Green
    {"Mystic Monastery", ColorCombination::JESKAI, LandCycle::Tri}, //White/Blue/Red
};