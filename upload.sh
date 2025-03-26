#!/bin/bash

# Navigate to the main Competitive Programming folder
cd "$(dirname "$0")" || exit

# Pull latest changes from GitHub before pushing
git pull --rebase origin main

# Automatically add a .gitkeep file in empty folders
for folder in */; do
    if [ -d "$folder" ] && [ -z "$(ls -A "$folder")" ]; then
        echo "📂 Empty folder detected: $folder"
        touch "$folder/.gitkeep"
    fi
done

# Add all new and modified files to Git
git add .

# Commit and push if there are new changes
if git diff --cached --quiet; then
    echo "⚠️ No new files or changes detected. Skipping commit."
else
    git commit -m "Weekly CP upload - New files added"
    git push origin main
    echo "✅ All new files uploaded successfully!"
fi
