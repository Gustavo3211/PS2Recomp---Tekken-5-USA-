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

// Function: sub_00284BE8
// Address: 0x284be8 - 0x284c68
void sub_00284BE8_0x284be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284BE8_0x284be8");
#endif

    switch (ctx->pc) {
        case 0x284c1cu: goto label_284c1c;
        case 0x284c24u: goto label_284c24;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c54u: goto label_284c54;
        default: break;
    }

    ctx->pc = 0x284be8u;

    // 0x284be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284bec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x284becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x284bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284bf4: 0x245083c0  addiu       $s0, $v0, -0x7C40
    ctx->pc = 0x284bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x284bf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x284bfc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x284BFCu;
    {
        const bool branch_taken_0x284bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BFCu;
        // 0x284c00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bfc) {
            ctx->pc = 0x284C54u;
            goto label_284c54;
        }
    }
    ctx->pc = 0x284C04u;
    // 0x284c04: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x284c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x284c08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284c0c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x284C0Cu;
    {
        const bool branch_taken_0x284c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284c0c) {
            ctx->pc = 0x284C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284C0Cu;
            // 0x284c10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284C58u;
            goto label_284c58;
        }
    }
    ctx->pc = 0x284C14u;
    // 0x284c14: 0xc086644  jal         func_219910
    ctx->pc = 0x284C14u;
    SET_GPR_U32(ctx, 31, 0x284C1Cu);
    ctx->pc = 0x284C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C14u;
    // 0x284c18: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x284C14u, 0x284C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C1Cu;
label_284c1c:
    // 0x284c1c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x284C1Cu;
    SET_GPR_U32(ctx, 31, 0x284C24u);
    ctx->pc = 0x284C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C1Cu;
    // 0x284c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x284C1Cu, 0x284C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C24u;
label_284c24:
    // 0x284c24: 0xc087684  jal         func_21DA10
    ctx->pc = 0x284C24u;
    SET_GPR_U32(ctx, 31, 0x284C2Cu);
    ctx->pc = 0x284C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C24u;
    // 0x284c28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x284C24u, 0x284C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C2Cu;
label_284c2c:
    // 0x284c2c: 0x9205002d  lbu         $a1, 0x2D($s0)
    ctx->pc = 0x284c2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x284c30: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x284c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x284c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284c38: 0x24848858  addiu       $a0, $a0, -0x77A8
    ctx->pc = 0x284c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x284c3c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x284c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x284c40: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x284c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x284c44: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x284c44u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x284c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x284c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x284c4c: 0xc0a5048  jal         func_294120
    ctx->pc = 0x284C4Cu;
    SET_GPR_U32(ctx, 31, 0x284C54u);
    ctx->pc = 0x284C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C4Cu;
    // 0x284c50: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294120u, 0x284C4Cu, 0x284C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C54u;
label_284c54:
    // 0x284c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_284c58:
    // 0x284c58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x284c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x284C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C5Cu;
        // 0x284c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284C64u;
    // 0x284c64: 0x0  nop
    ctx->pc = 0x284c64u;
    // NOP
    ctx->pc = 0x284c68u;
}
