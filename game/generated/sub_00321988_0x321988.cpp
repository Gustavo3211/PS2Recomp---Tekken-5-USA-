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

// Function: sub_00321988
// Address: 0x321988 - 0x3219c8
void sub_00321988_0x321988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321988_0x321988");
#endif

    switch (ctx->pc) {
        case 0x3219a0u: goto label_3219a0;
        default: break;
    }

    ctx->pc = 0x321988u;

    // 0x321988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32198c: 0x248409c0  addiu       $a0, $a0, 0x9C0
    ctx->pc = 0x32198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2496));
    // 0x321990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321994: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x321994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x321998: 0xc0cf026  jal         func_33C098
    ctx->pc = 0x321998u;
    SET_GPR_U32(ctx, 31, 0x3219A0u);
    ctx->pc = 0x32199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321998u;
    // 0x32199c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C098u, 0x321998u, 0x3219A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3219A0u;
label_3219a0:
    // 0x3219a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3219a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3219a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3219a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3219a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3219ac: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x3219acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x3219b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3219b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3219b4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3219b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3219b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3219b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3219bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3219BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3219C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219BCu;
        // 0x3219c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3219C4u;
    // 0x3219c4: 0x0  nop
    ctx->pc = 0x3219c4u;
    // NOP
    ctx->pc = 0x3219c8u;
}
