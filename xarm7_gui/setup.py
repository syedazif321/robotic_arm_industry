from setuptools import setup

package_name = 'xarm7_gui'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/resource', ['resource/' + package_name]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='azif',
    maintainer_email='azif@example.com',
    description='PyQt5 GUI for xArm7 joint state viewer and pose saver',
    license='MIT',
    entry_points={
        'console_scripts': [
            'gui_node = xarm7_gui.gui_node:main',
        ],
    },
)
