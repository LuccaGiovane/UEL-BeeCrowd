num = int(input())
for i in range(num):
	bonus = int(input())
	ap1,dp1,nv1 = map(int,input().split())
	ap2,dp2,nv2 = map(int,input().split())

	if nv1%2 == 0:
		VG1 = ((ap1+dp1)/2)+bonus
	elif nv1%2 != 0:
		VG1 = (ap1+dp1)/2

	if nv2%2 == 0:
		VG2 = ((ap2+dp2)/2)+bonus
	elif nv2%2 != 0:
		VG2 = (ap2+dp2)/2

	if VG1 > VG2:
		print("Dabriel")
	elif VG1 < VG2:
		print("Guarte")
	elif VG1 == VG2:
		print("Empate")
