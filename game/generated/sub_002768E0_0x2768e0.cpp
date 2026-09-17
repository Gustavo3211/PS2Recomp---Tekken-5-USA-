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

// Function: sub_002768E0
// Address: 0x2768e0 - 0x276dc0
void sub_002768E0_0x2768e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002768E0_0x2768e0");
#endif

    switch (ctx->pc) {
        case 0x276910u: goto label_276910;
        case 0x276928u: goto label_276928;
        case 0x276988u: goto label_276988;
        case 0x276994u: goto label_276994;
        case 0x2769ccu: goto label_2769cc;
        case 0x2769d8u: goto label_2769d8;
        case 0x2769e8u: goto label_2769e8;
        case 0x276a18u: goto label_276a18;
        case 0x276a70u: goto label_276a70;
        case 0x276ac8u: goto label_276ac8;
        case 0x276aecu: goto label_276aec;
        case 0x276b4cu: goto label_276b4c;
        case 0x276bc4u: goto label_276bc4;
        case 0x276c70u: goto label_276c70;
        case 0x276c7cu: goto label_276c7c;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cd0u: goto label_276cd0;
        case 0x276d08u: goto label_276d08;
        case 0x276d14u: goto label_276d14;
        case 0x276d64u: goto label_276d64;
        case 0x276d70u: goto label_276d70;
        case 0x276d90u: goto label_276d90;
        default: break;
    }

    ctx->pc = 0x2768e0u;

    // 0x2768e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2768e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2768e4: 0xaf80ca58  sw          $zero, -0x35A8($gp)
    ctx->pc = 0x2768e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953560), GPR_U32(ctx, 0));
    // 0x2768e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2768e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2768ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2768ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2768f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2768f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2768f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2768f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2768f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2768f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2768fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2768fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x276900: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x276900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x276904: 0xaf92ca54  sw          $s2, -0x35AC($gp)
    ctx->pc = 0x276904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953556), GPR_U32(ctx, 18));
    // 0x276908: 0xc09d940  jal         func_276500
    ctx->pc = 0x276908u;
    SET_GPR_U32(ctx, 31, 0x276910u);
    ctx->pc = 0x27690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276908u;
    // 0x27690c: 0xaf80ca60  sw          $zero, -0x35A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953568), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x276908u, 0x276910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276910u;
label_276910:
    // 0x276910: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x276910u;
    {
        const bool branch_taken_0x276910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276910) {
            ctx->pc = 0x276AC0u;
            goto label_276ac0;
        }
    }
    ctx->pc = 0x276918u;
    // 0x276918: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x276918u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x27691c: 0x267101c0  addiu       $s1, $s3, 0x1C0
    ctx->pc = 0x27691cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x276920: 0xc07daf2  jal         func_1F6BC8
    ctx->pc = 0x276920u;
    SET_GPR_U32(ctx, 31, 0x276928u);
    ctx->pc = 0x276924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276920u;
    // 0x276924: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC8u, 0x276920u, 0x276928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276928u;
label_276928:
    // 0x276928: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27692c: 0x8e290084  lw          $t1, 0x84($s1)
    ctx->pc = 0x27692cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x276930: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x276934: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x276934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x276938: 0x92260099  lbu         $a2, 0x99($s1)
    ctx->pc = 0x276938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
    // 0x27693c: 0x9227009a  lbu         $a3, 0x9A($s1)
    ctx->pc = 0x27693cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 154)));
    // 0x276940: 0x9228009c  lbu         $t0, 0x9C($s1)
    ctx->pc = 0x276940u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x276944: 0x9223009d  lbu         $v1, 0x9D($s1)
    ctx->pc = 0x276944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 157)));
    // 0x276948: 0x862404fc  lh          $a0, 0x4FC($s1)
    ctx->pc = 0x276948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1276)));
    // 0x27694c: 0xa0430019  sb          $v1, 0x19($v0)
    ctx->pc = 0x27694cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A83D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D9u, _value); } while (0);
    // 0x276950: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x276950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3A83C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A83C0u, _value); } while (0);
    // 0x276954: 0xac450038  sw          $a1, 0x38($v0)
    ctx->pc = 0x276954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3A83F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A83F8u, _value); } while (0);
    // 0x276958: 0xa0460015  sb          $a2, 0x15($v0)
    ctx->pc = 0x276958u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3A83D5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D5u, _value); } while (0);
    // 0x27695c: 0xa0470016  sb          $a3, 0x16($v0)
    ctx->pc = 0x27695cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3A83D6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D6u, _value); } while (0);
    // 0x276960: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x276960u;
    {
        const bool branch_taken_0x276960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276960u;
        // 0x276964: 0xa0480018  sb          $t0, 0x18($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276960) {
            ctx->pc = 0x2769A0u;
            goto label_2769a0;
        }
    }
    ctx->pc = 0x276968u;
    // 0x276968: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27696c: 0x26300500  addiu       $s0, $s1, 0x500
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
    // 0x276970: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x276970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x276974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27697c: 0xac7208bc  sw          $s2, 0x8BC($v1)
    ctx->pc = 0x27697cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 18));
    // 0x276980: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x276980u;
    SET_GPR_U32(ctx, 31, 0x276988u);
    ctx->pc = 0x276984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276980u;
    // 0x276984: 0x862504f4  lh          $a1, 0x4F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x276980u, 0x276988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276988u;
label_276988:
    // 0x276988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27698c: 0xc0b2424  jal         func_2C9090
    ctx->pc = 0x27698Cu;
    SET_GPR_U32(ctx, 31, 0x276994u);
    ctx->pc = 0x276990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27698Cu;
    // 0x276990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9090u, 0x27698Cu, 0x276994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276994u;
label_276994:
    // 0x276994: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x276994u;
    {
        const bool branch_taken_0x276994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276994u;
        // 0x276998: 0x266701c0  addiu       $a3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276994) {
            ctx->pc = 0x2769ECu;
            goto label_2769ec;
        }
    }
    ctx->pc = 0x27699Cu;
    // 0x27699c: 0x0  nop
    ctx->pc = 0x27699cu;
    // NOP
label_2769a0:
    // 0x2769a0: 0x862204f8  lh          $v0, 0x4F8($s1)
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1272)));
    // 0x2769a4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2769A4u;
    {
        const bool branch_taken_0x2769a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2769a4) {
            ctx->pc = 0x2769A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2769A4u;
            // 0x2769a8: 0x862504f4  lh          $a1, 0x4F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2769E0u;
            goto label_2769e0;
        }
    }
    ctx->pc = 0x2769ACu;
    // 0x2769ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2769acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2769b0: 0x26300500  addiu       $s0, $s1, 0x500
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
    // 0x2769b4: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x2769b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2769b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2769b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2769bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769c0: 0xac7208bc  sw          $s2, 0x8BC($v1)
    ctx->pc = 0x2769c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 18));
    // 0x2769c4: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x2769C4u;
    SET_GPR_U32(ctx, 31, 0x2769CCu);
    ctx->pc = 0x2769C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769C4u;
    // 0x2769c8: 0x862504f4  lh          $a1, 0x4F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x2769C4u, 0x2769CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769CCu;
label_2769cc:
    // 0x2769cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2769ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769d0: 0xc0b24c0  jal         func_2C9300
    ctx->pc = 0x2769D0u;
    SET_GPR_U32(ctx, 31, 0x2769D8u);
    ctx->pc = 0x2769D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769D0u;
    // 0x2769d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9300u, 0x2769D0u, 0x2769D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769D8u;
label_2769d8:
    // 0x2769d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2769D8u;
    {
        const bool branch_taken_0x2769d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D8u;
        // 0x2769dc: 0x266701c0  addiu       $a3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769d8) {
            ctx->pc = 0x2769ECu;
            goto label_2769ec;
        }
    }
    ctx->pc = 0x2769E0u;
label_2769e0:
    // 0x2769e0: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x2769E0u;
    SET_GPR_U32(ctx, 31, 0x2769E8u);
    ctx->pc = 0x2769E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769E0u;
    // 0x2769e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x2769E0u, 0x2769E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769E8u;
label_2769e8:
    // 0x2769e8: 0x266701c0  addiu       $a3, $s3, 0x1C0
    ctx->pc = 0x2769e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_2769ec:
    // 0x2769ec: 0x84e204fe  lh          $v0, 0x4FE($a3)
    ctx->pc = 0x2769ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1278)));
    // 0x2769f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2769F0u;
    {
        const bool branch_taken_0x2769f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769F0u;
        // 0x2769f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769f0) {
            ctx->pc = 0x276A40u;
            goto label_276a40;
        }
    }
    ctx->pc = 0x2769F8u;
    // 0x2769f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2769f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2769fc: 0x8c4388d4  lw          $v1, -0x772C($v0)
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    // 0x276a00: 0x24f0055c  addiu       $s0, $a3, 0x55C
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1372));
    // 0x276a04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a0c: 0xac6508bc  sw          $a1, 0x8BC($v1)
    ctx->pc = 0x276a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 5));
    // 0x276a10: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x276A10u;
    SET_GPR_U32(ctx, 31, 0x276A18u);
    ctx->pc = 0x276A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A10u;
    // 0x276a14: 0x84e504f6  lh          $a1, 0x4F6($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1270)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x276A10u, 0x276A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A18u;
label_276a18:
    // 0x276a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276a2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x276a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276a30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x276a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276a34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276a38: 0x80b2424  j           func_2C9090
    ctx->pc = 0x276A38u;
    ctx->pc = 0x276A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A38u;
    // 0x276a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9090u;
    sub_002C9090_0x2c9090(rdram, ctx, runtime); return;
    ctx->pc = 0x276A40u;
label_276a40:
    // 0x276a40: 0x84e204fa  lh          $v0, 0x4FA($a3)
    ctx->pc = 0x276a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1274)));
    // 0x276a44: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x276A44u;
    {
        const bool branch_taken_0x276a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276a44) {
            ctx->pc = 0x276A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A44u;
            // 0x276a48: 0x84e504f6  lh          $a1, 0x4F6($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1270)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A98u;
            goto label_276a98;
        }
    }
    ctx->pc = 0x276A4Cu;
    // 0x276a4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x276a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a54: 0x8c4388d4  lw          $v1, -0x772C($v0)
    ctx->pc = 0x276a54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x276a58: 0x24f0055c  addiu       $s0, $a3, 0x55C
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1372));
    // 0x276a5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a64: 0xac6508bc  sw          $a1, 0x8BC($v1)
    ctx->pc = 0x276a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 5));
    // 0x276a68: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x276A68u;
    SET_GPR_U32(ctx, 31, 0x276A70u);
    ctx->pc = 0x276A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A68u;
    // 0x276a6c: 0x84e504f6  lh          $a1, 0x4F6($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1270)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x276A68u, 0x276A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A70u;
label_276a70:
    // 0x276a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276a84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x276a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276a88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x276a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276a8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276a90: 0x80b24c0  j           func_2C9300
    ctx->pc = 0x276A90u;
    ctx->pc = 0x276A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A90u;
    // 0x276a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9300u;
    sub_002C9300_0x2c9300(rdram, ctx, runtime); return;
    ctx->pc = 0x276A98u;
label_276a98:
    // 0x276a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x276aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276aac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x276aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276ab0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276ab4: 0x80b719a  j           func_2DC668
    ctx->pc = 0x276AB4u;
    ctx->pc = 0x276AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276AB4u;
    // 0x276ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    sub_002DC668_0x2dc668(rdram, ctx, runtime); return;
    ctx->pc = 0x276ABCu;
    // 0x276abc: 0x0  nop
    ctx->pc = 0x276abcu;
    // NOP
label_276ac0:
    // 0x276ac0: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x276AC0u;
    SET_GPR_U32(ctx, 31, 0x276AC8u);
    ctx->pc = 0x276AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276AC0u;
    // 0x276ac4: 0x3c130017  lui         $s3, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x276AC0u, 0x276AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AC8u;
label_276ac8:
    // 0x276ac8: 0x266501c0  addiu       $a1, $s3, 0x1C0
    ctx->pc = 0x276ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x276acc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x276accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x276ad0: 0x24a60084  addiu       $a2, $a1, 0x84
    ctx->pc = 0x276ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x276ad4: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x276ad8: 0x861825  or          $v1, $a0, $a2
    ctx->pc = 0x276ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x276adc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x276adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x276ae0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x276AE0u;
    {
        const bool branch_taken_0x276ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AE0u;
        // 0x276ae4: 0xaca20074  sw          $v0, 0x74($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ae0) {
            ctx->pc = 0x276B48u;
            goto label_276b48;
        }
    }
    ctx->pc = 0x276AE8u;
    // 0x276ae8: 0x24820440  addiu       $v0, $a0, 0x440
    ctx->pc = 0x276ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
label_276aec:
    // 0x276aec: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x276aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x276af0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x276af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x276af4: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x276af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x276af8: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x276af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x276afc: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x276afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x276b00: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x276b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x276b04: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x276b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x276b08: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x276b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x276b0c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x276b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b10: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x276b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b14: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x276b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b18: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x276b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b1c: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x276b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b20: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x276b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b24: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x276b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b28: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x276b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b2c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x276b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x276b30: 0x0  nop
    ctx->pc = 0x276b30u;
    // NOP
    // 0x276b34: 0x0  nop
    ctx->pc = 0x276b34u;
    // NOP
    // 0x276b38: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x276B38u;
    {
        const bool branch_taken_0x276b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x276B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B38u;
        // 0x276b3c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b38) {
            ctx->pc = 0x276AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276aec;
        }
    }
    ctx->pc = 0x276B40u;
    // 0x276b40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x276B40u;
    {
        const bool branch_taken_0x276b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276b40) {
            ctx->pc = 0x276B80u;
            goto label_276b80;
        }
    }
    ctx->pc = 0x276B48u;
label_276b48:
    // 0x276b48: 0x24820440  addiu       $v0, $a0, 0x440
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
label_276b4c:
    // 0x276b4c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x276b4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276b50: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x276b50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x276b54: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x276b54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x276b58: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x276b58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x276b5c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x276b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x276b60: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x276b60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x276b64: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x276b64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x276b68: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x276b68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x276b6c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x276b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x276b70: 0x0  nop
    ctx->pc = 0x276b70u;
    // NOP
    // 0x276b74: 0x0  nop
    ctx->pc = 0x276b74u;
    // NOP
    // 0x276b78: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x276B78u;
    {
        const bool branch_taken_0x276b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x276B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B78u;
        // 0x276b7c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b78) {
            ctx->pc = 0x276B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276b4c;
        }
    }
    ctx->pc = 0x276B80u;
label_276b80:
    // 0x276b80: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x276b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x276b84: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x276b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x276b88: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x276b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x276b8c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x276b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x276b90: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x276b94: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x276b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b98: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x276b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276b9c: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x276b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276ba0: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x276ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276ba4: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x276ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x276ba8: 0x26908858  addiu       $s0, $s4, -0x77A8
    ctx->pc = 0x276ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x276bac: 0x267101c0  addiu       $s1, $s3, 0x1C0
    ctx->pc = 0x276bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x276bb0: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x276bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x276bb4: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x276bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x276bb8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8884u));
    // 0x276bbc: 0xc085112  jal         func_214448
    ctx->pc = 0x276BBCu;
    SET_GPR_U32(ctx, 31, 0x276BC4u);
    ctx->pc = 0x276BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BBCu;
    // 0x276bc0: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214448u, 0x276BBCu, 0x276BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BC4u;
label_276bc4:
    // 0x276bc4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x276bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x276bc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276bcc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x276bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x276bd0: 0xae2304dc  sw          $v1, 0x4DC($s1)
    ctx->pc = 0x276bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1244), GPR_U32(ctx, 3));
    // 0x276bd4: 0x264588d0  addiu       $a1, $s2, -0x7730
    ctx->pc = 0x276bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936784));
    // 0x276bd8: 0xae2004d8  sw          $zero, 0x4D8($s1)
    ctx->pc = 0x276bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1240), GPR_U32(ctx, 0));
    // 0x276bdc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x276bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x276be0: 0xae2904e0  sw          $t1, 0x4E0($s1)
    ctx->pc = 0x276be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1248), GPR_U32(ctx, 9));
    // 0x276be4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x276be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x276be8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x276be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x276bec: 0x94e2003e  lhu         $v0, 0x3E($a3)
    ctx->pc = 0x276becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 62)));
    // 0x276bf0: 0xa62204e4  sh          $v0, 0x4E4($s1)
    ctx->pc = 0x276bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1252), (uint16_t)GPR_U32(ctx, 2));
    // 0x276bf4: 0x9483003e  lhu         $v1, 0x3E($a0)
    ctx->pc = 0x276bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x276bf8: 0xa62304e6  sh          $v1, 0x4E6($s1)
    ctx->pc = 0x276bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1254), (uint16_t)GPR_U32(ctx, 3));
    // 0x276bfc: 0x94e20040  lhu         $v0, 0x40($a3)
    ctx->pc = 0x276bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x276c00: 0xa62204e8  sh          $v0, 0x4E8($s1)
    ctx->pc = 0x276c00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1256), (uint16_t)GPR_U32(ctx, 2));
    // 0x276c04: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x276c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x276c08: 0xae2604f0  sw          $a2, 0x4F0($s1)
    ctx->pc = 0x276c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1264), GPR_U32(ctx, 6));
    // 0x276c0c: 0xa62304ea  sh          $v1, 0x4EA($s1)
    ctx->pc = 0x276c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1258), (uint16_t)GPR_U32(ctx, 3));
    // 0x276c10: 0xae2604ec  sw          $a2, 0x4EC($s1)
    ctx->pc = 0x276c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1260), GPR_U32(ctx, 6));
    // 0x276c14: 0x94e20042  lhu         $v0, 0x42($a3)
    ctx->pc = 0x276c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x276c18: 0xa62204f4  sh          $v0, 0x4F4($s1)
    ctx->pc = 0x276c18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1268), (uint16_t)GPR_U32(ctx, 2));
    // 0x276c1c: 0x94830042  lhu         $v1, 0x42($a0)
    ctx->pc = 0x276c1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x276c20: 0xa62304f6  sh          $v1, 0x4F6($s1)
    ctx->pc = 0x276c20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1270), (uint16_t)GPR_U32(ctx, 3));
    // 0x276c24: 0x90e201bc  lbu         $v0, 0x1BC($a3)
    ctx->pc = 0x276c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x276c28: 0xa62204f8  sh          $v0, 0x4F8($s1)
    ctx->pc = 0x276c28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1272), (uint16_t)GPR_U32(ctx, 2));
    // 0x276c2c: 0x908301bc  lbu         $v1, 0x1BC($a0)
    ctx->pc = 0x276c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x276c30: 0xa62304fa  sh          $v1, 0x4FA($s1)
    ctx->pc = 0x276c30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1274), (uint16_t)GPR_U32(ctx, 3));
    // 0x276c34: 0x90e201bd  lbu         $v0, 0x1BD($a3)
    ctx->pc = 0x276c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 445)));
    // 0x276c38: 0xa62204fc  sh          $v0, 0x4FC($s1)
    ctx->pc = 0x276c38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1276), (uint16_t)GPR_U32(ctx, 2));
    // 0x276c3c: 0x908301bd  lbu         $v1, 0x1BD($a0)
    ctx->pc = 0x276c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
    // 0x276c40: 0xa62304fe  sh          $v1, 0x4FE($s1)
    ctx->pc = 0x276c40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1278), (uint16_t)GPR_U32(ctx, 3));
    // 0x276c44: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x276c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x276c48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276C48u;
    {
        const bool branch_taken_0x276c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C48u;
        // 0x276c4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c48) {
            ctx->pc = 0x276C58u;
            goto label_276c58;
        }
    }
    ctx->pc = 0x276C50u;
    // 0x276c50: 0x90e201bc  lbu         $v0, 0x1BC($a3)
    ctx->pc = 0x276c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x276c54: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x276c54u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_276c58:
    // 0x276c58: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x276C58u;
    {
        const bool branch_taken_0x276c58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C58u;
        // 0x276c5c: 0x26300500  addiu       $s0, $s1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c58) {
            ctx->pc = 0x276C88u;
            goto label_276c88;
        }
    }
    ctx->pc = 0x276C60u;
    // 0x276c60: 0x84e50042  lh          $a1, 0x42($a3)
    ctx->pc = 0x276c60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x276c64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c68: 0xc0b70d8  jal         func_2DC360
    ctx->pc = 0x276C68u;
    SET_GPR_U32(ctx, 31, 0x276C70u);
    ctx->pc = 0x276C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C68u;
    // 0x276c6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC360u, 0x276C68u, 0x276C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C70u;
label_276c70:
    // 0x276c70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c74: 0xc0b245c  jal         func_2C9170
    ctx->pc = 0x276C74u;
    SET_GPR_U32(ctx, 31, 0x276C7Cu);
    ctx->pc = 0x276C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C74u;
    // 0x276c78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9170u, 0x276C74u, 0x276C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C7Cu;
label_276c7c:
    // 0x276c7c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x276C7Cu;
    {
        const bool branch_taken_0x276c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C7Cu;
        // 0x276c80: 0x264288d0  addiu       $v0, $s2, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c7c) {
            ctx->pc = 0x276CD4u;
            goto label_276cd4;
        }
    }
    ctx->pc = 0x276C84u;
    // 0x276c84: 0x0  nop
    ctx->pc = 0x276c84u;
    // NOP
label_276c88:
    // 0x276c88: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x276C88u;
    {
        const bool branch_taken_0x276c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C88u;
        // 0x276c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c88) {
            ctx->pc = 0x276CA4u;
            goto label_276ca4;
        }
    }
    ctx->pc = 0x276C90u;
    // 0x276c90: 0x90e201bc  lbu         $v0, 0x1BC($a3)
    ctx->pc = 0x276c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x276c94: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276C94u;
    {
        const bool branch_taken_0x276c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x276c94) {
            ctx->pc = 0x276CA4u;
            goto label_276ca4;
        }
    }
    ctx->pc = 0x276C9Cu;
    // 0x276c9c: 0x90e201bd  lbu         $v0, 0x1BD($a3)
    ctx->pc = 0x276c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 445)));
    // 0x276ca0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x276ca0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_276ca4:
    // 0x276ca4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x276CA4u;
    {
        const bool branch_taken_0x276ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x276CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CA4u;
        // 0x276ca8: 0x8e4288d0  lw          $v0, -0x7730($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ca4) {
            ctx->pc = 0x276CD0u;
            goto label_276cd0;
        }
    }
    ctx->pc = 0x276CACu;
    // 0x276cac: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x276cacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x276cb0: 0x261006c0  addiu       $s0, $s0, 0x6C0
    ctx->pc = 0x276cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x276cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276cb8: 0x84450042  lh          $a1, 0x42($v0)
    ctx->pc = 0x276cb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x276cbc: 0xc0b70d8  jal         func_2DC360
    ctx->pc = 0x276CBCu;
    SET_GPR_U32(ctx, 31, 0x276CC4u);
    ctx->pc = 0x276CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CBCu;
    // 0x276cc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC360u, 0x276CBCu, 0x276CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CC4u;
label_276cc4:
    // 0x276cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x276cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276cc8: 0xc0b24ec  jal         func_2C93B0
    ctx->pc = 0x276CC8u;
    SET_GPR_U32(ctx, 31, 0x276CD0u);
    ctx->pc = 0x276CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CC8u;
    // 0x276ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93B0u, 0x276CC8u, 0x276CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CD0u;
label_276cd0:
    // 0x276cd0: 0x264288d0  addiu       $v0, $s2, -0x7730
    ctx->pc = 0x276cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936784));
label_276cd4:
    // 0x276cd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x276cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276cd8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x276cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x276cdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276CDCu;
    {
        const bool branch_taken_0x276cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CDCu;
        // 0x276ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cdc) {
            ctx->pc = 0x276CECu;
            goto label_276cec;
        }
    }
    ctx->pc = 0x276CE4u;
    // 0x276ce4: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x276ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x276ce8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x276ce8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_276cec:
    // 0x276cec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x276CECu;
    {
        const bool branch_taken_0x276cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x276CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CECu;
        // 0x276cf0: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cec) {
            ctx->pc = 0x276D20u;
            goto label_276d20;
        }
    }
    ctx->pc = 0x276CF4u;
    // 0x276cf4: 0x84850042  lh          $a1, 0x42($a0)
    ctx->pc = 0x276cf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x276cf8: 0x2610071c  addiu       $s0, $s0, 0x71C
    ctx->pc = 0x276cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
    // 0x276cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d00: 0xc0b70d8  jal         func_2DC360
    ctx->pc = 0x276D00u;
    SET_GPR_U32(ctx, 31, 0x276D08u);
    ctx->pc = 0x276D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D00u;
    // 0x276d04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC360u, 0x276D00u, 0x276D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D08u;
label_276d08:
    // 0x276d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d0c: 0xc0b245c  jal         func_2C9170
    ctx->pc = 0x276D0Cu;
    SET_GPR_U32(ctx, 31, 0x276D14u);
    ctx->pc = 0x276D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D0Cu;
    // 0x276d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9170u, 0x276D0Cu, 0x276D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D14u;
label_276d14:
    // 0x276d14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x276D14u;
    {
        const bool branch_taken_0x276d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D14u;
        // 0x276d18: 0x267001c0  addiu       $s0, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d14) {
            ctx->pc = 0x276D74u;
            goto label_276d74;
        }
    }
    ctx->pc = 0x276D1Cu;
    // 0x276d1c: 0x0  nop
    ctx->pc = 0x276d1cu;
    // NOP
label_276d20:
    // 0x276d20: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x276D20u;
    {
        const bool branch_taken_0x276d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D20u;
        // 0x276d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d20) {
            ctx->pc = 0x276D40u;
            goto label_276d40;
        }
    }
    ctx->pc = 0x276D28u;
    // 0x276d28: 0x908301bc  lbu         $v1, 0x1BC($a0)
    ctx->pc = 0x276d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x276d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276D30u;
    {
        const bool branch_taken_0x276d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276d30) {
            ctx->pc = 0x276D40u;
            goto label_276d40;
        }
    }
    ctx->pc = 0x276D38u;
    // 0x276d38: 0x908201bd  lbu         $v0, 0x1BD($a0)
    ctx->pc = 0x276d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
    // 0x276d3c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x276d3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_276d40:
    // 0x276d40: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x276D40u;
    {
        const bool branch_taken_0x276d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D40u;
        // 0x276d44: 0x264288d0  addiu       $v0, $s2, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d40) {
            ctx->pc = 0x276D70u;
            goto label_276d70;
        }
    }
    ctx->pc = 0x276D48u;
    // 0x276d48: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x276d48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x276d4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x276d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276d50: 0x2610071c  addiu       $s0, $s0, 0x71C
    ctx->pc = 0x276d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
    // 0x276d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d5c: 0xc0b70d8  jal         func_2DC360
    ctx->pc = 0x276D5Cu;
    SET_GPR_U32(ctx, 31, 0x276D64u);
    ctx->pc = 0x276D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D5Cu;
    // 0x276d60: 0x84650042  lh          $a1, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC360u, 0x276D5Cu, 0x276D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D64u;
label_276d64:
    // 0x276d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x276d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d68: 0xc0b24ec  jal         func_2C93B0
    ctx->pc = 0x276D68u;
    SET_GPR_U32(ctx, 31, 0x276D70u);
    ctx->pc = 0x276D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D68u;
    // 0x276d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93B0u, 0x276D68u, 0x276D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D70u;
label_276d70:
    // 0x276d70: 0x267001c0  addiu       $s0, $s3, 0x1C0
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_276d74:
    // 0x276d74: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x276d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x276d78: 0x960205b8  lhu         $v0, 0x5B8($s0)
    ctx->pc = 0x276d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x276d7c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276D7Cu;
    {
        const bool branch_taken_0x276d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x276D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D7Cu;
        // 0x276d80: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d7c) {
            ctx->pc = 0x276D88u;
            goto label_276d88;
        }
    }
    ctx->pc = 0x276D84u;
    // 0x276d84: 0xa60205b8  sh          $v0, 0x5B8($s0)
    ctx->pc = 0x276d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1464), (uint16_t)GPR_U32(ctx, 2));
label_276d88:
    // 0x276d88: 0xc07daf0  jal         func_1F6BC0
    ctx->pc = 0x276D88u;
    SET_GPR_U32(ctx, 31, 0x276D90u);
    ctx->pc = 0x1F6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BC0u, 0x276D88u, 0x276D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D90u;
label_276d90:
    // 0x276d90: 0x26838858  addiu       $v1, $s4, -0x77A8
    ctx->pc = 0x276d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x276d94: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x276d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x276d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276d9c: 0xa60205ba  sh          $v0, 0x5BA($s0)
    ctx->pc = 0x276d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1466), (uint16_t)GPR_U32(ctx, 2));
    // 0x276da0: 0xa60405b8  sh          $a0, 0x5B8($s0)
    ctx->pc = 0x276da0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1464), (uint16_t)GPR_U32(ctx, 4));
    // 0x276da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276dac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x276dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276db0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x276db0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276db4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276db8: 0x3e00008  jr          $ra
    ctx->pc = 0x276DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DB8u;
        // 0x276dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276DC0u;
}
