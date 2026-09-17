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

// Function: sub_003745E8
// Address: 0x3745e8 - 0x374648
void sub_003745E8_0x3745e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003745E8_0x3745e8");
#endif

    switch (ctx->pc) {
        case 0x37461cu: goto label_37461c;
        default: break;
    }

    ctx->pc = 0x3745e8u;

    // 0x3745e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3745e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3745ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3745ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3745f0: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x3745f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x3745f4: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x3745f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x3745f8: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x3745f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x3745fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3745FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745FCu;
        // 0x374600: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3745FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374604u;
    // 0x374604: 0x0  nop
    ctx->pc = 0x374604u;
    // NOP
    // 0x374608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37460c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374614: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x374614u;
    SET_GPR_U32(ctx, 31, 0x37461Cu);
    ctx->pc = 0x374618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374614u;
    // 0x374618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x374614u, 0x37461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37461Cu;
label_37461c:
    // 0x37461c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37461cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x374620: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374624: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x374624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
    // 0x374628: 0x246317e0  addiu       $v1, $v1, 0x17E0
    ctx->pc = 0x374628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6112));
    // 0x37462c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x37462cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x374630: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x374630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x374634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374638: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37463c: 0x3e00008  jr          $ra
    ctx->pc = 0x37463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37463Cu;
        // 0x374640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374644u;
    // 0x374644: 0x0  nop
    ctx->pc = 0x374644u;
    // NOP
    ctx->pc = 0x374648u;
}
