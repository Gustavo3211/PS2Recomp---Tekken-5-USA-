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

// Function: sub_004925A0
// Address: 0x4925a0 - 0x492600
void sub_004925A0_0x4925a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004925A0_0x4925a0");
#endif

    ctx->pc = 0x4925a0u;

    // 0x4925a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4925a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4925a4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x4925a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x4925a8: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4925a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4925ac: 0x24841500  addiu       $a0, $a0, 0x1500
    ctx->pc = 0x4925acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
    // 0x4925b0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x4925b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D688u));
    // 0x4925b4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x4925b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4925b8: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x4925b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x72D6D8u));
    // 0x4925bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4925bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4925c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4925c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4925c4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x4925c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x4925c8: 0xa422e800  sh          $v0, -0x1800($at)
    ctx->pc = 0x4925c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7EFD00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7EFD00u, _value); } while (0);
    // 0x4925cc: 0x3406e802  ori         $a2, $zero, 0xE802
    ctx->pc = 0x4925ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59394);
    // 0x4925d0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4925d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4925d4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x4925d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x4925d8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x4925d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6E0u));
    // 0x4925dc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x4925dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x4925e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4925e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4925e4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x4925e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x4925e8: 0xa420e804  sh          $zero, -0x17FC($at)
    ctx->pc = 0x4925e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7EFD04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7EFD04u, _value); } while (0);
    // 0x4925ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4925ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7EFD02u));
    // 0x4925f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4925f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4925F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4925F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4925F4u;
        // 0x4925f8: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4925F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4925FCu;
    // 0x4925fc: 0x0  nop
    ctx->pc = 0x4925fcu;
    // NOP
    ctx->pc = 0x492600u;
}
