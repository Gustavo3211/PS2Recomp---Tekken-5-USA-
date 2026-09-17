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

// Function: sub_0024DF80
// Address: 0x24df80 - 0x24dfe8
void sub_0024DF80_0x24df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF80_0x24df80");
#endif

    switch (ctx->pc) {
        case 0x24dfb4u: goto label_24dfb4;
        default: break;
    }

    ctx->pc = 0x24df80u;

    // 0x24df80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24df84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24df84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24df88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24df8c: 0x2450fb10  addiu       $s0, $v0, -0x4F0
    ctx->pc = 0x24df8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x24df90: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x24df90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AFD78u));
    // 0x24df94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24df94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24df9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24df9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfa0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x24dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x24dfa4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24DFA4u;
    {
        const bool branch_taken_0x24dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFA4u;
        // 0x24dfa8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfa4) {
            ctx->pc = 0x24DFCCu;
            goto label_24dfcc;
        }
    }
    ctx->pc = 0x24DFACu;
    // 0x24dfac: 0xc0937c4  jal         func_24DF10
    ctx->pc = 0x24DFACu;
    SET_GPR_U32(ctx, 31, 0x24DFB4u);
    ctx->pc = 0x24DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF10u, 0x24DFACu, 0x24DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFB4u;
label_24dfb4:
    // 0x24dfb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24dfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfb8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DFB8u;
    {
        const bool branch_taken_0x24dfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dfb8) {
            ctx->pc = 0x24DFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DFB8u;
            // 0x24dfbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DFD0u;
            goto label_24dfd0;
        }
    }
    ctx->pc = 0x24DFC0u;
    // 0x24dfc0: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x24dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x24dfc4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x24dfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x24dfc8: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x24dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_24dfcc:
    // 0x24dfcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24dfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24dfd0:
    // 0x24dfd0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24dfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24dfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24dfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24dfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x24DFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFDCu;
        // 0x24dfe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DFE4u;
    // 0x24dfe4: 0x0  nop
    ctx->pc = 0x24dfe4u;
    // NOP
    ctx->pc = 0x24dfe8u;
}
