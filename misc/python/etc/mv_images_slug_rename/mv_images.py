import os, re, argparse
from shutil import copy

def slug(string):
    '''Rename filename to url-friendly format.'''
    string = string.strip()
    #attention: data entry errors may cause two spaces between words
    string = string.replace(" ", "-").lower()
    string = regex.sub('', string)
    #solve for double spaces here: replace n adjacent hyphens with one hyphen
    string = re.sub(r"([-]){2,}", "-", string)
    return string

def main():
    # argument parsing
    parser = argparse.ArgumentParser()
    parser.add_argument("-d", "--destination", type=str, default='new/')
    parser.add_argument("-s", "--source", type=str, default='old/')
    args = parser.parse_args()

    # regular expression object building
    # looking at complement of any alphabetical character or hyphen
    regex = re.compile('[^a-zA-Z\-]')

    # main stuff
    for file in os.listdir(args.source):
        if file.startswith("Swamp") or file.startswith("Plains") or
                file.startswith("Mountain") or file.startswith("Island") or
                file.startswith("Forest"):
            continue

        if file.endswith(".jpg"):
            src = args.source + file
            dest = args.destination + slug(os.path.splitext(file)[0]) + ".jpg"
            copy(src, dest)

if __name__ == '__main__':
    main()
