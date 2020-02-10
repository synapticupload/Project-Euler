
a.out:     file format elf64-x86-64


Disassembly of section .init:

00000000000004f0 <_init>:
 4f0:	48 83 ec 08          	sub    rsp,0x8
 4f4:	48 8b 05 ed 0a 20 00 	mov    rax,QWORD PTR [rip+0x200aed]        # 200fe8 <__gmon_start__>
 4fb:	48 85 c0             	test   rax,rax
 4fe:	74 02                	je     502 <_init+0x12>
 500:	ff d0                	call   rax
 502:	48 83 c4 08          	add    rsp,0x8
 506:	c3                   	ret    

Disassembly of section .plt:

0000000000000510 <.plt>:
 510:	ff 35 aa 0a 20 00    	push   QWORD PTR [rip+0x200aaa]        # 200fc0 <_GLOBAL_OFFSET_TABLE_+0x8>
 516:	ff 25 ac 0a 20 00    	jmp    QWORD PTR [rip+0x200aac]        # 200fc8 <_GLOBAL_OFFSET_TABLE_+0x10>
 51c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000000520 <printf@plt>:
 520:	ff 25 aa 0a 20 00    	jmp    QWORD PTR [rip+0x200aaa]        # 200fd0 <printf@GLIBC_2.2.5>
 526:	68 00 00 00 00       	push   0x0
 52b:	e9 e0 ff ff ff       	jmp    510 <.plt>

Disassembly of section .plt.got:

0000000000000530 <__cxa_finalize@plt>:
 530:	ff 25 c2 0a 20 00    	jmp    QWORD PTR [rip+0x200ac2]        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 536:	66 90                	xchg   ax,ax

Disassembly of section .text:

0000000000000540 <_start>:
 540:	31 ed                	xor    ebp,ebp
 542:	49 89 d1             	mov    r9,rdx
 545:	5e                   	pop    rsi
 546:	48 89 e2             	mov    rdx,rsp
 549:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
 54d:	50                   	push   rax
 54e:	54                   	push   rsp
 54f:	4c 8d 05 fa 01 00 00 	lea    r8,[rip+0x1fa]        # 750 <__libc_csu_fini>
 556:	48 8d 0d 83 01 00 00 	lea    rcx,[rip+0x183]        # 6e0 <__libc_csu_init>
 55d:	48 8d 3d e6 00 00 00 	lea    rdi,[rip+0xe6]        # 64a <main>
 564:	ff 15 76 0a 20 00    	call   QWORD PTR [rip+0x200a76]        # 200fe0 <__libc_start_main@GLIBC_2.2.5>
 56a:	f4                   	hlt    
 56b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000000570 <deregister_tm_clones>:
 570:	48 8d 3d 99 0a 20 00 	lea    rdi,[rip+0x200a99]        # 201010 <__TMC_END__>
 577:	55                   	push   rbp
 578:	48 8d 05 91 0a 20 00 	lea    rax,[rip+0x200a91]        # 201010 <__TMC_END__>
 57f:	48 39 f8             	cmp    rax,rdi
 582:	48 89 e5             	mov    rbp,rsp
 585:	74 19                	je     5a0 <deregister_tm_clones+0x30>
 587:	48 8b 05 4a 0a 20 00 	mov    rax,QWORD PTR [rip+0x200a4a]        # 200fd8 <_ITM_deregisterTMCloneTable>
 58e:	48 85 c0             	test   rax,rax
 591:	74 0d                	je     5a0 <deregister_tm_clones+0x30>
 593:	5d                   	pop    rbp
 594:	ff e0                	jmp    rax
 596:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
 59d:	00 00 00 
 5a0:	5d                   	pop    rbp
 5a1:	c3                   	ret    
 5a2:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 5a6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
 5ad:	00 00 00 

00000000000005b0 <register_tm_clones>:
 5b0:	48 8d 3d 59 0a 20 00 	lea    rdi,[rip+0x200a59]        # 201010 <__TMC_END__>
 5b7:	48 8d 35 52 0a 20 00 	lea    rsi,[rip+0x200a52]        # 201010 <__TMC_END__>
 5be:	55                   	push   rbp
 5bf:	48 29 fe             	sub    rsi,rdi
 5c2:	48 89 e5             	mov    rbp,rsp
 5c5:	48 c1 fe 03          	sar    rsi,0x3
 5c9:	48 89 f0             	mov    rax,rsi
 5cc:	48 c1 e8 3f          	shr    rax,0x3f
 5d0:	48 01 c6             	add    rsi,rax
 5d3:	48 d1 fe             	sar    rsi,1
 5d6:	74 18                	je     5f0 <register_tm_clones+0x40>
 5d8:	48 8b 05 11 0a 20 00 	mov    rax,QWORD PTR [rip+0x200a11]        # 200ff0 <_ITM_registerTMCloneTable>
 5df:	48 85 c0             	test   rax,rax
 5e2:	74 0c                	je     5f0 <register_tm_clones+0x40>
 5e4:	5d                   	pop    rbp
 5e5:	ff e0                	jmp    rax
 5e7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
 5ee:	00 00 
 5f0:	5d                   	pop    rbp
 5f1:	c3                   	ret    
 5f2:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 5f6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
 5fd:	00 00 00 

0000000000000600 <__do_global_dtors_aux>:
 600:	80 3d 09 0a 20 00 00 	cmp    BYTE PTR [rip+0x200a09],0x0        # 201010 <__TMC_END__>
 607:	75 2f                	jne    638 <__do_global_dtors_aux+0x38>
 609:	48 83 3d e7 09 20 00 	cmp    QWORD PTR [rip+0x2009e7],0x0        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 610:	00 
 611:	55                   	push   rbp
 612:	48 89 e5             	mov    rbp,rsp
 615:	74 0c                	je     623 <__do_global_dtors_aux+0x23>
 617:	48 8b 3d ea 09 20 00 	mov    rdi,QWORD PTR [rip+0x2009ea]        # 201008 <__dso_handle>
 61e:	e8 0d ff ff ff       	call   530 <__cxa_finalize@plt>
 623:	e8 48 ff ff ff       	call   570 <deregister_tm_clones>
 628:	c6 05 e1 09 20 00 01 	mov    BYTE PTR [rip+0x2009e1],0x1        # 201010 <__TMC_END__>
 62f:	5d                   	pop    rbp
 630:	c3                   	ret    
 631:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
 638:	f3 c3                	repz ret 
 63a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000000640 <frame_dummy>:
 640:	55                   	push   rbp
 641:	48 89 e5             	mov    rbp,rsp
 644:	5d                   	pop    rbp
 645:	e9 66 ff ff ff       	jmp    5b0 <register_tm_clones>


000000000000064a <main>:
 64a:	55                   	push   rbp
 64b:	48 89 e5             	mov    rbp,rsp

 64e:	48 83 ec 10          	sub    rsp,0x10                 ; 16 variables
 652:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [rbp-0x8],0x0
 659:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
 660:	eb 53                	jmp    6b5 <main+0x6b>
 662:	8b 4d fc             	mov    ecx,DWORD PTR [rbp-0x4]
 665:	ba 56 55 55 55       	mov    edx,0x55555556
 66a:	89 c8                	mov    eax,ecx
 66c:	f7 ea                	imul   edx
 66e:	89 c8                	mov    eax,ecx
 670:	c1 f8 1f             	sar    eax,0x1f
 673:	29 c2                	sub    edx,eax
 675:	89 d0                	mov    eax,edx
 677:	89 c2                	mov    edx,eax
 679:	01 d2                	add    edx,edx
 67b:	01 c2                	add    edx,eax
 67d:	89 c8                	mov    eax,ecx
 67f:	29 d0                	sub    eax,edx
 681:	85 c0                	test   eax,eax
 683:	74 26                	je     6ab <main+0x61>
 685:	8b 4d fc             	mov    ecx,DWORD PTR [rbp-0x4]
 688:	ba 67 66 66 66       	mov    edx,0x66666667
 68d:	89 c8                	mov    eax,ecx
 68f:	f7 ea                	imul   edx
 691:	d1 fa                	sar    edx,1
 693:	89 c8                	mov    eax,ecx
 695:	c1 f8 1f             	sar    eax,0x1f
 698:	29 c2                	sub    edx,eax
 69a:	89 d0                	mov    eax,edx
 69c:	89 c2                	mov    edx,eax
 69e:	c1 e2 02             	shl    edx,0x2
 6a1:	01 c2                	add    edx,eax
 6a3:	89 c8                	mov    eax,ecx
 6a5:	29 d0                	sub    eax,edx
 6a7:	85 c0                	test   eax,eax
 6a9:	75 06                	jne    6b1 <main+0x67>
 6ab:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
 6ae:	01 45 f8             	add    DWORD PTR [rbp-0x8],eax
 6b1:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
 6b5:	81 7d fc e7 03 00 00 	cmp    DWORD PTR [rbp-0x4],0x3e7
 6bc:	7e a4                	jle    662 <main+0x18>
 6be:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
 6c1:	89 c6                	mov    esi,eax
 6c3:	48 8d 3d 9a 00 00 00 	lea    rdi,[rip+0x9a]        # 764 <_IO_stdin_used+0x4>
 6ca:	b8 00 00 00 00       	mov    eax,0x0
 6cf:	e8 4c fe ff ff       	call   520 <printf@plt>
 6d4:	b8 00 00 00 00       	mov    eax,0x0
 6d9:	c9                   	leave  
 6da:	c3                   	ret    
 6db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000006e0 <__libc_csu_init>:
 6e0:	41 57                	push   r15
 6e2:	41 56                	push   r14
 6e4:	49 89 d7             	mov    r15,rdx
 6e7:	41 55                	push   r13
 6e9:	41 54                	push   r12
 6eb:	4c 8d 25 c6 06 20 00 	lea    r12,[rip+0x2006c6]        # 200db8 <__frame_dummy_init_array_entry>
 6f2:	55                   	push   rbp
 6f3:	48 8d 2d c6 06 20 00 	lea    rbp,[rip+0x2006c6]        # 200dc0 <__init_array_end>
 6fa:	53                   	push   rbx
 6fb:	41 89 fd             	mov    r13d,edi
 6fe:	49 89 f6             	mov    r14,rsi
 701:	4c 29 e5             	sub    rbp,r12
 704:	48 83 ec 08          	sub    rsp,0x8
 708:	48 c1 fd 03          	sar    rbp,0x3
 70c:	e8 df fd ff ff       	call   4f0 <_init>
 711:	48 85 ed             	test   rbp,rbp
 714:	74 20                	je     736 <__libc_csu_init+0x56>
 716:	31 db                	xor    ebx,ebx
 718:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
 71f:	00 
 720:	4c 89 fa             	mov    rdx,r15
 723:	4c 89 f6             	mov    rsi,r14
 726:	44 89 ef             	mov    edi,r13d
 729:	41 ff 14 dc          	call   QWORD PTR [r12+rbx*8]
 72d:	48 83 c3 01          	add    rbx,0x1
 731:	48 39 dd             	cmp    rbp,rbx
 734:	75 ea                	jne    720 <__libc_csu_init+0x40>
 736:	48 83 c4 08          	add    rsp,0x8
 73a:	5b                   	pop    rbx
 73b:	5d                   	pop    rbp
 73c:	41 5c                	pop    r12
 73e:	41 5d                	pop    r13
 740:	41 5e                	pop    r14
 742:	41 5f                	pop    r15
 744:	c3                   	ret    
 745:	90                   	nop
 746:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
 74d:	00 00 00 

0000000000000750 <__libc_csu_fini>:
 750:	f3 c3                	repz ret 

Disassembly of section .fini:

0000000000000754 <_fini>:
 754:	48 83 ec 08          	sub    rsp,0x8
 758:	48 83 c4 08          	add    rsp,0x8
 75c:	c3                   	ret    
