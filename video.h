// c47edit - Scene editor for HM C47
// Copyright (C) 2018 AdrienTD
// Licensed under the GPL3+.
// See LICENSE file for more details.

#pragma once

struct Mesh;
struct Chunk;

extern int drawframes;
extern bool rendertextures;
extern bool renderColorTextures, renderLightmaps;
extern bool enableAlphaTest;

void InitVideo();
void BeginDrawing();
void EndDrawing();
float* ApplySkinToMesh(Mesh* mesh, Chunk* excChunk);
void BeginMeshDraw();
void EndMeshDraw();
void DrawMesh(Mesh* mesh, Chunk* excChunk = nullptr);
void InvalidateMesh(Mesh* mesh);
void UncacheAllMeshes();
