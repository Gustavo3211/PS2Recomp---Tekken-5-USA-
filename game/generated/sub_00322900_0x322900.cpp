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

// Function: sub_00322900
// Address: 0x322900 - 0x322948
void sub_00322900_0x322900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322900_0x322900");
#endif

    ctx->pc = 0x322900u;

    // 0x322900: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x322900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x322904: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x322904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x322908: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x322908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x32290c: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x32290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x322910: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x322910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x322914: 0x2463cd40  addiu       $v1, $v1, -0x32C0
    ctx->pc = 0x322914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954304));
    // 0x322918: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x322918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400414u));
    // 0x32291c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x32291cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x322920: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x322920u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x322924: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x322924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x322928: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x322928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32292c: 0xf85c0010  sqc2        $vf28, 0x10($v0)
    ctx->pc = 0x32292cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x322930: 0xf85d0020  sqc2        $vf29, 0x20($v0)
    ctx->pc = 0x322930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x322934: 0xf85e0030  sqc2        $vf30, 0x30($v0)
    ctx->pc = 0x322934u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x322938: 0xf85f0040  sqc2        $vf31, 0x40($v0)
    ctx->pc = 0x322938u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32293c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x32293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x322940: 0x3e00008  jr          $ra
    ctx->pc = 0x322940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322940u;
        // 0x322944: 0xacc20014  sw          $v0, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322948u;
}
