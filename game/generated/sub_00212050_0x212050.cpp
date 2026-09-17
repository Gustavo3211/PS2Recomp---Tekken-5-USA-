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

// Function: sub_00212050
// Address: 0x212050 - 0x212078
void sub_00212050_0x212050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212050_0x212050");
#endif

    ctx->pc = 0x212050u;

    // 0x212050: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x212050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x212054: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x212054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x212058: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x212058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21205c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x21205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212060: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x212060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212064: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x212064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212068: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x212068u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x21206c: 0x4600101e  madda.s     $f2, $f0
    ctx->pc = 0x21206cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0])));
    // 0x212070: 0x3e00008  jr          $ra
    ctx->pc = 0x212070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212070u;
        // 0x212074: 0x4604281c  madd.s      $f0, $f5, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212078u;
}
