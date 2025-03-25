#!/bin/bash

# Navigate to the main Competitive Programming folder
cd "$(dirname "$0")" || exit

# Find all new subfolders that have uncommitted changes
CHANGES=$(git status --porcelain | grep '??' | awk '{print $2}' | grep '/')

if [ -z "$CHANGES" ]; then
    echo "⚠️ No new subfolders found. Skipping upload."
    exit 0
fi

echo "📂 New subfolders detected: "
echo "$CHANGES"

# Add all new subfolders to Git
git add .

# Commit with an automatic message
git commit -m "Weekly CP upload - New subfolders added"

# Push to GitHub
git push origin main

echo "✅ All new subfolders uploaded successfully!"
