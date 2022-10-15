Transient simulation of VIV of two circular cylinders with 1DoF using overset mesh.

Created on OpenFOAM-v2006. Should run natively on higher OpenFOAM versions
such as OpenFOAM v2012, v2106, v2206.

It was created based on cylinder tutorial of overPimpleDyMFoam.

Dynamic properties of the cylinder are not set considering physical experiments.
You may need to adjust to your own needs.

cylinderMesh/
    For generating (2D) mesh cylinder mesh

cylinderAndBackground/
    BlockMesh for background and running
