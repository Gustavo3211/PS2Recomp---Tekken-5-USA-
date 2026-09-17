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

// Function: sub_002104FC
// Address: 0x2104fc - 0x210520
void sub_002104FC_0x2104fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002104FC_0x2104fc");
#endif

    switch (ctx->pc) {
        case 0x210500u: goto label_210500;
        default: break;
    }

    ctx->pc = 0x2104fcu;

    // 0x2104fc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2104fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_210500:
    // 0x210500: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x210500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x210504: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x210504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210508: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x210508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21050c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21050cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210510: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x210510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x210514: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x210514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210518: 0x3e00008  jr          $ra
    ctx->pc = 0x210518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210518u;
        // 0x21051c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210520u;
}
