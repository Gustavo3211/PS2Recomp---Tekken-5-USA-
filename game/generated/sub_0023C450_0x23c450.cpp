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

// Function: sub_0023C450
// Address: 0x23c450 - 0x23c4a0
void sub_0023C450_0x23c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C450_0x23c450");
#endif

    ctx->pc = 0x23c450u;

    // 0x23c450: 0x8c860894  lw          $a2, 0x894($a0)
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x23c454: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x23c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x23c458: 0x24a5e3b0  addiu       $a1, $a1, -0x1C50
    ctx->pc = 0x23c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960048));
    // 0x23c45c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23c45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c460: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x23c464: 0x8ca708a4  lw          $a3, 0x8A4($a1)
    ctx->pc = 0x23c464u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3AEC54u));
    // 0x23c468: 0xaca208e8  sw          $v0, 0x8E8($a1)
    ctx->pc = 0x23c468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3AEC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AEC98u, _value); } while (0);
    // 0x23c46c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x23c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x23c470: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x23c470u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x23c474: 0x8c820894  lw          $v0, 0x894($a0)
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x23c478: 0x8ca308a4  lw          $v1, 0x8A4($a1)
    ctx->pc = 0x23c478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AEC54u));
    // 0x23c47c: 0xaca208e0  sw          $v0, 0x8E0($a1)
    ctx->pc = 0x23c47cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3AEC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AEC90u, _value); } while (0);
    // 0x23c480: 0xc48006c0  lwc1        $f0, 0x6C0($a0)
    ctx->pc = 0x23c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c484: 0xe4a008e4  swc1        $f0, 0x8E4($a1)
    ctx->pc = 0x23c484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3AEC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AEC94u, _value); } while (0); }
    // 0x23c488: 0xac830894  sw          $v1, 0x894($a0)
    ctx->pc = 0x23c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 3));
    // 0x23c48c: 0xc4a006d0  lwc1        $f0, 0x6D0($a1)
    ctx->pc = 0x23c48cu;
    { uint32_t bits = FAST_READ32(0x3AEA80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c490: 0xe48006c0  swc1        $f0, 0x6C0($a0)
    ctx->pc = 0x23c490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1728), bits); }
    // 0x23c494: 0x3e00008  jr          $ra
    ctx->pc = 0x23C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C494u;
        // 0x23c498: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C49Cu;
    // 0x23c49c: 0x0  nop
    ctx->pc = 0x23c49cu;
    // NOP
    ctx->pc = 0x23c4a0u;
}
