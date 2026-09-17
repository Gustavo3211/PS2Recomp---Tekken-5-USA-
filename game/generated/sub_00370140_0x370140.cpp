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

// Function: sub_00370140
// Address: 0x370140 - 0x370190
void sub_00370140_0x370140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370140_0x370140");
#endif

    switch (ctx->pc) {
        case 0x370164u: goto label_370164;
        case 0x37017cu: goto label_37017c;
        default: break;
    }

    ctx->pc = 0x370140u;

    // 0x370140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370144: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37014c: 0x245073d0  addiu       $s0, $v0, 0x73D0
    ctx->pc = 0x37014cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29648));
    // 0x370150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D73D0u));
    // 0x370154: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370154u;
    {
        const bool branch_taken_0x370154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370154u;
        // 0x370158: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370154) {
            ctx->pc = 0x37017Cu;
            goto label_37017c;
        }
    }
    ctx->pc = 0x37015Cu;
    // 0x37015c: 0xc0dc59e  jal         func_371678
    ctx->pc = 0x37015Cu;
    SET_GPR_U32(ctx, 31, 0x370164u);
    ctx->pc = 0x371678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371678u, 0x37015Cu, 0x370164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370164u;
label_370164:
    // 0x370164: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370168: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37016c: 0x24a509d8  addiu       $a1, $a1, 0x9D8
    ctx->pc = 0x37016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2520));
    // 0x370170: 0x24c67580  addiu       $a2, $a2, 0x7580
    ctx->pc = 0x370170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30080));
    // 0x370174: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370174u;
    SET_GPR_U32(ctx, 31, 0x37017Cu);
    ctx->pc = 0x370178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370174u;
    // 0x370178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370174u, 0x37017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37017Cu;
label_37017c:
    // 0x37017c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370188: 0x3e00008  jr          $ra
    ctx->pc = 0x370188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370188u;
        // 0x37018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370190u;
}
