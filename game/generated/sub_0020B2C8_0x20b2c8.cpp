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

// Function: sub_0020B2C8
// Address: 0x20b2c8 - 0x20b498
void sub_0020B2C8_0x20b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B2C8_0x20b2c8");
#endif

    switch (ctx->pc) {
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b34cu: goto label_20b34c;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b434u: goto label_20b434;
        default: break;
    }

    ctx->pc = 0x20b2c8u;

    // 0x20b2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20b2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b2d0: 0x241008f0  addiu       $s0, $zero, 0x8F0
    ctx->pc = 0x20b2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x20b2d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20b2d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b2e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20b2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20b2e8: 0xc09d940  jal         func_276500
    ctx->pc = 0x20B2E8u;
    SET_GPR_U32(ctx, 31, 0x20B2F0u);
    ctx->pc = 0x20B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2E8u;
    // 0x20b2ec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20B2E8u, 0x20B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2F0u;
label_20b2f0:
    // 0x20b2f0: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20b2f4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20b2f8: 0x8f8598ac  lw          $a1, -0x6754($gp)
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
    // 0x20b2fc: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x20b300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b304: 0xc2800a  movz        $s0, $a2, $v0
    ctx->pc = 0x20b304u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x20b308: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B308u;
    {
        const bool branch_taken_0x20b308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B308u;
        // 0x20b30c: 0xaf839730  sw          $v1, -0x68D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b308) {
            ctx->pc = 0x20B31Cu;
            goto label_20b31c;
        }
    }
    ctx->pc = 0x20B310u;
    // 0x20b310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b314: 0xc082286  jal         func_208A18
    ctx->pc = 0x20B314u;
    SET_GPR_U32(ctx, 31, 0x20B31Cu);
    ctx->pc = 0x20B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B314u;
    // 0x20b318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A18u, 0x20B314u, 0x20B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B31Cu;
label_20b31c:
    // 0x20b31c: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x20b31cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x20b320: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x20b324: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20b324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x20b328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b32c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20b32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20b330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B330u;
    {
        const bool branch_taken_0x20b330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B330u;
        // 0x20b334: 0x8f82a850  lw          $v0, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b330) {
            ctx->pc = 0x20B344u;
            goto label_20b344;
        }
    }
    ctx->pc = 0x20B338u;
    // 0x20b338: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x20b338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x20b33c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B33Cu;
    {
        const bool branch_taken_0x20b33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B33Cu;
        // 0x20b340: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b33c) {
            ctx->pc = 0x20B368u;
            goto label_20b368;
        }
    }
    ctx->pc = 0x20B344u;
label_20b344:
    // 0x20b344: 0xc09d940  jal         func_276500
    ctx->pc = 0x20B344u;
    SET_GPR_U32(ctx, 31, 0x20B34Cu);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20B344u, 0x20B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B34Cu;
label_20b34c:
    // 0x20b34c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B34Cu;
    {
        const bool branch_taken_0x20b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B34Cu;
        // 0x20b350: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b34c) {
            ctx->pc = 0x20B378u;
            goto label_20b378;
        }
    }
    ctx->pc = 0x20B354u;
    // 0x20b354: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x20B354u;
    SET_GPR_U32(ctx, 31, 0x20B35Cu);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x20B354u, 0x20B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B35Cu;
label_20b35c:
    // 0x20b35c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x20b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x20b360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B360u;
    {
        const bool branch_taken_0x20b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B360u;
        // 0x20b364: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b360) {
            ctx->pc = 0x20B374u;
            goto label_20b374;
        }
    }
    ctx->pc = 0x20B368u;
label_20b368:
    // 0x20b368: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x20b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x20b36c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B36Cu;
    {
        const bool branch_taken_0x20b36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b36c) {
            ctx->pc = 0x20B370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B36Cu;
            // 0x20b370: 0x86220040  lh          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B3CCu;
            goto label_20b3cc;
        }
    }
    ctx->pc = 0x20B374u;
label_20b374:
    // 0x20b374: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_20b378:
    // 0x20b378: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x20b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20b37c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20b380: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B380u;
    {
        const bool branch_taken_0x20b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B380u;
        // 0x20b384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b380) {
            ctx->pc = 0x20B3A8u;
            goto label_20b3a8;
        }
    }
    ctx->pc = 0x20B388u;
    // 0x20b388: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x20b38c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x20b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x20b390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B390u;
    {
        const bool branch_taken_0x20b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b390) {
            ctx->pc = 0x20B3A8u;
            goto label_20b3a8;
        }
    }
    ctx->pc = 0x20B398u;
    // 0x20b398: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x20b39c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20B39Cu;
    {
        const bool branch_taken_0x20b39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b39c) {
            ctx->pc = 0x20B3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B39Cu;
            // 0x20b3a0: 0x86220040  lh          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B3CCu;
            goto label_20b3cc;
        }
    }
    ctx->pc = 0x20B3A4u;
    // 0x20b3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b3a8:
    // 0x20b3a8: 0xc07c6cc  jal         func_1F1B30
    ctx->pc = 0x20B3A8u;
    SET_GPR_U32(ctx, 31, 0x20B3B0u);
    ctx->pc = 0x20B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3A8u;
    // 0x20b3ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1B30u, 0x20B3A8u, 0x20B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3B0u;
label_20b3b0:
    // 0x20b3b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B3B0u;
    {
        const bool branch_taken_0x20b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b3b0) {
            ctx->pc = 0x20B3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3B0u;
            // 0x20b3b4: 0x86220040  lh          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B3CCu;
            goto label_20b3cc;
        }
    }
    ctx->pc = 0x20B3B8u;
    // 0x20b3b8: 0x8f8298ac  lw          $v0, -0x6754($gp)
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
    // 0x20b3bc: 0x28420177  slti        $v0, $v0, 0x177
    ctx->pc = 0x20b3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)375) ? 1 : 0);
    // 0x20b3c0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x20B3C0u;
    {
        const bool branch_taken_0x20b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C0u;
        // 0x20b3c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3c0) {
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B3C8u;
    // 0x20b3c8: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x20b3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_20b3cc:
    // 0x20b3cc: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20b3d0: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B3D0u;
    {
        const bool branch_taken_0x20b3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20b3d0) {
            ctx->pc = 0x20B3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3D0u;
            // 0x20b3d4: 0x86420040  lh          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B3FCu;
            goto label_20b3fc;
        }
    }
    ctx->pc = 0x20B3D8u;
    // 0x20b3d8: 0xc089622  jal         func_225888
    ctx->pc = 0x20B3D8u;
    SET_GPR_U32(ctx, 31, 0x20B3E0u);
    ctx->pc = 0x20B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3D8u;
    // 0x20b3dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x20B3D8u, 0x20B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3E0u;
label_20b3e0:
    // 0x20b3e0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x20B3E0u;
    {
        const bool branch_taken_0x20b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3e0) {
            ctx->pc = 0x20B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3E0u;
            // 0x20b3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B3E8u;
    // 0x20b3e8: 0xc089622  jal         func_225888
    ctx->pc = 0x20B3E8u;
    SET_GPR_U32(ctx, 31, 0x20B3F0u);
    ctx->pc = 0x20B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3E8u;
    // 0x20b3ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x20B3E8u, 0x20B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3F0u;
label_20b3f0:
    // 0x20b3f0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x20B3F0u;
    {
        const bool branch_taken_0x20b3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3f0) {
            ctx->pc = 0x20B3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3F0u;
            // 0x20b3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B3F8u;
    // 0x20b3f8: 0x86420040  lh          $v0, 0x40($s2)
    ctx->pc = 0x20b3f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_20b3fc:
    // 0x20b3fc: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B424u;
            goto label_20b424;
        }
    }
    ctx->pc = 0x20B404u;
    // 0x20b404: 0xc089622  jal         func_225888
    ctx->pc = 0x20B404u;
    SET_GPR_U32(ctx, 31, 0x20B40Cu);
    ctx->pc = 0x20B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B404u;
    // 0x20b408: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x20B404u, 0x20B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B40Cu;
label_20b40c:
    // 0x20b40c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B40Cu;
            // 0x20b410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B414u;
    // 0x20b414: 0xc089622  jal         func_225888
    ctx->pc = 0x20B414u;
    SET_GPR_U32(ctx, 31, 0x20B41Cu);
    ctx->pc = 0x20B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B414u;
    // 0x20b418: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x20B414u, 0x20B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B41Cu;
label_20b41c:
    // 0x20b41c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B41Cu;
    {
        const bool branch_taken_0x20b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B41Cu;
        // 0x20b420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b41c) {
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B424u;
label_20b424:
    // 0x20b424: 0xc082162  jal         func_208588
    ctx->pc = 0x20B424u;
    SET_GPR_U32(ctx, 31, 0x20B42Cu);
    ctx->pc = 0x20B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B424u;
    // 0x20b428: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20B424u, 0x20B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B42Cu;
label_20b42c:
    // 0x20b42c: 0xc0a3ab2  jal         func_28EAC8
    ctx->pc = 0x20B42Cu;
    SET_GPR_U32(ctx, 31, 0x20B434u);
    ctx->pc = 0x28EAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAC8u, 0x20B42Cu, 0x20B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B434u;
label_20b434:
    // 0x20b434: 0x26648858  addiu       $a0, $s3, -0x77A8
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x20b438: 0x8f82973c  lw          $v0, -0x68C4($gp)
    ctx->pc = 0x20b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20b43c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x20b440: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20b440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20b444: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20B444u;
    {
        const bool branch_taken_0x20b444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B444u;
        // 0x20b448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b444) {
            ctx->pc = 0x20B47Cu;
            goto label_20b47c;
        }
    }
    ctx->pc = 0x20B44Cu;
    // 0x20b44c: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20b450: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x20b450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20b454: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20b454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20b458: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B458u;
    {
        const bool branch_taken_0x20b458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B458u;
        // 0x20b45c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b458) {
            ctx->pc = 0x20B480u;
            goto label_20b480;
        }
    }
    ctx->pc = 0x20B460u;
    // 0x20b460: 0x86420090  lh          $v0, 0x90($s2)
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x20b464: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20b464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20b468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B468u;
    {
        const bool branch_taken_0x20b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B468u;
        // 0x20b46c: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b468) {
            ctx->pc = 0x20B484u;
            goto label_20b484;
        }
    }
    ctx->pc = 0x20B470u;
    // 0x20b470: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b474: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x20b474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x20b478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b47c:
    // 0x20b47c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b480:
    // 0x20b480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b484:
    // 0x20b484: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b48c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B48Cu;
        // 0x20b490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B494u;
    // 0x20b494: 0x0  nop
    ctx->pc = 0x20b494u;
    // NOP
    ctx->pc = 0x20b498u;
}
