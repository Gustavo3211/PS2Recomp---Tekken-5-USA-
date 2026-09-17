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

// Function: sub_00100AE8
// Address: 0x100ae8 - 0x100b48
void sub_00100AE8_0x100ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100AE8_0x100ae8");
#endif

    ctx->pc = 0x100ae8u;

    // 0x100ae8: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100aec: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x100af0: 0x34631440  ori         $v1, $v1, 0x1440
    ctx->pc = 0x100af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5184);
    // 0x100af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100af8: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100afc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x100afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x100b00: 0x34a5b440  ori         $a1, $a1, 0xB440
    ctx->pc = 0x100b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46144);
    // 0x100b04: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x100b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x100b08: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x100b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x100b0c: 0x34c6d440  ori         $a2, $a2, 0xD440
    ctx->pc = 0x100b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54336);
    // 0x100b10: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x100b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x100b14: 0x3c07000e  lui         $a3, 0xE
    ctx->pc = 0x100b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14 << 16));
    // 0x100b18: 0x34e7d1c0  ori         $a3, $a3, 0xD1C0
    ctx->pc = 0x100b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53696);
    // 0x100b1c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x100b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x100b20: 0x3c08000e  lui         $t0, 0xE
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14 << 16));
    // 0x100b24: 0x3508f1c0  ori         $t0, $t0, 0xF1C0
    ctx->pc = 0x100b24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61888);
    // 0x100b28: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x100b2c: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x100b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA29Cu, _value); } while (0);
    // 0x100b30: 0xac450084  sw          $a1, 0x84($v0)
    ctx->pc = 0x100b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA244u, _value); } while (0);
    // 0x100b34: 0xac4600d0  sw          $a2, 0xD0($v0)
    ctx->pc = 0x100b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA290u, _value); } while (0);
    // 0x100b38: 0xac4700d4  sw          $a3, 0xD4($v0)
    ctx->pc = 0x100b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1BCA294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA294u, _value); } while (0);
    // 0x100b3c: 0xac4800d8  sw          $t0, 0xD8($v0)
    ctx->pc = 0x100b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1BCA298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA298u, _value); } while (0);
    // 0x100b40: 0x3e00008  jr          $ra
    ctx->pc = 0x100B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B40u;
        // 0x100b44: 0xac440080  sw          $a0, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100B48u;
}
