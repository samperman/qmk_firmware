Build log for first66
=====================

keyboard layout
---------------
1. Go to http://www.keyboard-layout-editor.com/
2. Muck with the keys. In retrospect, use a 6.25u space bar.
3. Copy the raw data

case
----
1. Go to http://builder.swillkb.com/
    * Plate layout: Paste in the raw data
    * Switch type: `{_t: 3}`
    * Stabilizer type: Chose Cherry only, in retrospect, Costar might have been easier.
    * Case type: Sandwich
    * USB Cutout: location: 0, width: 10mm
    * Mount holes: 8, diameter=3.4, edge width: 6mm
    * Edge Padding: On. 6mm everywhere
    * Plate corners: On. 2mm
    * Custom polygons: off
    * Kerf: 0.15mm
    * Line color: Blue (for Ponoko)
    * Line weight: ???
2. Draw my cad
3. Save .svg files
4. Login to https://www.ponoko.com/
    * Download the P3 template
5. Open template in illustrator
    * Open each svg file and add to template
    * Select everything, set the Stroke to 0.01mm (top left)
    * Export as .eps file
6. Upload to ponoko, choose 3mm think acrylic

wiring diagram
--------------
1. Go to http://qmk.sized.io/
2. Paste in the raw data from http://www.keyboard-layout-editor.com/ or previously edited json
    * Stored locally as layout.json
3. Manipulate the rows and columns so it looks like a grid
4. Screen shot the wiring diagram and the flipped wiring diagram. Save the images
5. Go to settings. Confirm there are no errors.

firmware
--------
1. Create a new branch of https://github.com/samperman/qmk_firmware
2. Run `util/new_project.sh first66`
    * See https://github.com/samperman/qmk_firmware/blob/master/doc/HAND_WIRE.md#getting-some-basic-firmware-set-up
