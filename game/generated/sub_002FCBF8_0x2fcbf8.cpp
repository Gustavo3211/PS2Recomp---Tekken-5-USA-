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

// Function: sub_002FCBF8
// Address: 0x2fcbf8 - 0x2fcc30
void sub_002FCBF8_0x2fcbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCBF8_0x2fcbf8");
#endif

    ctx->pc = 0x2fcbf8u;

    // 0x2fcbf8: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x2fcbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcbfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fcbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc00: 0xc7819530  lwc1        $f1, -0x6AD0($gp)
    ctx->pc = 0x2fcc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcc04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fcc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fcc08: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCC08u;
    {
        const bool branch_taken_0x2fcc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC08u;
        // 0x2fcc0c: 0xe480009c  swc1        $f0, 0x9C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc08) {
            ctx->pc = 0x2FCC24u;
            goto label_2fcc24;
        }
    }
    ctx->pc = 0x2FCC10u;
    // 0x2fcc10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fcc14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCC14u;
    {
        const bool branch_taken_0x2fcc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC14u;
        // 0x2fcc18: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc14) {
            ctx->pc = 0x2FCC20u;
            goto label_2fcc20;
        }
    }
    ctx->pc = 0x2FCC1Cu;
    // 0x2fcc1c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fcc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2fcc20:
    // 0x2fcc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcc24:
    // 0x2fcc24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCC2Cu;
    // 0x2fcc2c: 0x0  nop
    ctx->pc = 0x2fcc2cu;
    // NOP
    ctx->pc = 0x2fcc30u;
}
