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

// Function: sub_002CA960
// Address: 0x2ca960 - 0x2ca9a8
void sub_002CA960_0x2ca960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA960_0x2ca960");
#endif

    switch (ctx->pc) {
        case 0x2ca970u: goto label_2ca970;
        default: break;
    }

    ctx->pc = 0x2ca960u;

    // 0x2ca960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca968: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA968u;
    SET_GPR_U32(ctx, 31, 0x2CA970u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA968u, 0x2CA970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA970u;
label_2ca970:
    // 0x2ca970: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ca970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ca974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca97c: 0x8f82bb18  lw          $v0, -0x44E8($gp)
    ctx->pc = 0x2ca97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca980: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA984u;
    {
        const bool branch_taken_0x2ca984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA984u;
        // 0x2ca988: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca984) {
            ctx->pc = 0x2CA998u;
            goto label_2ca998;
        }
    }
    ctx->pc = 0x2CA98Cu;
    // 0x2ca98c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2ca990: 0xac6403c8  sw          $a0, 0x3C8($v1)
    ctx->pc = 0x2ca990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 968), GPR_U32(ctx, 4));
    // 0x2ca994: 0xac444520  sw          $a0, 0x4520($v0)
    ctx->pc = 0x2ca994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2ca998:
    // 0x2ca998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca99c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA99Cu;
        // 0x2ca9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA9A4u;
    // 0x2ca9a4: 0x0  nop
    ctx->pc = 0x2ca9a4u;
    // NOP
    ctx->pc = 0x2ca9a8u;
}
