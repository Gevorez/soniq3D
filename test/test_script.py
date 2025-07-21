import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'build')))

import soniq3d

engine = soniq3d.Engine()
engine.generate_orb(32)
mesh = engine.get_mesh()

print(f"Generated mesh with {len(mesh)} points.")
print(mesh[:10])  # first 10 points
