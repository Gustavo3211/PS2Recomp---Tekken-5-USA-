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

// Function: sub_003044E0
// Address: 0x3044e0 - 0x304528
void sub_003044E0_0x3044e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003044E0_0x3044e0");
#endif

    switch (ctx->pc) {
        case 0x3044fcu: goto label_3044fc;
        case 0x30450cu: goto label_30450c;
        default: break;
    }

    ctx->pc = 0x3044e0u;

    // 0x3044e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3044e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3044e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3044e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3044e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3044e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3044ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3044ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3044f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3044f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3044f4: 0xc0c1210  jal         func_304840
    ctx->pc = 0x3044F4u;
    SET_GPR_U32(ctx, 31, 0x3044FCu);
    ctx->pc = 0x3044F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044F4u;
    // 0x3044f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304840u, 0x3044F4u, 0x3044FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044FCu;
label_3044fc:
    // 0x3044fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3044fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304504: 0xc0c82a6  jal         func_320A98
    ctx->pc = 0x304504u;
    SET_GPR_U32(ctx, 31, 0x30450Cu);
    ctx->pc = 0x304508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304504u;
    // 0x304508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A98u, 0x304504u, 0x30450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30450Cu;
label_30450c:
    // 0x30450c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x30450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x304510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30451c: 0x3e00008  jr          $ra
    ctx->pc = 0x30451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30451Cu;
        // 0x304520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304524u;
    // 0x304524: 0x0  nop
    ctx->pc = 0x304524u;
    // NOP
    ctx->pc = 0x304528u;
}
