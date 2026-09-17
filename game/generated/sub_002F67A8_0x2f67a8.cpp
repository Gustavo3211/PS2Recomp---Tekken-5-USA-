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

// Function: sub_002F67A8
// Address: 0x2f67a8 - 0x2f6870
void sub_002F67A8_0x2f67a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F67A8_0x2f67a8");
#endif

    switch (ctx->pc) {
        case 0x2f6800u: goto label_2f6800;
        case 0x2f6814u: goto label_2f6814;
        case 0x2f6820u: goto label_2f6820;
        case 0x2f6848u: goto label_2f6848;
        default: break;
    }

    ctx->pc = 0x2f67a8u;

    // 0x2f67a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f67a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f67ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f67acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f67b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f67b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f67b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f67b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67b8: 0x26230128  addiu       $v1, $s1, 0x128
    ctx->pc = 0x2f67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x2f67bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f67bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f67c0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f67c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f67c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f67cc: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2f67ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2f67d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f67d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f67d4: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x2f67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x2f67d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2f67d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2f67dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f67dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67e0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2f67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2f67e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2f67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f67e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f67ec: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2f67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2f67f0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f67f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2f67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2f67f8: 0xae280124  sw          $t0, 0x124($s1)
    ctx->pc = 0x2f67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 8));
    // 0x2f67fc: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x2f67fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_2f6800:
    // 0x2f6800: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2f6800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f6804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f680c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F680Cu;
    SET_GPR_U32(ctx, 31, 0x2F6814u);
    ctx->pc = 0x2F6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F680Cu;
    // 0x2f6810: 0x26851850  addiu       $a1, $s4, 0x1850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F680Cu, 0x2F6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6814u;
label_2f6814:
    // 0x2f6814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6818: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6818u;
    SET_GPR_U32(ctx, 31, 0x2F6820u);
    ctx->pc = 0x2F681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6818u;
    // 0x2f681c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6818u, 0x2F6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6820u;
label_2f6820:
    // 0x2f6820: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2f6820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f6824: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2f6824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6828: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f6828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f682c: 0x2a440003  slti        $a0, $s2, 0x3
    ctx->pc = 0x2f682cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f6830: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F6830u;
    {
        const bool branch_taken_0x2f6830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6830u;
        // 0x2f6834: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6830) {
            ctx->pc = 0x2F6800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6800;
        }
    }
    ctx->pc = 0x2F6838u;
    // 0x2f6838: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f683c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6840: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6840u;
    SET_GPR_U32(ctx, 31, 0x2F6848u);
    ctx->pc = 0x2F6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6840u;
    // 0x2f6844: 0x24a51868  addiu       $a1, $a1, 0x1868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6840u, 0x2F6848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6848u;
label_2f6848:
    // 0x2f6848: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2f6848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x2f684c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f684cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6850: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f6850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f6854: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f6854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6858: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f6858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f685c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f685cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6860: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f6860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6864: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6864u;
        // 0x2f6868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F686Cu;
    // 0x2f686c: 0x0  nop
    ctx->pc = 0x2f686cu;
    // NOP
    ctx->pc = 0x2f6870u;
}
