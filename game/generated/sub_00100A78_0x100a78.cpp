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

// Function: sub_00100A78
// Address: 0x100a78 - 0x100ae8
void sub_00100A78_0x100a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100A78_0x100a78");
#endif

    ctx->pc = 0x100a78u;

    // 0x100a78: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100a7c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x100a80: 0x34637100  ori         $v1, $v1, 0x7100
    ctx->pc = 0x100a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28928);
    // 0x100a84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100a88: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100a8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x100a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x100a90: 0x34a59780  ori         $a1, $a1, 0x9780
    ctx->pc = 0x100a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38784);
    // 0x100a94: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x100a98: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x100a9c: 0x34c65100  ori         $a2, $a2, 0x5100
    ctx->pc = 0x100a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20736);
    // 0x100aa0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x100aa4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x100aa8: 0x34e7b440  ori         $a3, $a3, 0xB440
    ctx->pc = 0x100aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)46144);
    // 0x100aac: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x100aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x100ab0: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
    // 0x100ab4: 0x3508d440  ori         $t0, $t0, 0xD440
    ctx->pc = 0x100ab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54336);
    // 0x100ab8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x100abc: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x100abcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x100ac0: 0x35295100  ori         $t1, $t1, 0x5100
    ctx->pc = 0x100ac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20736);
    // 0x100ac4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x100ac8: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x100ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA220u, _value); } while (0);
    // 0x100acc: 0xac450118  sw          $a1, 0x118($v0)
    ctx->pc = 0x100accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA2D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2D8u, _value); } while (0);
    // 0x100ad0: 0xac46011c  sw          $a2, 0x11C($v0)
    ctx->pc = 0x100ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA2DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2DCu, _value); } while (0);
    // 0x100ad4: 0xac470084  sw          $a3, 0x84($v0)
    ctx->pc = 0x100ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1BCA244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA244u, _value); } while (0);
    // 0x100ad8: 0xac480088  sw          $t0, 0x88($v0)
    ctx->pc = 0x100ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1BCA248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA248u, _value); } while (0);
    // 0x100adc: 0xac490078  sw          $t1, 0x78($v0)
    ctx->pc = 0x100adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1BCA238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA238u, _value); } while (0);
    // 0x100ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x100AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AE0u;
        // 0x100ae4: 0xac440080  sw          $a0, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100AE8u;
}
