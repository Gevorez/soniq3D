import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'build')))

import soniq3d

engine = soniq3d.Engine()
engine.process_file("example.wav")
print(engine.get_mesh())
