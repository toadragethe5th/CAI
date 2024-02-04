#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

#include 'nlpc.h'

const char *corpus =
    "The sunsets over the horizon, casting a warm glow across the landscape.\n"
    "In the heart of the city, a bustling market comes to life with vibrant colors and lively chatter.\n"
    "A gentle breeze rustles the leaves of the ancient oak tree in the peaceful garden.\n"
    "The sound of waves crashing against the shore provides a soothing melody by the seaside.\n"
    "As the first snowflake falls, a winter wonderland unfolds, blanketing everything in a layer of white.\n"
    "A rainbow stretches across the sky after a refreshing rain shower.\n"
    "The aroma of freshly baked bread wafts through the air from the local bakery.\n"
    "A family of ducks glides gracefully across the serene pond in the park.\n"
    "Street performers entertain passersby with mesmerizing tunes and skillful tricks.\n"
    "A cozy fireplace crackles, filling the room with warmth on a chilly evening.\n"
    "The city skyline sparkles with city lights as night falls.\n"
    "Vibrant flowers bloom in a riot of colors, signaling the arrival of spring.\n"
    "An old bookshop exudes a nostalgic charm, inviting readers to explore its hidden treasures.\n"
    "The symphony of crickets creates a serene ambiance in the quiet countryside.\n"
    "A shooting star streaks across the night sky, making wishes come true.\n"
    "A field of sunflowers follows the sun's journey across the sky.\n"
    "The scent of pine fills the air in a dense forest, transporting hikers to a different world.\n"
    "Laughter echoes through a bustling coffee shop as friends share stories over steaming cups.\n"
    "Colorful hot air balloons ascend into the sky, painting it with a kaleidoscope of hues.\n"
    "A gentle stream meanders through a lush meadow, providing a haven for wildlife.\n"
    "The cityscape transforms into a sea of lights during a festive celebration.\n"
    "A hidden waterfall cascades down moss-covered rocks in a secluded glade.\n"
    "An artist passionately brings a blank canvas to life with strokes of vibrant paint.\n"
    "A lone lighthouse stands tall, guiding ships safely through the dark night.\n"
    "The distant sound of church bells adds a timeless charm to a quaint village.\n"
    "A majestic mountain peak pierces the clouds, standing as a testament to nature's grandeur.\n"
    "The scent of blooming jasmine envelops the air in a secret garden.\n"
    "Friends gather around a bonfire, sharing stories and marshmallows under the starry sky.\n"
    "A bustling farmer's market showcases a cornucopia of fresh fruits and vegetables.\n"
    "An ancient castle stands atop a hill, shrouded in mist on a foggy morning.\n"
    "A playful puppy frolics in a field of wildflowers, embodying pure joy.\n"
    "A rainbow-hued hot air balloon floats gracefully over a picturesque valley.\n"
    "The sound of children's laughter resonates in a vibrant playground.\n"
    "A wise owl perches on a mossy branch, observing the world with keen eyes.\n"
    "A vintage train chugs along the tracks, taking passengers on a nostalgic journey.\n"
    "The aroma of sizzling barbecue wafts through the air at a summer picnic.\n"
    "A coral reef teems with colorful marine life, creating an underwater spectacle.\n"
    "A mountain lake reflects the azure sky, creating a mirror-like surface.\n"
    "A quaint cottage sits nestled among blooming cherry blossoms in a serene village.\n"
    "Fireflies illuminate a tranquil garden, creating a magical display at dusk.\n"
    "A street artist creates intricate chalk drawings on a city square.\n"
    "A family of elephants gracefully moves through the savannah at sunset.\n"
    "A historic cathedral stands as a silent witness to centuries of human history.\n"
    "A charming street lined with quaint shops invites exploration and discovery.\n"
    "The aroma of pine needles fills the air in a dense forest on a crisp autumn day.\n"
    "A vibrant market pulses with energy as vendors showcase their unique wares.\n"
    "A telescope reveals the craters and mountains on the surface of the moon.\n"
    "A colorful parade winds its way through city streets, spreading joy and celebration.\n"
    "A wise old oak tree offers shade to weary travelers on a hot summer day.\n"
    "A coastal cliff provides breathtaking views of the endless expanse of the ocean.\n"
    "A field of lavender sways in the gentle breeze, emitting a soothing fragrance.\n"
    "A cozy log cabin stands amidst snowy mountains, inviting warmth and comfort.\n"
    "A group of friends embarks on a road trip, creating memories along the open highway.\n"
    "A traditional tea ceremony unfolds in a serene Japanese garden.\n"
    "A starlit sky serves as a canvas for constellations, telling stories of ancient myths.\n"
    "A bustling street market showcases a tapestry of cultures through food and crafts.\n"
    "A snowy owl glides silently through the night, hunting for prey in the Arctic tundra.\n"
    "A historic library houses a vast collection of knowledge and wisdom.\n"
    "A vineyard bathed in golden sunlight produces the finest grapes for exquisite wines.\n"
    "A meandering river carves its way through lush green valleys, shaping the landscape.\n"
    "A sailboat gracefully glides across a peaceful lake, propelled by a gentle breeze.\n"
    "A field of daffodils blooms in a meadow, heralding the arrival of spring.\n"
    "A historic steam locomotive puffs out clouds of smoke as it embarks on a nostalgic journey.\n"
    "A street performer captivates a";


int main {

    char *lower(char *corpus);
    char *nosymbol = removeSymbols(*lower);
}
