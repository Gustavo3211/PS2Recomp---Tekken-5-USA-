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

// Function: sub_0031A818
// Address: 0x31a818 - 0x31a880
void sub_0031A818_0x31a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A818_0x31a818");
#endif

    ctx->pc = 0x31a818u;

    // 0x31a818: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A818u;
    {
        const bool branch_taken_0x31a818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a818) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A820u;
    // 0x31a820: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a824: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x31a824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_31a828:
    // 0x31a828: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A828u;
    {
        const bool branch_taken_0x31a828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a828) {
            ctx->pc = 0x31A838u;
            goto label_31a838;
        }
    }
    ctx->pc = 0x31A830u;
    // 0x31a830: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a834: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x31a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_31a838:
    // 0x31a838: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A838u;
    {
        const bool branch_taken_0x31a838 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a838) {
            ctx->pc = 0x31A848u;
            goto label_31a848;
        }
    }
    ctx->pc = 0x31A840u;
    // 0x31a840: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a844: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x31a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_31a848:
    // 0x31a848: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A848u;
    {
        const bool branch_taken_0x31a848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a848) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A850u;
    // 0x31a850: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x31a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a854: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x31a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_31a858:
    // 0x31a858: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A858u;
    {
        const bool branch_taken_0x31a858 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a858) {
            ctx->pc = 0x31A868u;
            goto label_31a868;
        }
    }
    ctx->pc = 0x31A860u;
    // 0x31a860: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x31a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a864: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x31a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_31a868:
    // 0x31a868: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A868u;
    {
        const bool branch_taken_0x31a868 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a868) {
            ctx->pc = 0x31A878u;
            goto label_31a878;
        }
    }
    ctx->pc = 0x31A870u;
    // 0x31a870: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x31a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a874: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x31a874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_31a878:
    // 0x31a878: 0x3e00008  jr          $ra
    ctx->pc = 0x31A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A880u;
}
