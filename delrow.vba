// Copy paste from line and below into Excel VBA

Sub deleteNonChr9()

' Declare variables

Dim lastrow As Long
Dim firstrow As Long
Dim i As Long

' Input your own values for lastrow and firstrow (the range you want to search and delete)
lastrow = 26
firstrow = 0

' Increment bottom of sheet to upwards
For i = lastrow To firstrow Step -1
' Current code below starts at Column C1 and checks for boxes that don't have the string chr9  
    If (Range("C1").Offset(i, 0) <> "chr9") Then
    Range("C1").Offset(i, 0).EntireRow.Delete
    End If
Next i

End Sub
