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

// Function: sub_00360950
// Address: 0x360950 - 0x360990
void sub_00360950_0x360950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360950_0x360950");
#endif

    switch (ctx->pc) {
        case 0x360968u: goto label_360968;
        default: break;
    }

    ctx->pc = 0x360950u;

    // 0x360950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36095c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x360960: 0xc0d8264  jal         func_360990
    ctx->pc = 0x360960u;
    SET_GPR_U32(ctx, 31, 0x360968u);
    ctx->pc = 0x360964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360960u;
    // 0x360964: 0x82040022  lb          $a0, 0x22($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360990u, 0x360960u, 0x360968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360968u;
label_360968:
    // 0x360968: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x360968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36096c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360970: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x360970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x360974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360978: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x360978u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x36097c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360980: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x360980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x360984: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x360984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x360988: 0x3e00008  jr          $ra
    ctx->pc = 0x360988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360988u;
        // 0x36098c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360990u;
}
