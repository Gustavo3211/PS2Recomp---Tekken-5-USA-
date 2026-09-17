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

// Function: sub_0011BC30
// Address: 0x11bc30 - 0x11bca8
void sub_0011BC30_0x11bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BC30_0x11bc30");
#endif

    switch (ctx->pc) {
        case 0x11bc54u: goto label_11bc54;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc80u: goto label_11bc80;
        default: break;
    }

    ctx->pc = 0x11bc30u;

    // 0x11bc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bc34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11bc38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11bc3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11bc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc40: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x11bc40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x11bc44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bc48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11bc4c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11BC4Cu;
    SET_GPR_U32(ctx, 31, 0x11BC54u);
    ctx->pc = 0x11BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC4Cu;
    // 0x11bc50: 0xae3227e4  sw          $s2, 0x27E4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10212), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11BC4Cu, 0x11BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC54u;
label_11bc54:
    // 0x11bc54: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11bc58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11bc5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc60: 0x24a5bbd8  addiu       $a1, $a1, -0x4428
    ctx->pc = 0x11bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949848));
    // 0x11bc64: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x11bc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x11bc68: 0xc0448ac  jal         func_1122B0
    ctx->pc = 0x11BC68u;
    SET_GPR_U32(ctx, 31, 0x11BC70u);
    ctx->pc = 0x11BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC68u;
    // 0x11bc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122B0u, 0x11BC68u, 0x11BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC70u;
    {
        const bool branch_taken_0x11bc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC70u;
        // 0x11bc74: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc70) {
            ctx->pc = 0x11BC84u;
            goto label_11bc84;
        }
    }
    ctx->pc = 0x11BC78u;
    // 0x11bc78: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11BC78u;
    SET_GPR_U32(ctx, 31, 0x11BC80u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11BC78u, 0x11BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC80u;
label_11bc80:
    // 0x11bc80: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11bc84:
    // 0x11bc84: 0xae2027e4  sw          $zero, 0x27E4($s1)
    ctx->pc = 0x11bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10212), GPR_U32(ctx, 0));
    // 0x11bc88: 0xac522808  sw          $s2, 0x2808($v0)
    ctx->pc = 0x11bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10248), GPR_U32(ctx, 18));
    // 0x11bc8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11bc94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bc98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11bc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA0u;
        // 0x11bca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BCA8u;
}
