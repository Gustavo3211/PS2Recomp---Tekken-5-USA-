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

// Function: sub_00247358
// Address: 0x247358 - 0x2474a0
void sub_00247358_0x247358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247358_0x247358");
#endif

    switch (ctx->pc) {
        case 0x247408u: goto label_247408;
        case 0x247430u: goto label_247430;
        case 0x24744cu: goto label_24744c;
        default: break;
    }

    ctx->pc = 0x247358u;

    // 0x247358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24735c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247364: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247368: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x24736c: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x24736Cu;
    {
        const bool branch_taken_0x24736c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24736c) {
            ctx->pc = 0x247370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24736Cu;
            // 0x247370: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473F0u;
            goto label_2473f0;
        }
    }
    ctx->pc = 0x247374u;
    // 0x247374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x247374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247378: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x247378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24737c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24737cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x247380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247380u;
    {
        const bool branch_taken_0x247380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247380u;
        // 0x247384: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247380) {
            ctx->pc = 0x247390u;
            goto label_247390;
        }
    }
    ctx->pc = 0x247388u;
    // 0x247388: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x247388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x24738c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x24738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_247390:
    // 0x247390: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x247394: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x247398: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x247398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x24739c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24739Cu;
    {
        const bool branch_taken_0x24739c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2473A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24739Cu;
        // 0x2473a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24739c) {
            ctx->pc = 0x2473B0u;
            goto label_2473b0;
        }
    }
    ctx->pc = 0x2473A4u;
    // 0x2473a4: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x2473a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x2473a8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2473A8u;
    {
        const bool branch_taken_0x2473a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2473a8) {
            ctx->pc = 0x2473B4u;
            goto label_2473b4;
        }
    }
    ctx->pc = 0x2473B0u;
label_2473b0:
    // 0x2473b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2473b4:
    // 0x2473b4: 0x54a0000d  bnel        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x2473B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473B4u;
            // 0x2473b8: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473ECu;
            goto label_2473ec;
        }
    }
    ctx->pc = 0x2473BCu;
    // 0x2473bc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2473c0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2473c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2473c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2473c8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2473c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2473cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2473ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2473d0: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2473d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2473d4: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2473d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2473d8: 0x50a40004  beql        $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2473D8u;
    {
        const bool branch_taken_0x2473d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2473d8) {
            ctx->pc = 0x2473DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473D8u;
            // 0x2473dc: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473ECu;
            goto label_2473ec;
        }
    }
    ctx->pc = 0x2473E0u;
    // 0x2473e0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2473e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2473e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2473e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473e8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2473ec:
    // 0x2473ec: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2473ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2473f0:
    // 0x2473f0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2473F0u;
    {
        const bool branch_taken_0x2473f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2473f0) {
            ctx->pc = 0x247450u;
            goto label_247450;
        }
    }
    ctx->pc = 0x2473F8u;
    // 0x2473f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2473F8u;
    {
        const bool branch_taken_0x2473f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2473f8) {
            ctx->pc = 0x247428u;
            goto label_247428;
        }
    }
    ctx->pc = 0x247400u;
    // 0x247400: 0xc091c76  jal         func_2471D8
    ctx->pc = 0x247400u;
    SET_GPR_U32(ctx, 31, 0x247408u);
    ctx->pc = 0x247404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247400u;
    // 0x247404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2471D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2471D8u, 0x247400u, 0x247408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247408u;
label_247408:
    // 0x247408: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x247408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24740c: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x247410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24741c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24741Cu;
    {
        const bool branch_taken_0x24741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24741Cu;
        // 0x247420: 0x24e70005  addiu       $a3, $a3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24741c) {
            ctx->pc = 0x247444u;
            goto label_247444;
        }
    }
    ctx->pc = 0x247424u;
    // 0x247424: 0x0  nop
    ctx->pc = 0x247424u;
    // NOP
label_247428:
    // 0x247428: 0xc091c8a  jal         func_247228
    ctx->pc = 0x247428u;
    SET_GPR_U32(ctx, 31, 0x247430u);
    ctx->pc = 0x24742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247428u;
    // 0x24742c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247228u, 0x247428u, 0x247430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247430u;
label_247430:
    // 0x247430: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x247430u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x247434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24743c: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x247440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247444:
    // 0x247444: 0xc09850e  jal         func_261438
    ctx->pc = 0x247444u;
    SET_GPR_U32(ctx, 31, 0x24744Cu);
    ctx->pc = 0x261438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261438u, 0x247444u, 0x24744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24744Cu;
label_24744c:
    // 0x24744c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_247450:
    // 0x247450: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x247450u;
    {
        const bool branch_taken_0x247450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247450u;
        // 0x247454: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247450) {
            ctx->pc = 0x24748Cu;
            goto label_24748c;
        }
    }
    ctx->pc = 0x247458u;
    // 0x247458: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x247458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24745c: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24745cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x247460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247460u;
    {
        const bool branch_taken_0x247460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247460u;
        // 0x247464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247460) {
            ctx->pc = 0x247478u;
            goto label_247478;
        }
    }
    ctx->pc = 0x247468u;
    // 0x247468: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x247468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24746c: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x247470: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x247474: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x247474u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_247478:
    // 0x247478: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247478u;
    {
        const bool branch_taken_0x247478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247478) {
            ctx->pc = 0x24747Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247478u;
            // 0x24747c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247490u;
            goto label_247490;
        }
    }
    ctx->pc = 0x247480u;
    // 0x247480: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x247480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247488: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x247488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_24748c:
    // 0x24748c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247490:
    // 0x247490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247494: 0x3e00008  jr          $ra
    ctx->pc = 0x247494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247494u;
        // 0x247498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24749Cu;
    // 0x24749c: 0x0  nop
    ctx->pc = 0x24749cu;
    // NOP
    ctx->pc = 0x2474a0u;
}
