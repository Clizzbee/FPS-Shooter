Installation (developer)
------------------------
1. Copy `Source/FPSKit` into your Unreal project's `Source/` folder.
2. Copy `Content/FPSKit` into your project's `Content/` folder.
3. Regenerate Visual Studio project files (right-click .uproject -> Generate Visual Studio project files).
4. Open the project in Visual Studio and build the solution.
5. Launch Unreal Editor. Create Blueprint classes that extend the provided C++ base classes:
   - BP_PlayerCharacter -> extends AFPSPlayerCharacter (C++)
   - BP_BaseWeapon -> extends AWeaponBase (C++)
   - BP_Enemy -> extends AAIBaseCharacter (C++)
6. Create DataTable assets (CSV import) using `Data/DT_Weapons.csv`.
