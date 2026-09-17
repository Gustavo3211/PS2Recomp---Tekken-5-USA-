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

// Function: sub_0028F218
// Address: 0x28f218 - 0x28f448
void sub_0028F218_0x28f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F218_0x28f218");
#endif

    switch (ctx->pc) {
        case 0x28f234u: goto label_28f234;
        case 0x28f250u: goto label_28f250;
        case 0x28f278u: goto label_28f278;
        case 0x28f2c8u: goto label_28f2c8;
        case 0x28f2d8u: goto label_28f2d8;
        case 0x28f2e4u: goto label_28f2e4;
        case 0x28f304u: goto label_28f304;
        case 0x28f318u: goto label_28f318;
        case 0x28f32cu: goto label_28f32c;
        case 0x28f340u: goto label_28f340;
        case 0x28f348u: goto label_28f348;
        case 0x28f350u: goto label_28f350;
        case 0x28f358u: goto label_28f358;
        case 0x28f360u: goto label_28f360;
        case 0x28f368u: goto label_28f368;
        case 0x28f380u: goto label_28f380;
        case 0x28f388u: goto label_28f388;
        case 0x28f390u: goto label_28f390;
        case 0x28f398u: goto label_28f398;
        case 0x28f3a0u: goto label_28f3a0;
        case 0x28f3a8u: goto label_28f3a8;
        case 0x28f400u: goto label_28f400;
        case 0x28f408u: goto label_28f408;
        case 0x28f410u: goto label_28f410;
        case 0x28f418u: goto label_28f418;
        case 0x28f420u: goto label_28f420;
        case 0x28f428u: goto label_28f428;
        default: break;
    }

    ctx->pc = 0x28f218u;

    // 0x28f218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f21c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f224: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f228: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28f22c: 0xc08661c  jal         func_219870
    ctx->pc = 0x28F22Cu;
    SET_GPR_U32(ctx, 31, 0x28F234u);
    ctx->pc = 0x28F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F22Cu;
    // 0x28f230: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x28F22Cu, 0x28F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F234u;
label_28f234:
    // 0x28f234: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x28f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x28f238: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x28f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x28f23c: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x28f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
    // 0x28f240: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28F240u;
    {
        const bool branch_taken_0x28f240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F240u;
        // 0x28f244: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f240) {
            ctx->pc = 0x28F280u;
            goto label_28f280;
        }
    }
    ctx->pc = 0x28F248u;
    // 0x28f248: 0xc089622  jal         func_225888
    ctx->pc = 0x28F248u;
    SET_GPR_U32(ctx, 31, 0x28F250u);
    ctx->pc = 0x28F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F248u;
    // 0x28f24c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x28F248u, 0x28F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F250u;
label_28f250:
    // 0x28f250: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F250u;
    {
        const bool branch_taken_0x28f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F250u;
        // 0x28f254: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f250) {
            ctx->pc = 0x28F280u;
            goto label_28f280;
        }
    }
    ctx->pc = 0x28F258u;
    // 0x28f258: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28f25c: 0x2484bf20  addiu       $a0, $a0, -0x40E0
    ctx->pc = 0x28f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    // 0x28f260: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x28f260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x28f264: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28f264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x28f268: 0x34210c00  ori         $at, $at, 0xC00
    ctx->pc = 0x28f268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3072);
    // 0x28f26c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x28f270: 0xc0a5976  jal         func_2965D8
    ctx->pc = 0x28F270u;
    SET_GPR_U32(ctx, 31, 0x28F278u);
    ctx->pc = 0x28F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F270u;
    // 0x28f274: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2965D8u, 0x28F270u, 0x28F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F278u;
label_28f278:
    // 0x28f278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f27c: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x28f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
label_28f280:
    // 0x28f280: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x28f284: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28f284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f288: 0x10720021  beq         $v1, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x28F288u;
    {
        const bool branch_taken_0x28f288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x28F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F288u;
        // 0x28f28c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f288) {
            ctx->pc = 0x28F310u;
            goto label_28f310;
        }
    }
    ctx->pc = 0x28F290u;
    // 0x28f290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F290u;
    {
        const bool branch_taken_0x28f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F290u;
        // 0x28f294: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f290) {
            ctx->pc = 0x28F2A8u;
            goto label_28f2a8;
        }
    }
    ctx->pc = 0x28F298u;
    // 0x28f298: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F298u;
    {
        const bool branch_taken_0x28f298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F298u;
        // 0x28f29c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f298) {
            ctx->pc = 0x28F2C0u;
            goto label_28f2c0;
        }
    }
    ctx->pc = 0x28F2A0u;
    // 0x28f2a0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x28F2A0u;
    {
        const bool branch_taken_0x28f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2A0u;
        // 0x28f2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2a0) {
            ctx->pc = 0x28F430u;
            goto label_28f430;
        }
    }
    ctx->pc = 0x28F2A8u;
label_28f2a8:
    // 0x28f2a8: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28F2A8u;
    {
        const bool branch_taken_0x28f2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2A8u;
        // 0x28f2ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2a8) {
            ctx->pc = 0x28F378u;
            goto label_28f378;
        }
    }
    ctx->pc = 0x28F2B0u;
    // 0x28f2b0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x28F2B0u;
    {
        const bool branch_taken_0x28f2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2B0u;
        // 0x28f2b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2b0) {
            ctx->pc = 0x28F3C8u;
            goto label_28f3c8;
        }
    }
    ctx->pc = 0x28F2B8u;
    // 0x28f2b8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x28F2B8u;
    {
        const bool branch_taken_0x28f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2B8u;
        // 0x28f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2b8) {
            ctx->pc = 0x28F430u;
            goto label_28f430;
        }
    }
    ctx->pc = 0x28F2C0u;
label_28f2c0:
    // 0x28f2c0: 0xc089622  jal         func_225888
    ctx->pc = 0x28F2C0u;
    SET_GPR_U32(ctx, 31, 0x28F2C8u);
    ctx->pc = 0x28F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2C0u;
    // 0x28f2c4: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x28F2C0u, 0x28F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2C8u;
label_28f2c8:
    // 0x28f2c8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x28F2C8u;
    {
        const bool branch_taken_0x28f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2C8u;
        // 0x28f2cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2c8) {
            ctx->pc = 0x28F42Cu;
            goto label_28f42c;
        }
    }
    ctx->pc = 0x28F2D0u;
    // 0x28f2d0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28F2D0u;
    SET_GPR_U32(ctx, 31, 0x28F2D8u);
    ctx->pc = 0x28F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2D0u;
    // 0x28f2d4: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28F2D0u, 0x28F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2D8u;
label_28f2d8:
    // 0x28f2d8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x28f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x28f2dc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28F2DCu;
    SET_GPR_U32(ctx, 31, 0x28F2E4u);
    ctx->pc = 0x28F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2DCu;
    // 0x28f2e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28F2DCu, 0x28F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2E4u;
label_28f2e4:
    // 0x28f2e4: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x28f2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x28f2e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28f2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2f4: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x28f2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x28f2f8: 0x240800f3  addiu       $t0, $zero, 0xF3
    ctx->pc = 0x28f2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x28f2fc: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x28F2FCu;
    SET_GPR_U32(ctx, 31, 0x28F304u);
    ctx->pc = 0x28F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2FCu;
    // 0x28f300: 0x35290c00  ori         $t1, $t1, 0xC00 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)3072);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x28F2FCu, 0x28F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F304u;
label_28f304:
    // 0x28f304: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28F304u;
    {
        const bool branch_taken_0x28f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F304u;
        // 0x28f308: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f304) {
            ctx->pc = 0x28F428u;
            goto label_28f428;
        }
    }
    ctx->pc = 0x28F30Cu;
    // 0x28f30c: 0x0  nop
    ctx->pc = 0x28f30cu;
    // NOP
label_28f310:
    // 0x28f310: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28F310u;
    SET_GPR_U32(ctx, 31, 0x28F318u);
    ctx->pc = 0x28F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F310u;
    // 0x28f314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28F310u, 0x28F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F318u;
label_28f318:
    // 0x28f318: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x28f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x28f31c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x28F31Cu;
    {
        const bool branch_taken_0x28f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F31Cu;
        // 0x28f320: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f31c) {
            ctx->pc = 0x28F42Cu;
            goto label_28f42c;
        }
    }
    ctx->pc = 0x28F324u;
    // 0x28f324: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x28F324u;
    SET_GPR_U32(ctx, 31, 0x28F32Cu);
    ctx->pc = 0x28F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F324u;
    // 0x28f328: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x28F324u, 0x28F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F32Cu;
label_28f32c:
    // 0x28f32c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x28f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x28f330: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28f330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f338: 0xc089636  jal         func_2258D8
    ctx->pc = 0x28F338u;
    SET_GPR_U32(ctx, 31, 0x28F340u);
    ctx->pc = 0x28F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F338u;
    // 0x28f33c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x28F338u, 0x28F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F340u;
label_28f340:
    // 0x28f340: 0xc0a3f5a  jal         func_28FD68
    ctx->pc = 0x28F340u;
    SET_GPR_U32(ctx, 31, 0x28F348u);
    ctx->pc = 0x28F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F340u;
    // 0x28f344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FD68u, 0x28F340u, 0x28F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F348u;
label_28f348:
    // 0x28f348: 0xc0a4136  jal         func_2904D8
    ctx->pc = 0x28F348u;
    SET_GPR_U32(ctx, 31, 0x28F350u);
    ctx->pc = 0x28F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F348u;
    // 0x28f34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904D8u, 0x28F348u, 0x28F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F350u;
label_28f350:
    // 0x28f350: 0xc0a3d12  jal         func_28F448
    ctx->pc = 0x28F350u;
    SET_GPR_U32(ctx, 31, 0x28F358u);
    ctx->pc = 0x28F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F350u;
    // 0x28f354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F448u, 0x28F350u, 0x28F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F358u;
label_28f358:
    // 0x28f358: 0xc0a43b6  jal         func_290ED8
    ctx->pc = 0x28F358u;
    SET_GPR_U32(ctx, 31, 0x28F360u);
    ctx->pc = 0x28F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F358u;
    // 0x28f35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290ED8u, 0x28F358u, 0x28F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F360u;
label_28f360:
    // 0x28f360: 0xc0a4636  jal         func_2918D8
    ctx->pc = 0x28F360u;
    SET_GPR_U32(ctx, 31, 0x28F368u);
    ctx->pc = 0x28F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F360u;
    // 0x28f364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2918D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2918D8u, 0x28F360u, 0x28F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F368u;
label_28f368:
    // 0x28f368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f36c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x28F36Cu;
    {
        const bool branch_taken_0x28f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F36Cu;
        // 0x28f370: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f36c) {
            ctx->pc = 0x28F428u;
            goto label_28f428;
        }
    }
    ctx->pc = 0x28F374u;
    // 0x28f374: 0x0  nop
    ctx->pc = 0x28f374u;
    // NOP
label_28f378:
    // 0x28f378: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28F378u;
    SET_GPR_U32(ctx, 31, 0x28F380u);
    ctx->pc = 0x28F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F378u;
    // 0x28f37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28F378u, 0x28F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F380u;
label_28f380:
    // 0x28f380: 0xc0a401e  jal         func_290078
    ctx->pc = 0x28F380u;
    SET_GPR_U32(ctx, 31, 0x28F388u);
    ctx->pc = 0x28F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F380u;
    // 0x28f384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290078u, 0x28F380u, 0x28F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F388u;
label_28f388:
    // 0x28f388: 0xc0a430c  jal         func_290C30
    ctx->pc = 0x28F388u;
    SET_GPR_U32(ctx, 31, 0x28F390u);
    ctx->pc = 0x28F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F388u;
    // 0x28f38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290C30u, 0x28F388u, 0x28F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F390u;
label_28f390:
    // 0x28f390: 0xc0a3e3e  jal         func_28F8F8
    ctx->pc = 0x28F390u;
    SET_GPR_U32(ctx, 31, 0x28F398u);
    ctx->pc = 0x28F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F390u;
    // 0x28f394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8F8u, 0x28F390u, 0x28F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F398u;
label_28f398:
    // 0x28f398: 0xc0a43da  jal         func_290F68
    ctx->pc = 0x28F398u;
    SET_GPR_U32(ctx, 31, 0x28F3A0u);
    ctx->pc = 0x28F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F398u;
    // 0x28f39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F68u, 0x28F398u, 0x28F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3A0u;
label_28f3a0:
    // 0x28f3a0: 0xc0a464a  jal         func_291928
    ctx->pc = 0x28F3A0u;
    SET_GPR_U32(ctx, 31, 0x28F3A8u);
    ctx->pc = 0x28F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3A0u;
    // 0x28f3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291928u, 0x28F3A0u, 0x28F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3A8u;
label_28f3a8:
    // 0x28f3a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28f3ac: 0x8c428868  lw          $v0, -0x7798($v0)
    ctx->pc = 0x28f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8868u));
    // 0x28f3b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f3b4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28F3B4u;
    {
        const bool branch_taken_0x28f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3B4u;
        // 0x28f3b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3b4) {
            ctx->pc = 0x28F42Cu;
            goto label_28f42c;
        }
    }
    ctx->pc = 0x28F3BCu;
    // 0x28f3bc: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x28f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x28f3c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28F3C0u;
    {
        const bool branch_taken_0x28f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3C0u;
        // 0x28f3c4: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3c0) {
            ctx->pc = 0x28F42Cu;
            goto label_28f42c;
        }
    }
    ctx->pc = 0x28F3C8u;
label_28f3c8:
    // 0x28f3c8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28f3cc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28f3d0: 0xc7818fe0  lwc1        $f1, -0x7020($gp)
    ctx->pc = 0x28f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f3d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f3d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28f3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f3e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f3e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x28f3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F3ECu;
    {
        const bool branch_taken_0x28f3ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3ECu;
        // 0x28f3f0: 0xe6200158  swc1        $f0, 0x158($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3ec) {
            ctx->pc = 0x28F3F8u;
            goto label_28f3f8;
        }
    }
    ctx->pc = 0x28F3F4u;
    // 0x28f3f4: 0xe6220158  swc1        $f2, 0x158($s1)
    ctx->pc = 0x28f3f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
label_28f3f8:
    // 0x28f3f8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x28F3F8u;
    SET_GPR_U32(ctx, 31, 0x28F400u);
    ctx->pc = 0x28F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3F8u;
    // 0x28f3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x28F3F8u, 0x28F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F400u;
label_28f400:
    // 0x28f400: 0xc0a401e  jal         func_290078
    ctx->pc = 0x28F400u;
    SET_GPR_U32(ctx, 31, 0x28F408u);
    ctx->pc = 0x28F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F400u;
    // 0x28f404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290078u, 0x28F400u, 0x28F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F408u;
label_28f408:
    // 0x28f408: 0xc0a430c  jal         func_290C30
    ctx->pc = 0x28F408u;
    SET_GPR_U32(ctx, 31, 0x28F410u);
    ctx->pc = 0x28F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F408u;
    // 0x28f40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290C30u, 0x28F408u, 0x28F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F410u;
label_28f410:
    // 0x28f410: 0xc0a3e3e  jal         func_28F8F8
    ctx->pc = 0x28F410u;
    SET_GPR_U32(ctx, 31, 0x28F418u);
    ctx->pc = 0x28F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F410u;
    // 0x28f414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8F8u, 0x28F410u, 0x28F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F418u;
label_28f418:
    // 0x28f418: 0xc0a43da  jal         func_290F68
    ctx->pc = 0x28F418u;
    SET_GPR_U32(ctx, 31, 0x28F420u);
    ctx->pc = 0x28F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F418u;
    // 0x28f41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F68u, 0x28F418u, 0x28F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F420u;
label_28f420:
    // 0x28f420: 0xc0a464a  jal         func_291928
    ctx->pc = 0x28F420u;
    SET_GPR_U32(ctx, 31, 0x28F428u);
    ctx->pc = 0x28F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F420u;
    // 0x28f424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291928u, 0x28F420u, 0x28F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F428u;
label_28f428:
    // 0x28f428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f42c:
    // 0x28f42c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f430:
    // 0x28f430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f438: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F43Cu;
        // 0x28f440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F444u;
    // 0x28f444: 0x0  nop
    ctx->pc = 0x28f444u;
    // NOP
    ctx->pc = 0x28f448u;
}
