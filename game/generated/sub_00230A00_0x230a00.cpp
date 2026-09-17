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

// Function: sub_00230A00
// Address: 0x230a00 - 0x230a88
void sub_00230A00_0x230a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230A00_0x230a00");
#endif

    switch (ctx->pc) {
        case 0x230a4cu: goto label_230a4c;
        case 0x230a5cu: goto label_230a5c;
        case 0x230a6cu: goto label_230a6c;
        default: break;
    }

    ctx->pc = 0x230a00u;

    // 0x230a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230a04: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x230a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x230a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x230a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230a1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230a20: 0x244683c0  addiu       $a2, $v0, -0x7C40
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x230a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230a28: 0x90c2002d  lbu         $v0, 0x2D($a2)
    ctx->pc = 0x230a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3A83EDu));
    // 0x230a2c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x230A2Cu;
    {
        const bool branch_taken_0x230a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A2Cu;
        // 0x230a30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a2c) {
            ctx->pc = 0x230A50u;
            goto label_230a50;
        }
    }
    ctx->pc = 0x230A34u;
    // 0x230a34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x230a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230a38: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x230a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x230a3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230A3Cu;
    {
        const bool branch_taken_0x230a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a3c) {
            ctx->pc = 0x230A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230A3Cu;
            // 0x230a40: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230A54u;
            goto label_230a54;
        }
    }
    ctx->pc = 0x230A44u;
    // 0x230a44: 0xc08f2b2  jal         func_23CAC8
    ctx->pc = 0x230A44u;
    SET_GPR_U32(ctx, 31, 0x230A4Cu);
    ctx->pc = 0x23CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CAC8u, 0x230A44u, 0x230A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A4Cu;
label_230a4c:
    // 0x230a4c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x230a4cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230a50:
    // 0x230a50: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_230a54:
    // 0x230a54: 0xc08dd0e  jal         func_237438
    ctx->pc = 0x230A54u;
    SET_GPR_U32(ctx, 31, 0x230A5Cu);
    ctx->pc = 0x230A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A54u;
    // 0x230a58: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237438u, 0x230A54u, 0x230A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A5Cu;
label_230a5c:
    // 0x230a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a64: 0xc08c6c0  jal         func_231B00
    ctx->pc = 0x230A64u;
    SET_GPR_U32(ctx, 31, 0x230A6Cu);
    ctx->pc = 0x230A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A64u;
    // 0x230a68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B00u, 0x230A64u, 0x230A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A6Cu;
label_230a6c:
    // 0x230a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230a78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x230A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A7Cu;
        // 0x230a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A84u;
    // 0x230a84: 0x0  nop
    ctx->pc = 0x230a84u;
    // NOP
    ctx->pc = 0x230a88u;
}
