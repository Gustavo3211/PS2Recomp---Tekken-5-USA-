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

// Function: sub_00243110
// Address: 0x243110 - 0x243168
void sub_00243110_0x243110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243110_0x243110");
#endif

    switch (ctx->pc) {
        case 0x243134u: goto label_243134;
        default: break;
    }

    ctx->pc = 0x243110u;

    // 0x243110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24311c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x243120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x243128: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x243128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24312c: 0xc090c22  jal         func_243088
    ctx->pc = 0x24312Cu;
    SET_GPR_U32(ctx, 31, 0x243134u);
    ctx->pc = 0x243130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24312Cu;
    // 0x243130: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243088u, 0x24312Cu, 0x243134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243134u;
label_243134:
    // 0x243134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x243134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x243138: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24313c: 0x24425db0  addiu       $v0, $v0, 0x5DB0
    ctx->pc = 0x24313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
    // 0x243140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243144: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x243144u;
    { uint32_t bits = FAST_READ32(0x165DE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243148: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x243148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24314c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x24314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x243150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243154: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x243154u;
    { uint32_t bits = FAST_READ32(0x165DE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243158: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x243158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x24315c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24315cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243160: 0x3e00008  jr          $ra
    ctx->pc = 0x243160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243160u;
        // 0x243164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243168u;
}
