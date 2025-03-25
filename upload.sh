#!/bin/bash

# Get current week number
WEEK_NUM=$(date +%V)  # This gives the week number (e.g., 13 for week13)

# Define the folder name (like week13)
WEEK_FOLDER="week_$WEEK_NUM"

# Create the folder if it doesn't exist
mkdir -p "$WEEK_FOLDER"

# Add all new changes in the repository
git add .

# Commit with an automatic message
git commit -m "Weekly CP upload - $WEEK_FOLDER"

# Push to GitHub
git push origin main

echo "✅ Weekly upload complete for $WEEK_FOLDER"
