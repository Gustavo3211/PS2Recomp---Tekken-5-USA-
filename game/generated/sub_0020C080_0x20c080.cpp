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

// Function: sub_0020C080
// Address: 0x20c080 - 0x20c0f0
void sub_0020C080_0x20c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C080_0x20c080");
#endif

    switch (ctx->pc) {
        case 0x20c090u: goto label_20c090;
        default: break;
    }

    ctx->pc = 0x20c080u;

    // 0x20c080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c088: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x20C088u;
    SET_GPR_U32(ctx, 31, 0x20C090u);
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x20C088u, 0x20C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C090u;
label_20c090:
    // 0x20c090: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x20c090u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c094: 0x8d4b005c  lw          $t3, 0x5C($t2)
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x20c098: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x20c09c: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x20c0a0: 0x8d440028  lw          $a0, 0x28($t2)
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x20c0a4: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x20c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x20c0a8: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x20c0ac: 0x8d470060  lw          $a3, 0x60($t2)
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x20c0b0: 0x8d480050  lw          $t0, 0x50($t2)
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x20c0b4: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20c0b8: 0xad4203e8  sw          $v0, 0x3E8($t2)
    ctx->pc = 0x20c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1000), GPR_U32(ctx, 2));
    // 0x20c0bc: 0xad4303f0  sw          $v1, 0x3F0($t2)
    ctx->pc = 0x20c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1008), GPR_U32(ctx, 3));
    // 0x20c0c0: 0xad4403f4  sw          $a0, 0x3F4($t2)
    ctx->pc = 0x20c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1012), GPR_U32(ctx, 4));
    // 0x20c0c4: 0xad4503f8  sw          $a1, 0x3F8($t2)
    ctx->pc = 0x20c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1016), GPR_U32(ctx, 5));
    // 0x20c0c8: 0xad4603fc  sw          $a2, 0x3FC($t2)
    ctx->pc = 0x20c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1020), GPR_U32(ctx, 6));
    // 0x20c0cc: 0xad470400  sw          $a3, 0x400($t2)
    ctx->pc = 0x20c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1024), GPR_U32(ctx, 7));
    // 0x20c0d0: 0xad480404  sw          $t0, 0x404($t2)
    ctx->pc = 0x20c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1028), GPR_U32(ctx, 8));
    // 0x20c0d4: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C0D4u;
    {
        const bool branch_taken_0x20c0d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0D4u;
        // 0x20c0d8: 0xad4b03ec  sw          $t3, 0x3EC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 1004), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0d4) {
            ctx->pc = 0x20C0E0u;
            goto label_20c0e0;
        }
    }
    ctx->pc = 0x20C0DCu;
    // 0x20c0dc: 0xad4b03e8  sw          $t3, 0x3E8($t2)
    ctx->pc = 0x20c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1000), GPR_U32(ctx, 11));
label_20c0e0:
    // 0x20c0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x20C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0E4u;
        // 0x20c0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C0ECu;
    // 0x20c0ec: 0x0  nop
    ctx->pc = 0x20c0ecu;
    // NOP
    ctx->pc = 0x20c0f0u;
}
