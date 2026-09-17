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

// Function: sub_003446D0
// Address: 0x3446d0 - 0x344738
void sub_003446D0_0x3446d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003446D0_0x3446d0");
#endif

    switch (ctx->pc) {
        case 0x34470cu: goto label_34470c;
        case 0x34472cu: goto label_34472c;
        default: break;
    }

    ctx->pc = 0x3446d0u;

    // 0x3446d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3446d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3446d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3446d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3446d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3446dc: 0x8049e8e  j           func_127A38
    ctx->pc = 0x3446DCu;
    ctx->pc = 0x3446E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446DCu;
    // 0x3446e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    sub_00127A38_0x127a38(rdram, ctx, runtime); return;
    ctx->pc = 0x3446E4u;
    // 0x3446e4: 0x0  nop
    ctx->pc = 0x3446e4u;
    // NOP
    // 0x3446e8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3446ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3446ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3446f0: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x3446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x3446f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3446f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3446f8: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x3446f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4407F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4407F8u, _value); } while (0);
    // 0x3446fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3446fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344700: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x344700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440804u, _value); } while (0);
    // 0x344704: 0xc0d11f4  jal         func_3447D0
    ctx->pc = 0x344704u;
    SET_GPR_U32(ctx, 31, 0x34470Cu);
    ctx->pc = 0x344708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344704u;
    // 0x344708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447D0u, 0x344704u, 0x34470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34470Cu;
label_34470c:
    // 0x34470c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34470cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344710: 0x3e00008  jr          $ra
    ctx->pc = 0x344710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344710u;
        // 0x344714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344718u;
    // 0x344718: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x344718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x34471c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34471cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344724: 0xc0d1292  jal         func_344A48
    ctx->pc = 0x344724u;
    SET_GPR_U32(ctx, 31, 0x34472Cu);
    ctx->pc = 0x344728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344724u;
    // 0x344728: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344A48u, 0x344724u, 0x34472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34472Cu;
label_34472c:
    // 0x34472c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344730: 0x3e00008  jr          $ra
    ctx->pc = 0x344730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344730u;
        // 0x344734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344738u;
}
