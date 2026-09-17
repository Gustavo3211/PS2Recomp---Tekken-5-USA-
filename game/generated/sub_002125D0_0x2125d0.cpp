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

// Function: sub_002125D0
// Address: 0x2125d0 - 0x212618
void sub_002125D0_0x2125d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002125D0_0x2125d0");
#endif

    ctx->pc = 0x2125d0u;

    // 0x2125d0: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x2125d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2125d4: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x2125d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2125d8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2125d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2125dc: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x2125dcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2125e0: 0x70472c88  pextlw      $a1, $v0, $a3
    ctx->pc = 0x2125e0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2125e4: 0x704714a8  pextuw      $v0, $v0, $a3
    ctx->pc = 0x2125e4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2125e8: 0x70c81c88  pextlw      $v1, $a2, $t0
    ctx->pc = 0x2125e8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2125ec: 0x70c834a8  pextuw      $a2, $a2, $t0
    ctx->pc = 0x2125ecu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTUW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2125f0: 0x70653b89  pcpyld      $a3, $v1, $a1
    ctx->pc = 0x2125f0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2125f4: 0x70a32ba9  pcpyud      $a1, $a1, $v1
    ctx->pc = 0x2125f4u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2125f8: 0x70c24389  pcpyld      $t0, $a2, $v0
    ctx->pc = 0x2125f8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x2125fc: 0x704613a9  pcpyud      $v0, $v0, $a2
    ctx->pc = 0x2125fcu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x212600: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x212600u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x212604: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x212604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x212608: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x212608u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x21260c: 0x3e00008  jr          $ra
    ctx->pc = 0x21260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21260Cu;
        // 0x212610: 0x7c880020  sq          $t0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212614u;
    // 0x212614: 0x0  nop
    ctx->pc = 0x212614u;
    // NOP
    ctx->pc = 0x212618u;
}
