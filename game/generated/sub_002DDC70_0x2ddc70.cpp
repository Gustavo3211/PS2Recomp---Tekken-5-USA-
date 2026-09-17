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

// Function: sub_002DDC70
// Address: 0x2ddc70 - 0x2ddcb0
void sub_002DDC70_0x2ddc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC70_0x2ddc70");
#endif

    switch (ctx->pc) {
        case 0x2ddc94u: goto label_2ddc94;
        default: break;
    }

    ctx->pc = 0x2ddc70u;

    // 0x2ddc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ddc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddc78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ddc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ddc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ddc80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ddc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc84: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ddc84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ddc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ddc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ddc8c: 0xc0cc520  jal         func_331480
    ctx->pc = 0x2DDC8Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC94u);
    ctx->pc = 0x2DDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC8Cu;
    // 0x2ddc90: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331480u, 0x2DDC8Cu, 0x2DDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC94u;
label_2ddc94:
    // 0x2ddc94: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2ddc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2ddc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ddc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ddca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCA4u;
        // 0x2ddca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDCACu;
    // 0x2ddcac: 0x0  nop
    ctx->pc = 0x2ddcacu;
    // NOP
    ctx->pc = 0x2ddcb0u;
}
