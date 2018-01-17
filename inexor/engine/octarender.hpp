#pragma once

#include "inexor/engine/octree.hpp"
#include "inexor/shared/cube_types.hpp"   // for ushort
#include "inexor/shared/cube_vector.hpp"  // for vector
#include "inexor/shared/geom.hpp"         // for ivec (ptr only), vec

struct cube;
struct tjoint;
struct vertex;
struct vtxarray;

extern vector<tjoint> tjoints;
extern vector<vtxarray *> varoot, valist;

extern ushort encodenormal(const vec &n);
extern vec decodenormal(ushort norm);
extern void guessnormals(const vec *pos, int numverts, vec *normals);
extern void reduceslope(ivec &n);
extern void findtjoints();
extern void octarender();
extern void allchanged(bool load = false);
extern void clearvas(cube *c);
extern void destroyva(vtxarray *va, bool reparent = true);
extern bool readva(vtxarray *va, ushort *&edata, vertex *&vdata);
extern void updatevabb(vtxarray *va, bool force = false);
extern void updatevabbs(bool force = false);
