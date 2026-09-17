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

// Function: sub_0036EBC0
// Address: 0x36ebc0 - 0x36ec08
void sub_0036EBC0_0x36ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EBC0_0x36ebc0");
#endif

    switch (ctx->pc) {
        case 0x36ebfcu: goto label_36ebfc;
        default: break;
    }

    ctx->pc = 0x36ebc0u;

    // 0x36ebc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ebc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ebc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ebcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ebccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36ebd4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x36ebd8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x36ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x36ebdc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x36ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x36ebe0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x36ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x36ebe4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x36ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x36ebe8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ebec: 0x2442ec88  addiu       $v0, $v0, -0x1378
    ctx->pc = 0x36ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962312));
    // 0x36ebf0: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x36ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x36ebf4: 0xc0c1406  jal         func_305018
    ctx->pc = 0x36EBF4u;
    SET_GPR_U32(ctx, 31, 0x36EBFCu);
    ctx->pc = 0x36EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EBF4u;
    // 0x36ebf8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305018u, 0x36EBF4u, 0x36EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBFCu;
label_36ebfc:
    // 0x36ebfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36EBFCu;
    {
        const bool branch_taken_0x36ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBFCu;
        // 0x36ec00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ebfc) {
            ctx->pc = 0x36EC20u;
            return;
        }
    }
    ctx->pc = 0x36EC04u;
    // 0x36ec04: 0x0  nop
    ctx->pc = 0x36ec04u;
    // NOP
    ctx->pc = 0x36ec08u;
}
