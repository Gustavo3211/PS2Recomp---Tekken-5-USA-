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

// Function: sub_0021C2D8
// Address: 0x21c2d8 - 0x21c3f8
void sub_0021C2D8_0x21c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C2D8_0x21c2d8");
#endif

    switch (ctx->pc) {
        case 0x21c2f8u: goto label_21c2f8;
        case 0x21c300u: goto label_21c300;
        case 0x21c39cu: goto label_21c39c;
        case 0x21c3b0u: goto label_21c3b0;
        case 0x21c3d0u: goto label_21c3d0;
        default: break;
    }

    ctx->pc = 0x21c2d8u;

    // 0x21c2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c2e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c2e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c2ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c2f0: 0xc086644  jal         func_219910
    ctx->pc = 0x21C2F0u;
    SET_GPR_U32(ctx, 31, 0x21C2F8u);
    ctx->pc = 0x21C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2F0u;
    // 0x21c2f4: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C2F0u, 0x21C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2F8u;
label_21c2f8:
    // 0x21c2f8: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C2F8u;
    SET_GPR_U32(ctx, 31, 0x21C300u);
    ctx->pc = 0x21C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2F8u;
    // 0x21c2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C2F8u, 0x21C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C300u;
label_21c300:
    // 0x21c300: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21c304: 0x24b28858  addiu       $s2, $a1, -0x77A8
    ctx->pc = 0x21c304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x21c308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21c308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c30c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x21c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A886Cu));
    // 0x21c310: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21c314: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x21C314u;
    {
        const bool branch_taken_0x21c314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C314u;
        // 0x21c318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c314) {
            ctx->pc = 0x21C3E0u;
            goto label_21c3e0;
        }
    }
    ctx->pc = 0x21C31Cu;
    // 0x21c31c: 0x9211002b  lbu         $s1, 0x2B($s0)
    ctx->pc = 0x21c31cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x21c320: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C320u;
    {
        const bool branch_taken_0x21c320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C320u;
        // 0x21c324: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c320) {
            ctx->pc = 0x21C348u;
            goto label_21c348;
        }
    }
    ctx->pc = 0x21C328u;
    // 0x21c328: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21C328u;
    {
        const bool branch_taken_0x21c328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C328u;
        // 0x21c32c: 0x24a38858  addiu       $v1, $a1, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c328) {
            ctx->pc = 0x21C3D8u;
            goto label_21c3d8;
        }
    }
    ctx->pc = 0x21C330u;
    // 0x21c330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c334: 0x12220024  beq         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21C334u;
    {
        const bool branch_taken_0x21c334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C334u;
        // 0x21c338: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c334) {
            ctx->pc = 0x21C3C8u;
            goto label_21c3c8;
        }
    }
    ctx->pc = 0x21C33Cu;
    // 0x21c33c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x21C33Cu;
    {
        const bool branch_taken_0x21c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c33c) {
            ctx->pc = 0x21C3DCu;
            goto label_21c3dc;
        }
    }
    ctx->pc = 0x21C344u;
    // 0x21c344: 0x0  nop
    ctx->pc = 0x21c344u;
    // NOP
label_21c348:
    // 0x21c348: 0x92030031  lbu         $v1, 0x31($s0)
    ctx->pc = 0x21c348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21c34c: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x21c34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21c350: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21C350u;
    {
        const bool branch_taken_0x21c350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c350) {
            ctx->pc = 0x21C3A8u;
            goto label_21c3a8;
        }
    }
    ctx->pc = 0x21C358u;
    // 0x21c358: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x21c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c35c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x21c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21c360: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21c364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c368: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x21c368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x21c36c: 0x2c83ffff  sltiu       $v1, $a0, -0x1
    ctx->pc = 0x21c36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x21c370: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x21c370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x21c374: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C374u;
    {
        const bool branch_taken_0x21c374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C374u;
        // 0x21c378: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c374) {
            ctx->pc = 0x21C384u;
            goto label_21c384;
        }
    }
    ctx->pc = 0x21C37Cu;
    // 0x21c37c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21c380: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x21c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_21c384:
    // 0x21c384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c388: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c38c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x21c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x21c390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c394: 0xc0821ce  jal         func_208738
    ctx->pc = 0x21C394u;
    SET_GPR_U32(ctx, 31, 0x21C39Cu);
    ctx->pc = 0x21C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C394u;
    // 0x21c398: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x21C394u, 0x21C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C39Cu;
label_21c39c:
    // 0x21c39c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21C39Cu;
    {
        const bool branch_taken_0x21c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C39Cu;
        // 0x21c3a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c39c) {
            ctx->pc = 0x21C3E4u;
            goto label_21c3e4;
        }
    }
    ctx->pc = 0x21C3A4u;
    // 0x21c3a4: 0x0  nop
    ctx->pc = 0x21c3a4u;
    // NOP
label_21c3a8:
    // 0x21c3a8: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21C3A8u;
    SET_GPR_U32(ctx, 31, 0x21C3B0u);
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21C3A8u, 0x21C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3B0u;
label_21c3b0:
    // 0x21c3b0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c3b4: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x21c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21c3b8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x21c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x21c3bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C3BCu;
    {
        const bool branch_taken_0x21c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3BCu;
        // 0x21c3c0: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3bc) {
            ctx->pc = 0x21C3E0u;
            goto label_21c3e0;
        }
    }
    ctx->pc = 0x21C3C4u;
    // 0x21c3c4: 0x0  nop
    ctx->pc = 0x21c3c4u;
    // NOP
label_21c3c8:
    // 0x21c3c8: 0xc0821ce  jal         func_208738
    ctx->pc = 0x21C3C8u;
    SET_GPR_U32(ctx, 31, 0x21C3D0u);
    ctx->pc = 0x21C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3C8u;
    // 0x21c3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x21C3C8u, 0x21C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3D0u;
label_21c3d0:
    // 0x21c3d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C3D0u;
    {
        const bool branch_taken_0x21c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3D0u;
        // 0x21c3d4: 0xae510014  sw          $s1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3d0) {
            ctx->pc = 0x21C3E0u;
            goto label_21c3e0;
        }
    }
    ctx->pc = 0x21C3D8u;
label_21c3d8:
    // 0x21c3d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x21c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_21c3dc:
    // 0x21c3dc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x21c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_21c3e0:
    // 0x21c3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c3e4:
    // 0x21c3e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c3e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c3e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c3ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3F0u;
        // 0x21c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3F8u;
}
