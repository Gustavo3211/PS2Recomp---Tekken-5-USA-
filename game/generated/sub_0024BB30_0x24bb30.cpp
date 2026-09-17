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

// Function: sub_0024BB30
// Address: 0x24bb30 - 0x24bba8
void sub_0024BB30_0x24bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BB30_0x24bb30");
#endif

    switch (ctx->pc) {
        case 0x24bb58u: goto label_24bb58;
        case 0x24bb7cu: goto label_24bb7c;
        default: break;
    }

    ctx->pc = 0x24bb30u;

    // 0x24bb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bb34: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24bb38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24bb3c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x24bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x24bb40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bb44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24bb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bb4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24bb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24bb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24bb54: 0x24528858  addiu       $s2, $v0, -0x77A8
    ctx->pc = 0x24bb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
label_24bb58:
    // 0x24bb58: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x24bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x24bb5c: 0x2111804  sllv        $v1, $s1, $s0
    ctx->pc = 0x24bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x24bb60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24bb64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BB64u;
    {
        const bool branch_taken_0x24bb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bb64) {
            ctx->pc = 0x24BB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BB64u;
            // 0x24bb68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BB80u;
            goto label_24bb80;
        }
    }
    ctx->pc = 0x24BB6Cu;
    // 0x24bb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24bb74: 0xc08750c  jal         func_21D430
    ctx->pc = 0x24BB74u;
    SET_GPR_U32(ctx, 31, 0x24BB7Cu);
    ctx->pc = 0x24BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB74u;
    // 0x24bb78: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D430u, 0x24BB74u, 0x24BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB7Cu;
label_24bb7c:
    // 0x24bb7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24bb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24bb80:
    // 0x24bb80: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x24bb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24bb84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24BB84u;
    {
        const bool branch_taken_0x24bb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB84u;
        // 0x24bb88: 0x2405026b  addiu       $a1, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb84) {
            ctx->pc = 0x24BB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bb58;
        }
    }
    ctx->pc = 0x24BB8Cu;
    // 0x24bb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bb94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24bb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bb98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24bb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB9Cu;
        // 0x24bba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BBA4u;
    // 0x24bba4: 0x0  nop
    ctx->pc = 0x24bba4u;
    // NOP
    ctx->pc = 0x24bba8u;
}
