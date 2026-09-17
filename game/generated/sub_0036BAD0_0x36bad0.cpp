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

// Function: sub_0036BAD0
// Address: 0x36bad0 - 0x36bb20
void sub_0036BAD0_0x36bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BAD0_0x36bad0");
#endif

    switch (ctx->pc) {
        case 0x36baf4u: goto label_36baf4;
        case 0x36bb08u: goto label_36bb08;
        default: break;
    }

    ctx->pc = 0x36bad0u;

    // 0x36bad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36bad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36bad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36badc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36bae0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36bae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36bae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36baec: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x36BAECu;
    SET_GPR_U32(ctx, 31, 0x36BAF4u);
    ctx->pc = 0x36BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAECu;
    // 0x36baf0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x36BAECu, 0x36BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAF4u;
label_36baf4:
    // 0x36baf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BAF8u;
    {
        const bool branch_taken_0x36baf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAF8u;
        // 0x36bafc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36baf8) {
            ctx->pc = 0x36BB08u;
            goto label_36bb08;
        }
    }
    ctx->pc = 0x36BB00u;
    // 0x36bb00: 0xc0ad894  jal         func_2B6250
    ctx->pc = 0x36BB00u;
    SET_GPR_U32(ctx, 31, 0x36BB08u);
    ctx->pc = 0x36BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB00u;
    // 0x36bb04: 0x8e440130  lw          $a0, 0x130($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6250u, 0x36BB00u, 0x36BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB08u;
label_36bb08:
    // 0x36bb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bb10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36bb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bb14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB18u;
        // 0x36bb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB20u;
}
