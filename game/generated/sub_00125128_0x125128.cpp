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

// Function: sub_00125128
// Address: 0x125128 - 0x125188
void sub_00125128_0x125128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125128_0x125128");
#endif

    switch (ctx->pc) {
        case 0x125150u: goto label_125150;
        default: break;
    }

    ctx->pc = 0x125128u;

    // 0x125128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12512c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125130: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x125130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x125134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12513c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125140: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x125140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125144: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x125144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x125148: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x125148u;
    SET_GPR_U32(ctx, 31, 0x125150u);
    ctx->pc = 0x12514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125148u;
    // 0x12514c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125148u, 0x125150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125150u;
label_125150:
    // 0x125150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x125150u;
    {
        const bool branch_taken_0x125150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125150u;
        // 0x125154: 0x32430006  andi        $v1, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125150) {
            ctx->pc = 0x125170u;
            goto label_125170;
        }
    }
    ctx->pc = 0x125158u;
    // 0x125158: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x125158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x12515c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x12515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125160: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125164: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x125164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x125168: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x125168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12516c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x12516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_125170:
    // 0x125170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12517c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125180: 0x3e00008  jr          $ra
    ctx->pc = 0x125180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125180u;
        // 0x125184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125188u;
}
