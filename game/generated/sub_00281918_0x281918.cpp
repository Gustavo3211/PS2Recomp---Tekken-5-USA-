#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281918
// Address: 0x281918 - 0x281eb0
void sub_00281918_0x281918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281918_0x281918");
#endif

    switch (ctx->pc) {
        case 0x2819f4u: goto label_2819f4;
        case 0x281a00u: goto label_281a00;
        case 0x281a74u: goto label_281a74;
        case 0x281ae8u: goto label_281ae8;
        case 0x281af8u: goto label_281af8;
        case 0x281b1cu: goto label_281b1c;
        case 0x281b28u: goto label_281b28;
        case 0x281b3cu: goto label_281b3c;
        case 0x281b9cu: goto label_281b9c;
        case 0x281ba8u: goto label_281ba8;
        case 0x281be8u: goto label_281be8;
        case 0x281c2cu: goto label_281c2c;
        case 0x281c3cu: goto label_281c3c;
        case 0x281c48u: goto label_281c48;
        case 0x281c90u: goto label_281c90;
        case 0x281cacu: goto label_281cac;
        case 0x281cccu: goto label_281ccc;
        case 0x281ce8u: goto label_281ce8;
        case 0x281d40u: goto label_281d40;
        case 0x281d68u: goto label_281d68;
        case 0x281db0u: goto label_281db0;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e10u: goto label_281e10;
        case 0x281e18u: goto label_281e18;
        case 0x281e40u: goto label_281e40;
        default: break;
    }

    ctx->pc = 0x281918u;

    // 0x281918: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x281918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28191c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281920: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x281920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x281924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x281924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281928: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x281928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x28192c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x28192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x281930: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x281930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x281934: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x281934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x281938: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x281938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x28193c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x28193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x281940: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x281940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x281944: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x281944u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x281948: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x281948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x28194c: 0x8e4a07c8  lw          $t2, 0x7C8($s2)
    ctx->pc = 0x28194cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1992)));
    // 0x281950: 0x1142001f  beq         $t2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x281950u;
    {
        const bool branch_taken_0x281950 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x281954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281950u;
        // 0x281954: 0x29420003  slti        $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281950) {
            ctx->pc = 0x2819D0u;
            goto label_2819d0;
        }
    }
    ctx->pc = 0x281958u;
    // 0x281958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x281958u;
    {
        const bool branch_taken_0x281958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281958u;
        // 0x28195c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281958) {
            ctx->pc = 0x281978u;
            goto label_281978;
        }
    }
    ctx->pc = 0x281960u;
    // 0x281960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281964: 0x51420008  beql        $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281964u;
    {
        const bool branch_taken_0x281964 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x281964) {
            ctx->pc = 0x281968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281964u;
            // 0x281968: 0x8e4707c0  lw          $a3, 0x7C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281988u;
            goto label_281988;
        }
    }
    ctx->pc = 0x28196Cu;
    // 0x28196c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x28196Cu;
    {
        const bool branch_taken_0x28196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28196c) {
            ctx->pc = 0x281A9Cu;
            goto label_281a9c;
        }
    }
    ctx->pc = 0x281974u;
    // 0x281974: 0x0  nop
    ctx->pc = 0x281974u;
    // NOP
label_281978:
    // 0x281978: 0x11420035  beq         $t2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x281978u;
    {
        const bool branch_taken_0x281978 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x28197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281978u;
        // 0x28197c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281978) {
            ctx->pc = 0x281A50u;
            goto label_281a50;
        }
    }
    ctx->pc = 0x281980u;
    // 0x281980: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x281980u;
    {
        const bool branch_taken_0x281980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281980) {
            ctx->pc = 0x281A9Cu;
            goto label_281a9c;
        }
    }
    ctx->pc = 0x281988u;
label_281988:
    // 0x281988: 0x8e4807c4  lw          $t0, 0x7C4($s2)
    ctx->pc = 0x281988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
    // 0x28198c: 0x86420098  lh          $v0, 0x98($s2)
    ctx->pc = 0x28198cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x281990: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x281994: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x281998: 0x2506f000  addiu       $a2, $t0, -0x1000
    ctx->pc = 0x281998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963200));
    // 0x28199c: 0x8e4407d4  lw          $a0, 0x7D4($s2)
    ctx->pc = 0x28199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2004)));
    // 0x2819a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2819a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2819a4: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x2819a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2819a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2819a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2819ac: 0xae440808  sw          $a0, 0x808($s2)
    ctx->pc = 0x2819acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 4));
    // 0x2819b0: 0xae420810  sw          $v0, 0x810($s2)
    ctx->pc = 0x2819b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 2));
    // 0x2819b4: 0xae45080c  sw          $a1, 0x80C($s2)
    ctx->pc = 0x2819b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 5));
    // 0x2819b8: 0xae430814  sw          $v1, 0x814($s2)
    ctx->pc = 0x2819b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 3));
    // 0x2819bc: 0xae490800  sw          $t1, 0x800($s2)
    ctx->pc = 0x2819bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 9));
    // 0x2819c0: 0xae460804  sw          $a2, 0x804($s2)
    ctx->pc = 0x2819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 6));
    // 0x2819c4: 0xae4707f8  sw          $a3, 0x7F8($s2)
    ctx->pc = 0x2819c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2040), GPR_U32(ctx, 7));
    // 0x2819c8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2819C8u;
    {
        const bool branch_taken_0x2819c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819C8u;
        // 0x2819cc: 0xae4807fc  sw          $t0, 0x7FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2044), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819c8) {
            ctx->pc = 0x281A98u;
            goto label_281a98;
        }
    }
    ctx->pc = 0x2819D0u;
label_2819d0:
    // 0x2819d0: 0x8e4700c8  lw          $a3, 0xC8($s2)
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x2819d4: 0x54e0000e  bnel        $a3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2819D4u;
    {
        const bool branch_taken_0x2819d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2819d4) {
            ctx->pc = 0x2819D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2819D4u;
            // 0x2819d8: 0x8e4507c0  lw          $a1, 0x7C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281A10u;
            goto label_281a10;
        }
    }
    ctx->pc = 0x2819DCu;
    // 0x2819dc: 0x864302fe  lh          $v1, 0x2FE($s2)
    ctx->pc = 0x2819dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x2819e0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2819e4: 0xae430810  sw          $v1, 0x810($s2)
    ctx->pc = 0x2819e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 3));
    // 0x2819e8: 0x96450304  lhu         $a1, 0x304($s2)
    ctx->pc = 0x2819e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2819ec: 0xc09905e  jal         func_264178
    ctx->pc = 0x2819ECu;
    SET_GPR_U32(ctx, 31, 0x2819F4u);
    ctx->pc = 0x2819F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819ECu;
    // 0x2819f0: 0xae420808  sw          $v0, 0x808($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2819ECu, 0x2819F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819F4u;
label_2819f4:
    // 0x2819f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2819f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819f8: 0xc09fa66  jal         func_27E998
    ctx->pc = 0x2819F8u;
    SET_GPR_U32(ctx, 31, 0x281A00u);
    ctx->pc = 0x2819FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819F8u;
    // 0x2819fc: 0xae42080c  sw          $v0, 0x80C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E998u, 0x2819F8u, 0x281A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A00u;
label_281a00:
    // 0x281a00: 0x8e4307c0  lw          $v1, 0x7C0($s2)
    ctx->pc = 0x281a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x281a04: 0x8e4407c4  lw          $a0, 0x7C4($s2)
    ctx->pc = 0x281a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
    // 0x281a08: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x281A08u;
    {
        const bool branch_taken_0x281a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A08u;
        // 0x281a0c: 0xae420814  sw          $v0, 0x814($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a08) {
            ctx->pc = 0x281A84u;
            goto label_281a84;
        }
    }
    ctx->pc = 0x281A10u;
label_281a10:
    // 0x281a10: 0x92420195  lbu         $v0, 0x195($s2)
    ctx->pc = 0x281a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 405)));
    // 0x281a14: 0x92430193  lbu         $v1, 0x193($s2)
    ctx->pc = 0x281a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 403)));
    // 0x281a18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x281a1c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x281a20: 0x8e4607c4  lw          $a2, 0x7C4($s2)
    ctx->pc = 0x281a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
    // 0x281a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x281a28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x281a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x281a2c: 0xae440808  sw          $a0, 0x808($s2)
    ctx->pc = 0x281a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 4));
    // 0x281a30: 0xae420810  sw          $v0, 0x810($s2)
    ctx->pc = 0x281a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 2));
    // 0x281a34: 0xae47080c  sw          $a3, 0x80C($s2)
    ctx->pc = 0x281a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 7));
    // 0x281a38: 0xae430814  sw          $v1, 0x814($s2)
    ctx->pc = 0x281a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 3));
    // 0x281a3c: 0xae4507f8  sw          $a1, 0x7F8($s2)
    ctx->pc = 0x281a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2040), GPR_U32(ctx, 5));
    // 0x281a40: 0xae4607fc  sw          $a2, 0x7FC($s2)
    ctx->pc = 0x281a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2044), GPR_U32(ctx, 6));
    // 0x281a44: 0xae400800  sw          $zero, 0x800($s2)
    ctx->pc = 0x281a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 0));
    // 0x281a48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x281A48u;
    {
        const bool branch_taken_0x281a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A48u;
        // 0x281a4c: 0xae400804  sw          $zero, 0x804($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a48) {
            ctx->pc = 0x281A98u;
            goto label_281a98;
        }
    }
    ctx->pc = 0x281A50u;
label_281a50:
    // 0x281a50: 0x8e4600c4  lw          $a2, 0xC4($s2)
    ctx->pc = 0x281a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x281a54: 0x86420146  lh          $v0, 0x146($s2)
    ctx->pc = 0x281a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 326)));
    // 0x281a58: 0x94c30024  lhu         $v1, 0x24($a2)
    ctx->pc = 0x281a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x281a5c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x281a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x281a60: 0xae460808  sw          $a2, 0x808($s2)
    ctx->pc = 0x281a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 6));
    // 0x281a64: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x281a64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x281a68: 0xae430810  sw          $v1, 0x810($s2)
    ctx->pc = 0x281a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 3));
    // 0x281a6c: 0xc09905e  jal         func_264178
    ctx->pc = 0x281A6Cu;
    SET_GPR_U32(ctx, 31, 0x281A74u);
    ctx->pc = 0x281A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A6Cu;
    // 0x281a70: 0x94c50018  lhu         $a1, 0x18($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x281A6Cu, 0x281A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A74u;
label_281a74:
    // 0x281a74: 0xae400814  sw          $zero, 0x814($s2)
    ctx->pc = 0x281a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 0));
    // 0x281a78: 0x8e4307c0  lw          $v1, 0x7C0($s2)
    ctx->pc = 0x281a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x281a7c: 0x8e4407c4  lw          $a0, 0x7C4($s2)
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1988)));
    // 0x281a80: 0xae42080c  sw          $v0, 0x80C($s2)
    ctx->pc = 0x281a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 2));
label_281a84:
    // 0x281a84: 0xae4307f8  sw          $v1, 0x7F8($s2)
    ctx->pc = 0x281a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2040), GPR_U32(ctx, 3));
    // 0x281a88: 0xae4407fc  sw          $a0, 0x7FC($s2)
    ctx->pc = 0x281a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2044), GPR_U32(ctx, 4));
    // 0x281a8c: 0xae400800  sw          $zero, 0x800($s2)
    ctx->pc = 0x281a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 0));
    // 0x281a90: 0xae400804  sw          $zero, 0x804($s2)
    ctx->pc = 0x281a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2052), GPR_U32(ctx, 0));
    // 0x281a94: 0x8e4a07c8  lw          $t2, 0x7C8($s2)
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1992)));
label_281a98:
    // 0x281a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281a9c:
    // 0x281a9c: 0x51420034  beql        $t2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x281A9Cu;
    {
        const bool branch_taken_0x281a9c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x281a9c) {
            ctx->pc = 0x281AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281A9Cu;
            // 0x281aa0: 0x8e43080c  lw          $v1, 0x80C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281B70u;
            goto label_281b70;
        }
    }
    ctx->pc = 0x281AA4u;
    // 0x281aa4: 0x194000f7  blez        $t2, . + 4 + (0xF7 << 2)
    ctx->pc = 0x281AA4u;
    {
        const bool branch_taken_0x281aa4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x281AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AA4u;
        // 0x281aa8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281aa4) {
            ctx->pc = 0x281E84u;
            goto label_281e84;
        }
    }
    ctx->pc = 0x281AACu;
    // 0x281aac: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x281aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x281ab0: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x281AB0u;
    {
        const bool branch_taken_0x281ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AB0u;
        // 0x281ab4: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ab0) {
            ctx->pc = 0x281E88u;
            goto label_281e88;
        }
    }
    ctx->pc = 0x281AB8u;
    // 0x281ab8: 0x8e430808  lw          $v1, 0x808($s2)
    ctx->pc = 0x281ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x281abc: 0xc64c0810  lwc1        $f12, 0x810($s2)
    ctx->pc = 0x281abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281ac0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x281ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x281ac4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x281ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x281ac8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x281ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281acc: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281ad0: 0x245054b0  addiu       $s0, $v0, 0x54B0
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
    // 0x281ad4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x281ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281adc: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x281adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x281ae0: 0xc096d52  jal         func_25B548
    ctx->pc = 0x281AE0u;
    SET_GPR_U32(ctx, 31, 0x281AE8u);
    ctx->pc = 0x281AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AE0u;
    // 0x281ae4: 0x2614fe90  addiu       $s4, $s0, -0x170 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x281AE0u, 0x281AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AE8u;
label_281ae8:
    // 0x281ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281af0: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x281AF0u;
    SET_GPR_U32(ctx, 31, 0x281AF8u);
    ctx->pc = 0x281AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AF0u;
    // 0x281af4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x281AF0u, 0x281AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AF8u;
label_281af8:
    // 0x281af8: 0x8e42080c  lw          $v0, 0x80C($s2)
    ctx->pc = 0x281af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x281afc: 0xc64c0814  lwc1        $f12, 0x814($s2)
    ctx->pc = 0x281afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281b00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x281b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x281b04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x281b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b08: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x281b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x281b0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b10: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x281b14: 0xc096d52  jal         func_25B548
    ctx->pc = 0x281B14u;
    SET_GPR_U32(ctx, 31, 0x281B1Cu);
    ctx->pc = 0x281B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B14u;
    // 0x281b18: 0x73fc2  srl         $a3, $a3, 31 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x281B14u, 0x281B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B1Cu;
label_281b1c:
    // 0x281b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b20: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x281B20u;
    SET_GPR_U32(ctx, 31, 0x281B28u);
    ctx->pc = 0x281B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B20u;
    // 0x281b24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x281B20u, 0x281B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B28u;
label_281b28:
    // 0x281b28: 0xc6950010  lwc1        $f21, 0x10($s4)
    ctx->pc = 0x281b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281b2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x281b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281b30: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x281b34: 0xc097084  jal         func_25C210
    ctx->pc = 0x281B34u;
    SET_GPR_U32(ctx, 31, 0x281B3Cu);
    ctx->pc = 0x281B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B34u;
    // 0x281b38: 0xc6940018  lwc1        $f20, 0x18($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x281B34u, 0x281B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B3Cu;
label_281b3c:
    // 0x281b3c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x281b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281b40: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x281b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281b44: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x281b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x281b48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x281b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x281b4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x281b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281b50: 0xe6810010  swc1        $f1, 0x10($s4)
    ctx->pc = 0x281b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x281b54: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x281b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281b58: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x281b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281b5c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x281b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x281b60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x281b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x281b64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x281b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x281b68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x281B68u;
    {
        const bool branch_taken_0x281b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B68u;
        // 0x281b6c: 0xe6820018  swc1        $f2, 0x18($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b68) {
            ctx->pc = 0x281DD0u;
            goto label_281dd0;
        }
    }
    ctx->pc = 0x281B70u;
label_281b70:
    // 0x281b70: 0xc64c0814  lwc1        $f12, 0x814($s2)
    ctx->pc = 0x281b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281b74: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x281b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x281b78: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x281b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x281b7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x281b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b80: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x281b80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281b84: 0x24545340  addiu       $s4, $v0, 0x5340
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
    // 0x281b88: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x281b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b90: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x281b90u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x281b94: 0xc096d52  jal         func_25B548
    ctx->pc = 0x281B94u;
    SET_GPR_U32(ctx, 31, 0x281B9Cu);
    ctx->pc = 0x281B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B94u;
    // 0x281b98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x281B94u, 0x281B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B9Cu;
label_281b9c:
    // 0x281b9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ba0: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x281BA0u;
    SET_GPR_U32(ctx, 31, 0x281BA8u);
    ctx->pc = 0x281BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BA0u;
    // 0x281ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x281BA0u, 0x281BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BA8u;
label_281ba8:
    // 0x281ba8: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x281bac: 0xc6840010  lwc1        $f4, 0x10($s4)
    ctx->pc = 0x281bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281bb0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x281bb4: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x281bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281bb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x281bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281bbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x281bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281bc0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x281bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x281bc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x281bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x281bc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x281bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281bcc: 0xe6810010  swc1        $f1, 0x10($s4)
    ctx->pc = 0x281bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x281bd0: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x281bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281bd4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x281bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281bd8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x281bd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x281bdc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x281bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x281be0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x281be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x281be4: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x281be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_281be8:
    // 0x281be8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x281be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x281bec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x281becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x281bf0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x281bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x281bf4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x281bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x281bf8: 0xc44007b0  lwc1        $f0, 0x7B0($v0)
    ctx->pc = 0x281bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281bfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x281bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c00: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x281c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281c04: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x281c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x281c08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281c0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x281C0Cu;
    {
        const bool branch_taken_0x281c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C0Cu;
        // 0x281c10: 0xe46007e0  swc1        $f0, 0x7E0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c0c) {
            ctx->pc = 0x281BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281be8;
        }
    }
    ctx->pc = 0x281C14u;
    // 0x281c14: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x281c18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c1c: 0x24503a80  addiu       $s0, $v0, 0x3A80
    ctx->pc = 0x281c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x281c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c24: 0xc0af232  jal         func_2BC8C8
    ctx->pc = 0x281C24u;
    SET_GPR_U32(ctx, 31, 0x281C2Cu);
    ctx->pc = 0x281C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C24u;
    // 0x281c28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC8C8u, 0x281C24u, 0x281C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C2Cu;
label_281c2c:
    // 0x281c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c34: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x281C34u;
    SET_GPR_U32(ctx, 31, 0x281C3Cu);
    ctx->pc = 0x281C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C34u;
    // 0x281c38: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x281C34u, 0x281C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C3Cu;
label_281c3c:
    // 0x281c3c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x281c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x281c40: 0xc084814  jal         func_212050
    ctx->pc = 0x281C40u;
    SET_GPR_U32(ctx, 31, 0x281C48u);
    ctx->pc = 0x281C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C40u;
    // 0x281c44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x281C40u, 0x281C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C48u;
label_281c48:
    // 0x281c48: 0x8e42080c  lw          $v0, 0x80C($s2)
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x281c4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x281c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x281c50: 0x4600037  bltz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x281C50u;
    {
        const bool branch_taken_0x281c50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x281C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C50u;
        // 0x281c54: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c50) {
            ctx->pc = 0x281D30u;
            goto label_281d30;
        }
    }
    ctx->pc = 0x281C58u;
    // 0x281c58: 0x864202fa  lh          $v0, 0x2FA($s2)
    ctx->pc = 0x281c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 762)));
    // 0x281c5c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x281C5Cu;
    {
        const bool branch_taken_0x281c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C5Cu;
        // 0x281c60: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c5c) {
            ctx->pc = 0x281D34u;
            goto label_281d34;
        }
    }
    ctx->pc = 0x281C64u;
    // 0x281c64: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x281c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x281c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281c70: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x281C70u;
    {
        const bool branch_taken_0x281c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C70u;
        // 0x281c74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c70) {
            ctx->pc = 0x281D38u;
            goto label_281d38;
        }
    }
    ctx->pc = 0x281C78u;
    // 0x281c78: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x281c78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c7c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281c80: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x281c80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281c84: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x281c88: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x281c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x281c8c: 0x0  nop
    ctx->pc = 0x281c8cu;
    // NOP
label_281c90:
    // 0x281c90: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x281c90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x281c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c98: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x281c9c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281ca0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x281ca4: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x281CA4u;
    SET_GPR_U32(ctx, 31, 0x281CACu);
    ctx->pc = 0x281CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CA4u;
    // 0x281ca8: 0x468021  addu        $s0, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x281CA4u, 0x281CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CACu;
label_281cac:
    // 0x281cac: 0x12750003  beq         $s3, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x281CACu;
    {
        const bool branch_taken_0x281cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x281cac) {
            ctx->pc = 0x281CBCu;
            goto label_281cbc;
        }
    }
    ctx->pc = 0x281CB4u;
    // 0x281cb4: 0x16740006  bne         $s3, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x281CB4u;
    {
        const bool branch_taken_0x281cb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x281CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CB4u;
        // 0x281cb8: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cb4) {
            ctx->pc = 0x281CD0u;
            goto label_281cd0;
        }
    }
    ctx->pc = 0x281CBCu;
label_281cbc:
    // 0x281cbc: 0xc78c8fd0  lwc1        $f12, -0x7030($gp)
    ctx->pc = 0x281cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cc4: 0xc084a62  jal         func_212988
    ctx->pc = 0x281CC4u;
    SET_GPR_U32(ctx, 31, 0x281CCCu);
    ctx->pc = 0x281CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CC4u;
    // 0x281cc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x281CC4u, 0x281CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CCCu;
label_281ccc:
    // 0x281ccc: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x281cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_281cd0:
    // 0x281cd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x281cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x281cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281ce0: 0x564021  addu        $t0, $v0, $s6
    ctx->pc = 0x281ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x281ce4: 0x0  nop
    ctx->pc = 0x281ce4u;
    // NOP
label_281ce8:
    // 0x281ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cec: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x281cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cf0: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x281cf0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x281cf4: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x281cf4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281cf8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x281cf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x281cfc: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x281cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x281d00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x281d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x281d04: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x281d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281d08: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x281d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x281d0c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x281d10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x281D10u;
    {
        const bool branch_taken_0x281d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D10u;
        // 0x281d14: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d10) {
            ctx->pc = 0x281CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281ce8;
        }
    }
    ctx->pc = 0x281D18u;
    // 0x281d18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x281d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x281d1c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x281d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x281d20: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x281D20u;
    {
        const bool branch_taken_0x281d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281d20) {
            ctx->pc = 0x281D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281D20u;
            // 0x281d24: 0x8e430894  lw          $v1, 0x894($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281c90;
        }
    }
    ctx->pc = 0x281D28u;
    // 0x281d28: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x281D28u;
    {
        const bool branch_taken_0x281d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D28u;
        // 0x281d2c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d28) {
            ctx->pc = 0x281E84u;
            goto label_281e84;
        }
    }
    ctx->pc = 0x281D30u;
label_281d30:
    // 0x281d30: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x281d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_281d34:
    // 0x281d34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x281d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d38:
    // 0x281d38: 0x24493a80  addiu       $t1, $v0, 0x3A80
    ctx->pc = 0x281d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x281d3c: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x281d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
label_281d40:
    // 0x281d40: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x281d44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x281d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281d48: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x281d4c: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x281d50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281d54: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x281d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281d58: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x281d5c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x281d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d64: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x281d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_281d68:
    // 0x281d68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d6c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x281d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d70: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x281d70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x281d74: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x281d74u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281d78: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x281d78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x281d7c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x281d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x281d80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x281d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x281d84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x281d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281d88: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x281d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x281d8c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x281d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x281d90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x281D90u;
    {
        const bool branch_taken_0x281d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D90u;
        // 0x281d94: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d90) {
            ctx->pc = 0x281D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281d68;
        }
    }
    ctx->pc = 0x281D98u;
    // 0x281d98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x281d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x281d9c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x281d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x281da0: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x281DA0u;
    {
        const bool branch_taken_0x281da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281da0) {
            ctx->pc = 0x281DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281DA0u;
            // 0x281da4: 0x8e430894  lw          $v1, 0x894($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281d40;
        }
    }
    ctx->pc = 0x281DA8u;
    // 0x281da8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x281DA8u;
    {
        const bool branch_taken_0x281da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DA8u;
        // 0x281dac: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281da8) {
            ctx->pc = 0x281E84u;
            goto label_281e84;
        }
    }
    ctx->pc = 0x281DB0u;
label_281db0:
    // 0x281db0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x281db0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x281db4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x281db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x281db8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x281db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x281dbc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x281dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281dc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x281dc4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x281dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281dc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281dcc: 0xe46107e0  swc1        $f1, 0x7E0($v1)
    ctx->pc = 0x281dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2016), bits); }
label_281dd0:
    // 0x281dd0: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x281dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x281dd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x281DD4u;
    {
        const bool branch_taken_0x281dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DD4u;
        // 0x281dd8: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281dd4) {
            ctx->pc = 0x281DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281db0;
        }
    }
    ctx->pc = 0x281DDCu;
    // 0x281ddc: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x281ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x281de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281de4: 0x26313a80  addiu       $s1, $s1, 0x3A80
    ctx->pc = 0x281de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14976));
    // 0x281de8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x281de8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x281dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281df0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281df4: 0xc0af232  jal         func_2BC8C8
    ctx->pc = 0x281DF4u;
    SET_GPR_U32(ctx, 31, 0x281DFCu);
    ctx->pc = 0x281DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281DF4u;
    // 0x281df8: 0x261046e0  addiu       $s0, $s0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC8C8u, 0x281DF4u, 0x281DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DFCu;
label_281dfc:
    // 0x281dfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x281dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e08: 0xc0af232  jal         func_2BC8C8
    ctx->pc = 0x281E08u;
    SET_GPR_U32(ctx, 31, 0x281E10u);
    ctx->pc = 0x281E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E08u;
    // 0x281e0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC8C8u, 0x281E08u, 0x281E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E10u;
label_281e10:
    // 0x281e10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x281e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e14: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x281e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
label_281e18:
    // 0x281e18: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x281e1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x281e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281e20: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x281e24: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x281e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281e28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281e2c: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x281e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x281e30: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x281e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x281e34: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x281e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x281e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e3c: 0x0  nop
    ctx->pc = 0x281e3cu;
    // NOP
label_281e40:
    // 0x281e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e44: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x281e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e48: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x281e48u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x281e4c: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x281e4cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281e50: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x281e50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x281e54: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x281e54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x281e58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x281e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x281e5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x281e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281e60: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x281e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x281e64: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x281e68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x281E68u;
    {
        const bool branch_taken_0x281e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E68u;
        // 0x281e6c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e68) {
            ctx->pc = 0x281E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281e40;
        }
    }
    ctx->pc = 0x281E70u;
    // 0x281e70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x281e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x281e74: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x281e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x281e78: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x281E78u;
    {
        const bool branch_taken_0x281e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281e78) {
            ctx->pc = 0x281E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E78u;
            // 0x281e7c: 0x8e430894  lw          $v1, 0x894($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281e18;
        }
    }
    ctx->pc = 0x281E80u;
    // 0x281e80: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x281e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281e84:
    // 0x281e84: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x281e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_281e88:
    // 0x281e88: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x281e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x281e8c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x281e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x281e90: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x281e90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x281e94: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x281e94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x281e98: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x281e98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x281e9c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x281e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x281ea0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x281ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281ea4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x281ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x281EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EA8u;
        // 0x281eac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281EB0u;
}
