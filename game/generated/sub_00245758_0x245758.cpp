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

// Function: sub_00245758
// Address: 0x245758 - 0x245790
void sub_00245758_0x245758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245758_0x245758");
#endif

    switch (ctx->pc) {
        case 0x24577cu: goto label_24577c;
        default: break;
    }

    ctx->pc = 0x245758u;

    // 0x245758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24575c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245760: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x245760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x245764: 0xc45468f0  lwc1        $f20, 0x68F0($v0)
    ctx->pc = 0x245764u;
    { uint32_t bits = FAST_READ32(0x1668F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245768: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x245768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x24576c: 0xc7808864  lwc1        $f0, -0x779C($gp)
    ctx->pc = 0x24576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245774: 0xc0915c2  jal         func_245708
    ctx->pc = 0x245774u;
    SET_GPR_U32(ctx, 31, 0x24577Cu);
    ctx->pc = 0x245778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245774u;
    // 0x245778: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x245708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245708u, 0x245774u, 0x24577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24577Cu;
label_24577c:
    // 0x24577c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245780: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x245780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x245784: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x245784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245788: 0x3e00008  jr          $ra
    ctx->pc = 0x245788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245788u;
        // 0x24578c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245790u;
}
