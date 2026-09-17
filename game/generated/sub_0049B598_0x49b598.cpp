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

// Function: sub_0049B598
// Address: 0x49b598 - 0x49b5f8
void sub_0049B598_0x49b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B598_0x49b598");
#endif

    switch (ctx->pc) {
        case 0x49b5acu: goto label_49b5ac;
        default: break;
    }

    ctx->pc = 0x49b598u;

    // 0x49b598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49b5a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49b5a4: 0xc127afe  jal         func_49EBF8
    ctx->pc = 0x49B5A4u;
    SET_GPR_U32(ctx, 31, 0x49B5ACu);
    ctx->pc = 0x49B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B5A4u;
    // 0x49b5a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EBF8u, 0x49B5A4u, 0x49B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B5ACu;
label_49b5ac:
    // 0x49b5ac: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49b5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49b5b0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49b5b4: 0x24c60b70  addiu       $a2, $a2, 0xB70
    ctx->pc = 0x49b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2928));
    // 0x49b5b8: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x49b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x49b5bc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x49b5bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B70u, _value); } while (0);
    // 0x49b5c0: 0x246721f8  addiu       $a3, $v1, 0x21F8
    ctx->pc = 0x49b5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8696));
    // 0x49b5c4: 0x246321f4  addiu       $v1, $v1, 0x21F4
    ctx->pc = 0x49b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8692));
    // 0x49b5c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b5cc: 0x960201c4  lhu         $v0, 0x1C4($s0)
    ctx->pc = 0x49b5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x49b5d0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x49b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x72F878u));
    // 0x49b5d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72F874u));
    // 0x49b5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b5dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x49b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x49b5e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x49b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49b5e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x49b5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B70u, _value); } while (0);
    // 0x49b5e8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x49b5e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F878u, _value); } while (0);
    // 0x49b5ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49b5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F874u, _value); } while (0);
    // 0x49b5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x49B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B5F0u;
        // 0x49b5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B5F8u;
}
