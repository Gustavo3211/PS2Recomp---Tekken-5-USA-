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

// Function: sub_002BC0C0
// Address: 0x2bc0c0 - 0x2bc120
void sub_002BC0C0_0x2bc0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC0C0_0x2bc0c0");
#endif

    switch (ctx->pc) {
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc108u: goto label_2bc108;
        default: break;
    }

    ctx->pc = 0x2bc0c0u;

    // 0x2bc0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc0c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bc0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bc0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bc0d4: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC0D4u;
    {
        const bool branch_taken_0x2bc0d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0D4u;
        // 0x2bc0d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0d4) {
            ctx->pc = 0x2BC108u;
            goto label_2bc108;
        }
    }
    ctx->pc = 0x2BC0DCu;
    // 0x2bc0dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc0e0: 0x5611000a  bnel        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BC0E0u;
    {
        const bool branch_taken_0x2bc0e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2bc0e0) {
            ctx->pc = 0x2BC0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC0E0u;
            // 0x2bc0e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC10Cu;
            goto label_2bc10c;
        }
    }
    ctx->pc = 0x2BC0E8u;
    // 0x2bc0e8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2bc0ec: 0xc0ae4ae  jal         func_2B92B8
    ctx->pc = 0x2BC0ECu;
    SET_GPR_U32(ctx, 31, 0x2BC0F4u);
    ctx->pc = 0x2BC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0ECu;
    // 0x2bc0f0: 0x24847990  addiu       $a0, $a0, 0x7990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92B8u, 0x2BC0ECu, 0x2BC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0F4u;
label_2bc0f4:
    // 0x2bc0f4: 0x16110005  bne         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC0F4u;
    {
        const bool branch_taken_0x2bc0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2BC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F4u;
        // 0x2bc0f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0f4) {
            ctx->pc = 0x2BC10Cu;
            goto label_2bc10c;
        }
    }
    ctx->pc = 0x2BC0FCu;
    // 0x2bc0fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2bc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2bc100: 0xc0ae4ae  jal         func_2B92B8
    ctx->pc = 0x2BC100u;
    SET_GPR_U32(ctx, 31, 0x2BC108u);
    ctx->pc = 0x2BC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC100u;
    // 0x2bc104: 0x248479c0  addiu       $a0, $a0, 0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92B8u, 0x2BC100u, 0x2BC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC108u;
label_2bc108:
    // 0x2bc108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc10c:
    // 0x2bc10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bc10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bc110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc114: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC114u;
        // 0x2bc118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC11Cu;
    // 0x2bc11c: 0x0  nop
    ctx->pc = 0x2bc11cu;
    // NOP
    ctx->pc = 0x2bc120u;
}
