---
name: document-robotics-capstones
description: Integrate the photos, videos, notes and code that Santi leaves in the Robotica Inbox folder into the public robotics-capstones GitHub repo. Use when asked to document, integrate or upload robotics material, or when files are waiting in the Inbox.
---

# Document robotics capstones

| What | Where |
|---|---|
| Inbox (Santi drops files here, often from the iPhone) | `~/Library/Mobile Documents/com~apple~CloudDocs/Robotica/Inbox/` |
| Repo (public) | `~/Repositories/robotics-capstones` → https://github.com/Morante-tech/robotics-capstones |
| Originals, after integrating | `~/Library/Mobile Documents/com~apple~CloudDocs/Robotica/Originales/<capstone>/<project folder>/` |
| Converted videos waiting for upload | `Robotica/Inbox/_para-subir/` |
| Media script (not in the repo) | `~/Library/Mobile Documents/com~apple~CloudDocs/Robotica/tools/process_media.py` |

## Steps

1. `git pull` in the repo (Santi edits READMEs on github.com when uploading videos).
2. List the Inbox (skip `_para-subir/`). Match every file to a project folder by its name, e.g. `color miixing lamp.JPG` →
   `spiderbot/arduino-starter-kit/project4_ColorMixingLamp/`. If a file matches no existing project, or two, ask.
   A new project gets its folder named like its sketch (`projectN_Name/`).
3. **Photos:** never crop them, and don't worry about copyright (book or manual pages in the shot are fine):
   `"<Robotica>/tools/process_media.py" photo SRC <project>/circuit.jpg`.
   If the project already has `circuit.jpg`, use `circuit-2.jpg`, etc.
4. **Videos:** never crop or hold them back for copyright either:
   `"<Robotica>/tools/process_media.py" video SRC "<Inbox>/_para-subir/<project>.mp4"`. Videos never go into git.
5. **Notes** (text, Markdown, transcribed voice notes): rewrite them in English, short, and add them to the project
   README under `## Notes`. Keep only facts about the build: what was done, what failed and how it was fixed.
6. **Code** (`.ino`): copy to `<project>/<projectN_Name>.ino`; the folder and the sketch must share the name.
7. **READMEs:** every project README has: title, one-sentence description, video (or `_Video pending._`),
   `## Circuit` with the photo and a pin table taken from the code, and `## Notes` only if there is something to say.
   Add new projects to the table in the parent README with the build date (date of the photo/video if unknown).
   Keep the tone of the existing READMEs: terse, tables, no filler.
8. Show Santi a summary of the changes and wait for the go-ahead. Then commit
   and push. End the commit message with the attribution line the session gives.
9. Move the integrated originals from the Inbox to `Originales/<capstone>/<project folder>/`. Never delete originals.
10. For each video in `_para-subir/`, give Santi the link to edit the README on github.com
    (`https://github.com/Morante-tech/robotics-capstones/edit/main/<path>/README.md`) and the steps: replace
    `_Video pending._` with the dragged `.mp4`, commit, then tell you. Once the README on GitHub shows the video,
    `git pull`, delete that file from `_para-subir/`, and tidy the README: remove the `<!-- Video: ... -->`
    comment and leave a single blank line around the video URL.

## Rules

- License: code MIT, texts/photos/videos/designs CC BY-SA 4.0. Do not add third-party PDFs, datasheets or book scans:
  link to the original source instead.
- Private material (`Plan Spiderbot.docx`, `Seguimiento Spiderbot.xlsx`, `referencias/`) never goes into the repo.
- Talk to Santi in Spanish; write the repo in English.
